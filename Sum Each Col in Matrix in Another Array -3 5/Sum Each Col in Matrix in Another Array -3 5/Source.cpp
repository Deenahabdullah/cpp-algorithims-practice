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
			Matrix[i][j] = GenerateRandomNumber(1, 100);
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

int ColSum(int Matrix[3][3], short ColNumber, short Rows)
{
	int Sum = 0;

	for(short i = 0; i < Rows; i++)
	{
		Sum += Matrix[i][ColNumber];
	}

	return Sum;
}

void FillArray(int Matrix[3][3], int arrSum[3], short Rows, short Cols)
{
	for(short i = 0; i < Cols; i++)
	{
		arrSum[i] = ColSum(Matrix, i, Rows);
	}	
}

void PrintArray(int arrSum[3], short Rows)
{
	for(short i = 0; i < Rows; i++)
	{
		printf("Col %d Sum =  %d\n", i+1, arrSum[i]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];
	int arrSum[3];

	FillMatrixWithRandNumbers(Matrix, 3, 3);
	FillArray(Matrix, arrSum, 3, 3);

	cout<<"\nThe following is 3D random Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	cout<<"\nThe following are the sum of each col in Matrix in another Array:\n";
	PrintArray(arrSum, 3);

	system("pause > 0");

}