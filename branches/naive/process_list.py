#!/usr/bin/env python

import sys

sys.stdout.write("int primes[664579] = {")
primes = []
file = open('./primes_list.txt','r')
for line in file:
	sys.stdout.write(line.strip()+",")
sys.stdout.write("};")
file.close()
