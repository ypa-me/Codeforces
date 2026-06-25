const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').split(/\s+/);
let idx = 0;

const t = parseInt(input[idx++], 10);

for (let tc = 0; tc < t; tc++) {
    const n = parseInt(input[idx++], 10);
    const dishes = [];
    let maxVal = -Infinity;

    for (let i = 0; i < n; i++) {
        const val = parseInt(input[idx++], 10);
        dishes.push(val);
        if (val > maxVal) maxVal = val;
    }

    let count = 0;
    for (let i = 0; i < n; i++) {
        if (dishes[i] === maxVal) count++;
    }

    process.stdout.write(count + '\n');
}