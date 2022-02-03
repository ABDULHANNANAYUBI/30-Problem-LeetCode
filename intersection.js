/*Given two integer arrays nums1 and nums2, 
return an array of their intersection. Each element in the result must be unique and you may 
return the result in any order.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.*/

const a = [4, 9, 5];
const b = [9, 4, 9, 8, 4];

const fun = function (a, b) {
  // getting thw two numbers
  let res = new Set(); // creating a set for not getting duplicated
  for (let index = 0; index < a.length; index++) {
    // for checking the first array index
    for (let j = 0; j < b.length; j++) {
      // for checking the second array index
      if (a[index] === b[j]) {
        // if the two are the same it means the intersections
        res.add(a[index]); // adding to the set
        break; // breaking the loopg
      }
    }
  }
  return Array.from(res); // return an array changing from set
};

console.log(fun(a, b));
