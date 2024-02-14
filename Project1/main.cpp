#include <iostream>

#define N 5
#define M 5

using namespace std;

void user_matrix_init(int matrix[N][M]);
bool null_matrix(int matrix[N][M]);
bool single_matrix(int matrix[N][M]);
bool diagonal_matrix(int matrix[N][M]);
bool side_diagonal_matrix(int matrix[N][M]);
bool side_single_matrix(int matrix[N][M]);

int main() {

	int matrix[N][M];

	user_matrix_init(matrix);

	string strNull = null_matrix(matrix) ? "" : "n't";
	string strDiagonal = diagonal_matrix(matrix) ? "" : "n't";
	string strSingle = single_matrix(matrix) ? "" : "n't";
	string strSideDiagonal = side_diagonal_matrix(matrix) ? "" : "n't";
	string strSideSingle = side_single_matrix(matrix) ? "" : "n't";

	cout << "Your matrix is" << strNull << " null";
	cout << "\nYour matrix is" << strDiagonal << " diagonal";
	cout << "\nYour matrix is" << strSingle << " single";
	cout << "\nYour matrix is" << strSideDiagonal << " side diagonal";
	cout << "\nYour matrix is" << strSideSingle << " side single";

	return 0;
}
