# Theory-of-Algorithms-Project-2021
## Overview
The goal of this project is to write a program in C language to perform the 512-bit version of Secure Hash Algorithm (SHA) algorithm. To complete this project, I have read the Secure Hash Standard and I have followed its guidelines which are available under the resources section of this readme. Also, I watched the videos on SHA-256 by our Instructor Ian and followed them and additionally i watched tutorials to help me understand how SHA512 algorithm works.
## SHA-512
Sha-512 is a function of cryptographic algorithm Sha-2, which is an evolution of famous Sha-1. Sha-512 is very close to its "brother" Sha-256 except that it used 1024 bits "blocks", and accept as input a 2^128 bits maximum length string. Sha-512 also has others algorithmic modifications in comparison with Sha-256. This cryptographic function is part of the U.S Federal Information Processing Standard.
SHA-512 may be used to hash a message, M, having a length of l bits, where 0 <= l <= 2^128. The algorithm uses 
1. A message schedule of eighty 64-bit words.
2. Eight working variables of 64 bits each.
3. A hash value of eight 64-bit words.
The final result of SHA-512 is a 512-bit message digest.
## Why can't we reverse the SHA512 algorithm to retrieve the original message from a hash digest?
SHA-512 is one-way function which means given a hash of an input, no one knows how to find the input better than guessing, and the world's best cryptographers have tried.
SHA-512 is not encrypted rather it is hashed and hashes are one way functions they cannot be reversed.Hash functions can not be decrypted also in sense that there are infinitively (or nearly infinitively) many inputs that give the same output (since the size of input is arbitrary or nearly arbitrary and length of output is fixed), so you'll never know which one is the "right" one.
However, guessing is always an option. Simply try a large number of inputs before you find one with the desired hash value. If the input is a part of a small set, such as a dictionary phrase, this can be done very easily. However, if the input contains a large number of unknown bits, it is impossible.
There are some websites where decrypt is also mentioned but actually they dont “decrypt” anything. What they do is, they calculated a lot of hash values and stored them in a database. When you put a hash to reverse, they look it up in the database. This only works if the hash is one that they have in the database.
One big reason you can't reverse the hash function is because data is lost.
### Example 1
***Thought experiment:*** You have 200 bytes you pass to SHA512, out come 64 bytes. Something has been lost. How do you regain what is lost?
In a similar manner if you have an integer, say 123, and mod by 10 the result would be 3. Now reverse that–oh it could have been and of 3, 13, 23, 33, 123, 9343453, *3.

### Example 2
Consider a simple example function: 'OR'. If you apply that to your input data of 1 and 0, it yields 1. But now, if you know the answer is '1', how do you back out the original data? You can't. It could have been 1,1 or maybe 0,1, or maybe 1,0.

### Example 3
SHA-512 is specified for input strings of up to 18446744073709551615 bits; there are 2^18446744073709551616-1 possible inputs, but since the output is always a sequence of 512 bits, SHA-512 has only 2^512 possible outputs. Any distinct inputs must necessarily result in the same output. Therefore, for a given output of SHA-512, it is not possible to unambiguously recover the input which was used, but, possibly, it might be possible to compute an input which yields the given output value.

# References
1. [*Secure Hash Standard*, Quynh H. Dang,<br> https://www.nist.gov/publications/secure-hash-standard](https://www.nist.gov/publications/secure-hash-standard)
2. [*Secure Hash Algorithms*, Brilliant.org,<br> https://brilliant.org/wiki/secure-hashing-algorithms/](https://brilliant.org/wiki/secure-hashing-algorithms/)
3. [*SHA 2 Family*,<br> https://en.wikipedia.org/wiki/SHA-2](https://en.wikipedia.org/wiki/SHA-2)
4. [*SHA-512 Encryption & Decryption*,<br> https://md5decrypt.net/en/Sha512/#:~:text=About%20Sha512%20%3A,128%20bits%20maximum%20length%20string.](https://md5decrypt.net/en/Sha512/#:~:text=About%20Sha512%20%3A,128%20bits%20maximum%20length%20string.)
5. [*Wiki - Padding*,<br> https://en.wikipedia.org/wiki/Padding_(cryptography)/](https://en.wikipedia.org/wiki/Padding_(cryptography))
6. [*Why is message always padded*,<br> https://crypto.stackexchange.com/questions/2753/in-the-sha-hash-algorithm-why-is-the-message-always-padded](https://crypto.stackexchange.com/questions/2753/in-the-sha-hash-algorithm-why-is-the-message-always-padded)
7. [*Why are hash functions one way? If I know the algorithm, why can't I calculate the input from it?*,<br> https://security.stackexchange.com/questions/11717/why-are-hash-functions-one-way-if-i-know-the-algorithm-why-cant-i-calculate-t](https://security.stackexchange.com/questions/11717/why-are-hash-functions-one-way-if-i-know-the-algorithm-why-cant-i-calculate-t)
8. [*SHA-512 Explained*,<br> https://www.freeformatter.com/sha512-generator.html](https://www.freeformatter.com/sha512-generator.html)
9. [*Can SHA or MD5 results be decrypted?*,<br> https://crypto.stackexchange.com/questions/59924/can-sha-or-md5-results-be-decrypted](https://crypto.stackexchange.com/questions/59924/can-sha-or-md5-results-be-decrypted)
10. [*Why can't we reverse hashes?*,<br> https://crypto.stackexchange.com/questions/45377/why-cant-we-reverse-hashes#:~:text=Bit%20dependency%3A%20A%20hash%20algorithm,of%20the%20output%20hash%20separately.](https://crypto.stackexchange.com/questions/45377/why-cant-we-reverse-hashes#:~:text=Bit%20dependency%3A%20A%20hash%20algorithm,of%20the%20output%20hash%20separately.)
11. [*Does the SHA hash function always generate a fixed length hash?
*,<br> https://crypto.stackexchange.com/questions/2144/does-the-sha-hash-function-always-generate-a-fixed-length-hash](https://crypto.stackexchange.com/questions/2144/does-the-sha-hash-function-always-generate-a-fixed-length-hash)
