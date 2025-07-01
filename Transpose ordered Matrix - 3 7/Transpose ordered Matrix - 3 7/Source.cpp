#include<iostream>
#include<iomanip>
using namespace std;

void FillMatrixWithOrderedNumbers(int Matrix[3][3], short Rows, short Cols)
{
	int OrderedNumber = 0;

	for(short i = 0; i < Rows; i++)
	{
		for(short j = 0; j < Cols; j++)
		{
			OrderedNumber++;
			Matrix[i][j] = OrderedNumber;
		}
	}
}

void FillTransposeMatrix(int Matrix[3][3], int TransMatrix[3][3], short Rows, short Cols)
{
	for(short i = 0; i < Rows; i++)
	{
		for(short j = 0; j < Cols; j++)
		{
			TransMatrix[j][i] = Matrix[i][j];
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

int main()
{
	int Matrix[3][3];
	int TransMatrix[3][3];

	FillMatrixWithOrderedNumbers(Matrix, 3, 3);
	FillTransposeMatrix(Matrix, TransMatrix ,3, 3);
	cout<<"\nThe following is a 3D Ordered Matrix:\n\n";
	PrintMatrix(Matrix, 3, 3);


	cout<<"\nThe following is a 3D Transpose Ordered Matrix:\n\n";
	PrintMatrix(TransMatrix, 3, 3);

	system("pause > 0");
}