#include<iostream>
#include<iomanip>
using namespace std;

int GenerateRandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}

void FillMatrixWithRandNumbers(int Matrix[3][3], short Rows, short Cols)
{
	for(short i = 0; i < Rows; i++)
	{
		for(short j = 0; j < Cols; j++)
		{
			Matrix[i][j] = GenerateRandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for(short i = 0; i < Rows; i++)
	{
		for(short j = 0; j < Cols; j++)
		{
			cout<<setw(3)<<Matrix[i][j]<<"  ";
		}
		cout<<"\n";
	}
}

void MultipleMatrix(int  Matrix1[3][3], int Matrix2[3][3] ,int MultMatrix[3][3], short Rows, short Cols)
{
	
	for(short i = 0; i < Rows; i++)
	{
		for(short j = 0; j < Cols; j++)
		{
			MultMatrix[i][j] = Matrix1[i][j] * Matrix2[i][j];
		}
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3], Matrix2[3][3], MultMatrix[3][3];

	FillMatrixWithRandNumbers(Matrix1, 3, 3);
	cout<<"\nMatrx1:\n";
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandNumbers(Matrix2, 3, 3);
	cout<<"\nMatrix2:\n";
	PrintMatrix(Matrix2, 3, 3);

	MultipleMatrix(Matrix1, Matrix2, MultMatrix, 3, 3);
	cout<<"\nMultiple Matrix:\n";
	PrintMatrix(MultMatrix, 3, 3);

	system("pause > 0");

}
