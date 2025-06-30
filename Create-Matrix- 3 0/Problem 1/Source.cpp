#include<iostream>
#include<iomanip>
using namespace std;

int GenerateRandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols)
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
	for(short i = 0; i <= Rows - 1; i++)
	{
		for(short j = 0; j <= Cols - 1; j++)
		{
			cout<<setw(3)<<Matrix[i][j]<<"  ";
		}
		cout<<endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix[3][3];
	FillMatrixWithRandomNumbers(Matrix, 3, 3);

	cout<<"\nThe Following is a 3 * 3 Random Matrix:\n";
	PrintMatrix(Matrix, 3, 3);


	system("pause > 0");
}
