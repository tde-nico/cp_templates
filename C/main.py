#!/bin/env python3

def solve(N: int, M: int, B: list[int]) -> str:
	# SCRIVI QUA IL TUO CODICE
	return "Yes"


def main():
	T = int(input())
	for _ in range(T):
		N, M = list(map(int, input().split(' ')))
		S = list(map(int, input().split(' ')))

		print(solve(N, M, S))

if __name__ == '__main__':
	main()
