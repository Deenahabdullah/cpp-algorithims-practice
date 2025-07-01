#include<iostream>
#include<iomanip>
using namespace std;

int GenerateRandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}

void FillMatrixWithRandNumber(int Matrix[3][3], short Rows, short Cols)
{
	for(short i = 0; i <= Rows - 1; i++)
	{
		for(short j = 0; j <= Cols - 1; j++)
		{
			Matrix[i][j] = GenerateRandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for(short i = 0; i <= Rows - 1; i++)
	{
		for(short j = 0; j <= Cols - 1; j++)
		{
			cout<<setw(3)<<Matrix[i][j]<<"   ";
		}
		cout<<endl;
	}

}

int RowSum(int Matrix[3][3], short RowNumber, short Cols)
{
	int Sum = 0;

	for(short j = 0; j < Cols; j++)
	{
		Sum += Matrix[RowNumber][j];
	}

	return Sum;
}

void FillRowSumInArray(int Matrix[3][3], int arrSum[3], short Rows, short Cols)
{
	for(short i = 0; i < Rows; i++)
	{
		arrSum[i] = RowSum(Matrix, i, Cols);

	}
}

void PrintArray(int arrSum[3], short Rows)
{
	for(short i = 0; i <= Rows - 1; i++)
	{
		printf("Row %d Sum = %d\n", i + 1 , arrSum[i]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];
	int arrSum[3];

	FillMatrixWithRandNumber(Matrix, 3, 3);
	FillRowSumInArray(Matrix, arrSum, 3, 3);

	cout<<"\nThe Following is a 3*3 random Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	cout<<"\nThe Following are The Sum Each Row in Matrix in Array:\n";
	PrintArray(arrSum, 3);

	system("pause >0");

}
