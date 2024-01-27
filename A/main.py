#!/bin/env python3

def solve(A: int, B: int) -> int:
	# SCRIVI QUA IL TUO CODICE
	return 0


def main():
	T = int(input())
	for _ in range(T):
		A, B = list(map(int, input().split(' ')))

		print(solve(A, B))

if __name__ == '__main__':
	main()
