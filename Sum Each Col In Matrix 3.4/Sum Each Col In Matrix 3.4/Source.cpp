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

int ColSum(int Matrix[3][3], short ColNumber, short Rows)
{
	int Sum = 0;

	for(short i = 0; i <= Rows - 1; i++)
	{
		Sum += Matrix[i][ColNumber];
	}
	return Sum;
}

void PrintColSum(int Matrix[3][3], short Rows, short Cols)
{
	for(short i = 0; i < Cols; i++)
	{
		printf("Col %d Sum = %d\n", i+1, ColSum(Matrix, i, Rows));
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];

	FillMatrixWithRandNumber(Matrix, 3, 3);

	cout<<"\nThe Following is a 3*3 random Matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	cout<<"\nThe Following are The Sum Each Cols in Matrix:\n";
	PrintColSum(Matrix, 3, 3);

	system("pause >0");

}
