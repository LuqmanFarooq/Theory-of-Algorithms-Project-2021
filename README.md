# Theory-of-Algorithms-Project-2021
## Overview
The goal of this project is to write a program in C language to perform the 512-bit version of Secure Hash Algorithm (SHA) algorithm. To complete this project, I have read the Secure Hash Standard and I have followed its guidelines which are available under the resources section of this readme. Also, I watched the videos on SHA-256 by our Instructor Ian and followed them and additionally i watched tutorials to help me understand how SHA512 algorithm works.
# SHA-512
Sha-512 is a function of cryptographic algorithm Sha-2, which is an evolution of famous Sha-1. Sha-512 is very close to its "brother" Sha-256 except that it used 1024 bits "blocks", and accept as input a 2^128 bits maximum length string. Sha-512 also has others algorithmic modifications in comparison with Sha-256. This cryptographic function is part of the U.S Federal Information Processing Standard.
SHA-512 may be used to hash a message, M, having a length of l bits, where 0 <= l <= 2^128. The algorithm uses 
1. A message schedule of eighty 64-bit words.
2. Eight working variables of 64 bits each.
3. A hash value of eight 64-bit words.
The final result of SHA-512 is a 512-bit message digest.
# References
1. [*Secure Hash Standard*, Quynh H. Dang,<br> https://www.nist.gov/publications/secure-hash-standard](https://www.nist.gov/publications/secure-hash-standard)
2. [*Secure Hash Algorithms*, Brilliant.org,<br> https://brilliant.org/wiki/secure-hashing-algorithms/](https://brilliant.org/wiki/secure-hashing-algorithms/)
3. [*SHA 2 Family*,<br> https://en.wikipedia.org/wiki/SHA-2](https://en.wikipedia.org/wiki/SHA-2)
4. [*SHA-512 Encryption & Decryption*,<br> https://md5decrypt.net/en/Sha512/#:~:text=About%20Sha512%20%3A,128%20bits%20maximum%20length%20string.](https://md5decrypt.net/en/Sha512/#:~:text=About%20Sha512%20%3A,128%20bits%20maximum%20length%20string.)
5. [*Wiki - Padding*,<br> https://en.wikipedia.org/wiki/Padding_(cryptography)/](https://en.wikipedia.org/wiki/Padding_(cryptography))
6. [*Why is message always padded*,<br> https://crypto.stackexchange.com/questions/2753/in-the-sha-hash-algorithm-why-is-the-message-always-padded](https://crypto.stackexchange.com/questions/2753/in-the-sha-hash-algorithm-why-is-the-message-always-padded)
