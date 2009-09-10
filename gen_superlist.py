#!/usr/bin/env python

'''
Outputs 300k random numbers between 1 and 10M
'''

import random

random.seed()

for i in range(1,3000000):
	print random.randint(1,10000000)
