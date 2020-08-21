# Using Bit XOR
An alternative method of solving this problem is using the fact that numbers xor to itself is always 0.

Since there is only 1 missing number with `n` possible numbers and `n-1` indices (given numbers), we can XOR all the indices & values with the original `n`, we can find the missing value.
This is due to all the present values canceling with their indices due to XOR.