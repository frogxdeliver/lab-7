//List.cpp
//lab7 Lukas, Will, Zalika, and Malik
//https://www.youtube.com/watch?v=Q_y_GdxpKm0&list=PLVBorYCcu-xXWDdyWYDr4KrqIjPSm9uAe&index=5
#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

int main(){
	list<int> l;
	string answer;
	bool boolResize;
	int lastNum, num;
	
	//Running through the list with default values
	for(int i=0;i<10;i++)
		l.push_back(i+1);
		
	//list<int>::iterator itr=find(l.begin(),l.end(),8);
	//l.insert(itr,5);
	//itr=find(l.begin(),l.end(),7);
	//l.erase(itr);
	
	
	//User input for the pushback
	cout << "Would you like to push an item to the end of the the list? (yes or no): ";
	cin >> answer;
	if (answer == "yes")
		boolResize = true;
	if (answer == "no")
		boolResize = false;
	if(boolResize){
		cout << "Enter a number to be pushed to the end of the list: ";
		cin >> lastNum;
		l.push_back(lastNum);
		cout <<"\n";
	}
	
	//Display the list
	for(list<int>::iterator it=l.begin();it!=l.end();it++){
		cout<<*it<<endl;
	}
	
	
}

