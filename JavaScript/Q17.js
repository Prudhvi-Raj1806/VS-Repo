let op = '+';
let num1 = 10, num2 = 5;
switch (op) {
  case '+': console.log(`${num1} + ${num2} = ${num1 + num2}`); break;
  case '-': console.log(`${num1} - ${num2} = ${num1 - num2}`); break;
  case '*': console.log(`${num1} * ${num2} = ${num1 * num2}`); break;
  case '/': console.log(`${num1} / ${num2} = ${num1 / num2}`); break;
  default: console.log("Invalid operator.");
}