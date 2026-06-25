const lines = require('fs').readFileSync('/dev/stdin', 'utf8').split('\n');
let idx = 0;

const t = parseInt(lines[idx++]);
const results = [];

for (let tc = 0; tc < t; tc++) {
    //parsing the data
    const [n, q] = lines[idx++].split(' ').map(Number);
    const a = lines[idx++].split(' ').map(Number);
    const b = lines[idx++].split(' ').map(Number);
    

    //finding best (largest) i
    //seems complicated but it isnt
    //takes the rightmost value and then compares it with the right if there is a value greater there, the just records highest value/
    
    const best = new Array(n + 2).fill(0);
    for (let i = n - 1; i >= 0; i--) {
        best[i] = Math.max(a[i], b[i], best[i + 1]);
    }

    

    // this is for query addition
    // mucch more fast and effiicent than looping

    
    
    //making the prefix sum
    const prefix = new Array(n + 1).fill(0);
    for (let i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + best[i];
    }

    //querying it
    const queryResults = [];
    for (let qi = 0; qi < q; qi++) {
        const [l, r] = lines[idx++].split(' ').map(Number);
        queryResults.push(prefix[r] - prefix[l - 1]);
    }
    results.push(queryResults.join(' '));
}

console.log(results.join('\n'));