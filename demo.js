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
let cur = "hello  \n\n new  world \n\n"; // "hello\new world\n"
cur = trim(cur);
console.log(cur);
