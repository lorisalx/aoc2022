import {input} from "./input"

const lists = input.split('\n\n').map((listString) => {
  return listString.split('\n').map((str) => parseInt(str, 10));
});

let maxCals: number[] = [];
lists.forEach(list => {
  let sum = list.reduce((a,b) => a + b, 0);
  maxCals.push(sum)
});
maxCals.sort((a,b) => b - a)

console.log(maxCals[0])
console.log(maxCals[0] + maxCals[1] + maxCals[2])