#include <iostream>

using namespace std;

#define N 5
#define M 5

void user_matrix_init(int matrix[N][M]) {

	for (int i = 0; i < N; i++)
	{
		cout << "\n" << i + 1 << ". ";
		for (int j = 0; j < M; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

bool null_matrix(int matrix[N][M]) {

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (matrix[i][j] != 0) {
				return false;
			}
		}
	}
	return true;
}

bool diagonal_matrix(int matrix[N][M]) {

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (matrix[i][j] != 0 && i != j) {
				return false;
			}
		}
	}
	return true;
}

bool single_matrix(int matrix[N][M]) {

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if ((matrix[i][j] != 0 && i != j) || (matrix[i][j] != 1 && i == j)) {
				return false;
			}
		}
	}
	return true;
}

bool side_diagonal_matrix(int matrix[N][M]) {

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (matrix[i][j] != 0 && i + j != N - 1) {
				return false;
			}
		}
	}
	return true;
}

bool side_single_matrix(int matrix[N][M]) {

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if ((matrix[i][j] != 0 && i + j != N - 1) 
				|| (matrix[i][j] != 1 && i + j == N - 1 )) {
				return false;
			}
		}
	}
	return true;
}
