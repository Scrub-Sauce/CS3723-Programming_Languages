days = 0
def DaysInMonth(year, month):
    if year % 4 == 0 and month == 2:
        days = 29
    elif month == 2:
        days = 28
    elif month in (4, 6, 9, 11):
        days = 30
    else:
        days = 31

DaysInMonth(2004, 2)
print (days)
