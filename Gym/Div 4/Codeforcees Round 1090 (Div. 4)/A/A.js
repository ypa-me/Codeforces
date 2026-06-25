"use strict";

const fs = require('fs');

function solve() {
    // Read the entire input buffer
    const input = fs.readFileSync(0);
    let offset = 0;

    // Helper to extract the next integer from the buffer
    function nextInt() {
        while (offset < input.length && (input[offset] < 48 || input[offset] > 57) && input[offset] !== 45) {
            offset++;
        }
        if (offset >= input.length) return null;
        
        let neg = false;
        if (input[offset] === 45) { // Check for minus sign '-'
            neg = true;
            offset++;
        }

        let res = 0;
        while (offset < input.length && input[offset] >= 48 && input[offset] <= 57) {
            res = res * 10 + (input[offset] - 48);
            offset++;
        }
        return neg ? -res : res;
    }

    const t = nextInt();
    let results = "";

    for (let i = 0; i < t; i++) {
        const x = nextInt();
        if (x === null) break;
        // The problem asks to maximize min(x, y). 
        // y = x + 1 is always >= x, so min(x, y) = x.
        results += (x + 1) + "\n";
        
        // Periodically flush string to manage memory
        if (i % 1000 === 0) {
            process.stdout.write(results);
            results = "";
        }
    }
    process.stdout.write(results);
}

solve();