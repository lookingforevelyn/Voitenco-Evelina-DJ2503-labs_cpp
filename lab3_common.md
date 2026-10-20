•	Explain how to derive the maximum number that can be stored in one byte. What about two bytes?
One byte has 8 bits. Each bit can be 0 or 1. The maximum number is 2^8 - 1 = 255. Two bites have 16 bits, the maximum number is 2^16 – 1 = 65535. The formula is Maximum = 2^n – 1.
•	Why is this maximum number one less than the number of possible combinations of bits in those positions?
Because we start counting at 0, for 8 bits, we have 256 possible combinations, from 0 to 255, so the maximum number is 255 not 256.
•	Given a number x (for example, 0000 0011), what must be done to obtain the representation of its negative (in the two’s complement system)? Derive a formula/algorithm (1111 1101).
We need to change 0s to 1s and 1s to 0s and add an 1 after changing the 0s and 1s.
•	Under what conditions does a+b<aa+b<a if both aa and bb are positive and represented using 8 bits?
When the numbers are greater than 1 and the sum is smaller than 256.
•	What digits are used in the hexadecimal system?
The hexadecimal uses 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E and F.
•	How do you convert 0101 1111 to hexadecimal?
We need to divide the number in two groups, for example 01011111 in: 0101 1111, and check the number in the hexadecimal system, 0101 is 5 and 1111 is F in hexadecimal system, so the answer is 5F.
•	In which other numeral systems can an 8-bit value be written without performing calculations?
It can be easily written in the octal and hexadecimal systems by grouping the bits. For octal in three and hexadecimal in four, as the example above.

