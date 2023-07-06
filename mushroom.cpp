#include<iostream>
using namespace std;
	
string typemushroom()
{
	int answer;
	string mushroom;
	
	// gills and pores
	cout<<"Does your mushroom have gills? (1 or 0):";
	cin>>answer;
	if(answer == 1)
	{
		// forest and meadow
		cout<<"Does your mushroom grow in forest? (1 or 0):";
    	cin>>answer;
		if(answer == 1)
		{
			// convex cap
			cout<<"Does your mushroom have a convex cap? (1 or 0):";
	        cin>>answer;
			if(answer == 1)
			{
				// ring
				cout<<"Does your mushroom have a ring? (1 or 0):";
	            cin>>answer;
				if(answer == 1)
				{
					mushroom = "Amanite tuemouche";
				}
				else
				{
					mushroom = "Pied bleu";
				}
			}
			else
			{
				mushroom = "Girolle";
			}
		}
		else
		{
			// convex cap
			cout<<"Does your mushroom have a Convex cap? (1 or 0):";
	        cin>>answer;
			if(answer == 1)
			{
				mushroom = "Agaric Jaunissant";
			}
			else
			{
				mushroom = "Coprin chevelu";
			}
		}
	}
	else
	{
		mushroom = "Cepe de bordeau";
	}
	
	return mushroom;
}

int main()
{
	cout<<"Think a mushroom (one of the six), choose 1 for yes and 0 for no to determine the mushroom \n";
	string result = typemushroom();
	cout<<"your mushroom is: "<<result <<endl;
	
	return 0;
	
}
