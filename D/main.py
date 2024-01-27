#!/bin/env python3

def solve(N: int, X: list[int], Y: list[int]) -> tuple[int]:
	# SCRIVI QUA IL TUO CODICE
	return (0, 0)


def main():
	N = int(input())
	X = list(map(int, input().split(' ')))
	Y = list(map(int, input().split(' ')))

	print(*solve(N, X, Y))

if __name__ == '__main__':
	main()
