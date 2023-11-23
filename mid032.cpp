#include <iostream>

using namespace std;

	int main()
	{
		int userspend, point=0, discount;
		char ch;
			cout << "How much you want to spend today?($)";
			cin >> userspend;
			point=userspend/10;
		do
		{
			if(point > 0)
			{
				char ch, chpurchse;
				cout << "\nDo you want further purchse(y/n)";
				cin >> chpurchse;
				cout << "\nHow much you want to spend?($)";
				cin >> userspend;
				cout << "\nYou have " << point << " points, do you want to use them for discount?(y/n)";
				cin >> ch;
				if(ch == 'Y' || ch == 'y')
				{
					discount= (point/10) * 5;
					cout << "\nYou get the discount of "<< discount << "$";
					cout << "\nYour total bill is "<< userspend - discount;
					point = 0;
				}
				point = point + (userspend/10);
				cout << "\nYou get " << point << " loyalty points";
			}
			ch = 'n';
			cout << "\nYou get " << point << " loyalty points.";
			cout << "\nDo you want try  purchse?(y/n)" << endl;
			cin >> ch;	
		}while(ch == 'y' || ch == 'Y');
	}
