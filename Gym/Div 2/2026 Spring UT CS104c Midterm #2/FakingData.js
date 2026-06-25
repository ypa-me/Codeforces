

const fs = require('fs');

function solve(arr) {
    var n = arr.length;
    
    function costPatternA() {
        var cost = 0, target, i;
        for (i = 0; i < n; i += 2) {
            if (i === 0) {
                target = arr[1] - 1;
            } else if (i === n - 1) {
                target = arr[n - 2] - 1;
            } else {
                target = Math.min(arr[i - 1], arr[i + 1]) - 1;
            }
            if (arr[i] > target) {
                cost += arr[i] - target;
            }
        }
        return cost;
    }
    
    function costPatternB() {
        var cost = 0, target, i;
        for (i = 1; i < n; i += 2) {
            if (i === n - 1) {
                target = arr[n - 2] - 1;
            } else {
                target = Math.min(arr[i - 1], arr[i + 1]) - 1;
            }
            if (arr[i] > target) {
                cost += arr[i] - target;
            }
        }
        return cost;
    }
    
    if (n === 1) return 0;
    return Math.min(costPatternA(), costPatternB());
}

var input = fs.readFileSync(0, 'utf-8').trim().split('\n');
var n = parseInt(input[0]);
var arr = input[1].split(' ').map(Number);

console.log(solve(arr));