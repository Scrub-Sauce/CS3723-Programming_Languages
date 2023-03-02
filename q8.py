#!/usr/bin/python3
import re
line = "   this   is   a   long   line   "
pieces = re.split("[is]", line)
print(len(pieces))
