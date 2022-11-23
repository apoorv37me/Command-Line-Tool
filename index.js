#! /usr/bin/env node

// we want mainly 3 things from this file
// run , build, test
const { program } = require("commander");
const { exec } = require("child_process");
const { readFileSync } = require("fs");

function trim(Output) {
  let t = "" + Output;
  let s = "";
  for (let i = 0; i + 1 < t.length; i++) {
    if (t[i] == " " && (t[i + 1] == " " || t[i + 1] === "\n")) continue;
    if (t[i] == "\n" && t[i + 1] == "\n") continue;
    if ((t[i] == " " || t[i] == "\n") && s.length == 0) continue;
    if ((t[i] == " " || t[i] == "\n") && s[s.length - 1] === "\n") continue;
    s += t[i];
  }
  if (s[s.length - 1] != "\n") s += "\n";
  return s;
}

program
  .command("build <filename>")
  .description("Builds current file")
  .action(function (filename) {
    exec(`build.sh ${filename}`, (error, stdout, stderr) => {
      if (error) {
        console.log(`error: ${error.message}`);
        return;
      }
      if (stderr) {
        console.log(`stderr: ${stderr}`);
        return;
      }
      console.log(`stdout: "Success"`);
    });
  });

program
  .command("run <filename>")
  .description("Builds and runs current file")
  .action(function (filename) {
    exec(
      `build.sh ${filename} && ./${filename} < in`,
      (error, stdout, stderr) => {
        if (error) {
          console.log(`error: ${error.message}`);
          return;
        }
        if (stderr) {
          console.log(`stderr: ${stderr}`);
          return;
        }
        console.log(stdout);
      }
    );
  });

program
  .command("test <filename>")
  .description("tests current file")
  .action(function (filename) {
    exec(
      `build.sh ${filename} && ./${filename} < ${filename}.in`,
      (error, stdout, stderr) => {
        if (error) {
          console.log(`error: ${error.message}`);
          return;
        }
        if (stderr) {
          console.log(`stderr: ${stderr}`);
          return;
        }

        // last newlines remove, remove multiple consecutive spaces/newlines
        const testFile = readFileSync(`${filename}.out`).toString();
        test1 = trim(testFile);
        out1 = trim(stdout);
        if (test1 === out1) {
          console.log("AC");
        } else {
          console.log("WA");
          console.log("Correct Output:");
          console.log(testFile);
          console.log("Your Output:");
          console.log(stdout);
        }
      }
    );
  });

program.parse();
