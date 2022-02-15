#include <iostream>

using namespace std;

int main()
{
	
	int ToReturn;	
	int Bill_2, Bill_5, Bill_10;
	
	cout << "Enter change to return: ";
	cin >> ToReturn;
	cout << endl << endl;
	
	while (ToReturn >= 0)
	{		
		Bill_2 = 0;
		Bill_5 = 0;
		Bill_10 = 0;
		
		
		if(ToReturn % 5 == 0)
		{
			if(ToReturn > 10)
			{
				int ReturnRemaining = ToReturn;
				
				Bill_10 = ReturnRemaining / 10;
				ReturnRemaining = ReturnRemaining - Bill_10 * 10;
				
				Bill_5 = ReturnRemaining / 5;
			}
			else
			{
				Bill_5 = ToReturn / 5;
			}
		}
		else
		{
			if(ToReturn > 10)
			{
				int ReturnRemaining = ToReturn;
				
				Bill_10 = ReturnRemaining / 10;
				ReturnRemaining = ReturnRemaining - Bill_10 * 10;
				
				int Take2First =  ReturnRemaining / 2;
				int Take5Second = (ReturnRemaining - Take2First * 2) / 5;
				
				int Take5First =  ReturnRemaining / 5;
				int Take2Second = (ReturnRemaining - Take5First * 5) / 2;
	
				if( ReturnRemaining - Take2First * 2 - Take5Second * 5 <= ReturnRemaining -Take5First * 5 - Take2Second * 2)
				{
					Bill_5 = Take5Second;
					Bill_2 = Take2First;
				}
				else
				{
					Bill_2 = Take2Second;
					Bill_5 = Take5First;
				}
			}
			
			else
			{
				int ReturnRemaining = ToReturn;
								
				int Take2First =  ReturnRemaining / 2;
				int Take5Second = (ReturnRemaining - Take2First * 2) / 5;
				
				int Take5First =  ReturnRemaining / 5;
				int Take2Second = (ReturnRemaining - Take5First * 5) / 2;
	
				if( ReturnRemaining - Take2First * 2 - Take5Second * 5 <= ReturnRemaining -Take5First * 5 - Take2Second * 2)
				{
					Bill_5 = Take5Second;
					Bill_2 = Take2First;
				}
				else
				{
					Bill_2 = Take2Second;
					Bill_5 = Take5First;
				}
			}
		}
		
		
		cout << "Bill 2: " << Bill_2 << endl;
		cout << "Bill 5: " << Bill_5 << endl;
		cout << "Bill 10: " << Bill_10 << endl;
		cout << "Returned change: " << Bill_2 * 2 + Bill_5 * 5 + Bill_10 * 10 << endl << endl;
		
		cout << "Enter change to return: ";
		cin >> ToReturn;
		cout << endl << endl;	
	}
	
	return 0;
}
