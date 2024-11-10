from string import ascii_letters , digits , punctuation
from itertools import product

# For cracking 8 letter ASCII with punctuation
for passcode in product(ascii_letters+digits+punctuation, repeat=8):
    print(passcode)