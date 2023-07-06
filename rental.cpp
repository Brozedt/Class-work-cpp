#include<iostream>
using namespace std;
int rental(int start, int end, int cost)
{
	
	if(start < 7)
	{
		if(end <= 7)
		{
			cost += (end - start) * 500;
			return cost;
		}
		cost += (7 - start) * 500;
		start = 7;
		return rental(start, end, cost);
	}
	
	else if(start < 14)
	{
		if(end <= 14)
		{
			cost += (end - start) * 1000;
			return cost;
		}
		cost += (14 - start) * 1000;
		start = 14;
		return rental(start, end, cost);
	}
	
	else if(start < 19)
	{
		if(end <= 19)
		{
			cost += (end - start) * 1500;
			return cost;
		}
		cost += (19 - start) * 1500;
		start = 19;
		return rental(start, end, cost);
	}
	
	else if(start < 21)
	{
		if(end <= 21)
		{
			cost += (end - start) * 1000;
			return cost;
		}
		cost += (21 - start) * 1000;
		start = 21;
		return rental(start, end, cost);
	}
	
	else if(start < 24)
	{
		cost += (end - start) * 500;
		return cost;
	}
	
	else
	{
		return 0;
	}
}
int main()
{
	int start, end;
	cout<<"Enter the starting time: ";
	cin>>start;
	cout<<"Enter the ending time: ";
	cin>>end;
	if(start >= 0 && start <= 23 && end >= 1 && end <= 24 && end > start)
	{
		cout<<"The Total Rental fees = "<<rental(start, end, 0)<<endl;
	}
	else
	{
		cout<<" Start Time must be between 0-23 \n End Time must be between 1-24 \n End Time must be greater than Start Time\n";
	}
	return 0;
}


