// Sum of every positive element

const input = [1, -4, 12, 0, -3, 29, -150];

const sum = input
  .filter(x => x > 0)
  .reduce((a, b) => a + b, 0);

console.log(sum);

