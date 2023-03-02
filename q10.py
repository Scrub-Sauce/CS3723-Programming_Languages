ones = ("zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
                "eighteen", "nineteen")
tens = ("", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty",
        "ninety", "one hundred")

def NumStr(n):
    if n == 100:
        return tens[10]

    elif n < 0 or n > 100:
          return "Error"

    elif n > 20:
        o = n % 10
        t = (n // 10)
        return tens[t] + " " + ones[o]

    elif n < 20:
        return ones[n]

    elif n == 20:
        return tens[2]

            # TBD - insert your code here. Check for < 20 first.
              # Then check for multiples of 10.
                # Otherwise it must need both a tens and ones part, like 45.

if NumStr(0) != "zero": print("Failed for 0")
if NumStr(4) != "four": print("Failed for 4")
if NumStr(10) != "ten": print("Failed for 10")
if NumStr(15) != "fifteen": print("Failed for 15")
if NumStr(20) != "twenty": print("Failed for 20")
if NumStr(45) != "forty five": print("Failed for 45")
if NumStr(99) != "ninety nine": print("Failed for 99")
if NumStr(100) != "one hundred": print("Failed for 100")
if NumStr(22222) != "Error": print("Failed for 22222")
