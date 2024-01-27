#!/bin/env python3

def solve(N: int, A: list[int], B: list[int]) -> str:
	# SCRIVI QUA IL TUO CODICE
	return "Yes"


def main():
	T = int(input())
	for _ in range(T):
		N = int(input())
		A = list(map(int, input().split(' ')))
		B = list(map(int, input().split(' ')))

		print(solve(N, A, B))

if __name__ == '__main__':
	main()
