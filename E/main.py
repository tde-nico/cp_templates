#!/bin/env python3

def solve(a:int, b:int, c:int, d:int, e:int, strade:list[list[int]], voli:list[list[int]]) -> int:
	# SCRIVI QUA IL TUO CODICE
	return 0


def main():
	a, b, c, d, e = list(map(int, input().split(' ')))
	strade = [[None] * 3 for _ in range(b)]
	voli = [[None] * 2 for _ in range(c)]
	
	for w in range(b):
		f, g, h = list(map(int, input().split(' ')))
		strade[w][0], strade[w][1], strade[w][2] = f, g, h
	
	for w in range(c):
		i, l = list(map(int, input().split(' ')))
		voli[w][0], voli[w][1], = i, l

	print(solve(a, b, c, d, e, strade, voli))

if __name__ == '__main__':
	main()
