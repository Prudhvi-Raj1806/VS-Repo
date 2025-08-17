let num1 = 10, num2 = 5, num3 = 12;
if (num1 <= num2 && num1 <= num3) {
  console.log(`The smallest number is ${num1}.`);
} else if (num2 <= num1 && num2 <= num3) {
  console.log(`The smallest number is ${num2}.`);
} else {
  console.log(`The smallest number is ${num3}.`);
}