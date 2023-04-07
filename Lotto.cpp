#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	int ball[45] = { 0 };

	for (int i = 0; i < 45; i++)
	{

		ball[i] = i + 1;
		
	}

	

	srand(time(0));
	int Myball[6] = {0};

	for (int i = 0; i <= 5; i++)
	{
		int r = rand() % 45 + 1;
		Myball[i] = ball[r];
		//ball[r]
		for (int j = 1; i + j <= 5 && 0<=i-j; j++)
		{
			if (Myball[i] == Myball[i+j] || Myball[i] == Myball[i - j])
			{
				cout << "중복입니다." << endl;
				
			}

		
		}
		

		cout << Myball[i] << endl;


	}

	return 0;
}