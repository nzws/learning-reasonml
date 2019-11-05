let greeters = [
  "BuckleScript",
  "Reason",
  "@imbsky",
  "@haritaso",
  "world",
  "money",
  "kawaii girl",
  "osage",
];

let greeting = greeters => {
  let last = greeters->Belt.List.size - 1;
  let greetersStr =
    String.concat(
      ", ",
      greeters->Belt.List.take(last)->Belt.Option.getWithDefault([]),
    );
  let greeterLast =
    greeters->Belt.List.get(last)->Belt.Option.getWithDefault("");

  "Hello, " ++ greetersStr ++ " and " ++ greeterLast ++ "!!";
};

greeters->greeting->Js.log;
