#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

class FBall
{
public:
		int number;

};

class FPocket
{
public:
	FPocket()
	{

		for (int i = 0; i < 45l; ++i)
		{
			FBall NewBall;
			NewBall.number = i + 1;
			Balls.push_back(NewBall);

		}

	}




	void Shuffle()
	{
		random_shuffle(Balls.begin(), Balls.end());
	}

	FBall Draw()
	{
		FBall DrawBall = *(Balls.begin());
			Balls.erase(Balls.begin());
			return DrawBall;
	}

	vector <FBall> Balls;
};

int main()
{

	FPocket* Pocket= new FPocket();
	Pocket->Shuffle();

	for(int i =0; i<6; ++i)
	{
		cout << Pocket->Draw().number << endl;
	}

	delete Pocket;
	//int Ball[45];
	//
	//for (int i = 0; i < 45; i++)
	//{

	//	Ball[i] = i + 1;
	//	
	//}

	//
	//srand((unsigned int)time(0));
	//for (int i = 0; i < 45 * 10000; ++i)
	//{
	//	int First = (rand() % 45);
	//	int Second = (rand() % 45);
	//	int Temp = Ball[First];
	//	Ball[First] = Ball[Second];
	//	Ball[Second] = Ball[Temp];
	//}


	//for (int i = 0; i < 6; ++i)
	//{
	//	
	//	cout << Ball[i] << endl;
	//}

	return 0;
}