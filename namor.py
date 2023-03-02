import sys

ones = (("IX", 9), ("VIII", 8), ("VII", 7), ("VI", 6), ("V", 5), ("IV", 4), ("III", 3), ("II", 2), ("I", 1))
tens = (("XC", 90), ("LXXX", 80), ("LXX", 70), ("LX", 60), ("L", 50), ("XL", 40), ("XXX", 30), ("X", 20), ("X", 10))
hunds = (("CM", 900), ("DCCC", 800), ("DCC", 700), ("DC", 600), ("D", 500), ("CD", 400), ("CCC", 300), ("CC", 200), ("C", 100))
thous = (("MMM", 3000), ("MM", 2000), ("M", 1000))

def fromRoman(rom):
    sum = 0

    for lis in (thous, hunds, tens, ones):
        for x, n in lis:
            if rom.startswith(x):
                sum += n
                rom = rom[len(x):]
                break

    if rom != "": return 0
    return sum

for rom in sys.argv[1:]:
    num = fromRoman(rom.upper())
    print("%s is %d" % (rom, num))

