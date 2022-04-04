#include <iostream>
using namespace std;

int main(){
	int hours, minutes, seconds;
	
	cout<<"Enter the number of seconds:";
	cin>> seconds;
	
	hours = seconds / 3600;
	
	seconds = seconds % 3600;
	
	minutes = seconds / 60;
	
	seconds = seconds % 60;
	
	
	
	if(hours > 0 )
	{
	
		
		cout<< hours; 
		if (hours == 1)
		cout<< " hr "; 
	
	else
	
	cout<<" hrs ";
}
	
	if(minutes > 0)
	{
		cout<< minutes ;
		if (minutes == 1)
		cout<< " min " ;
		else
		cout<< " mins " ;
		
	}	
	
	if(seconds > 0 || (hours == 0 && minutes == 0 && seconds == 0) ){
		cout<< seconds;

	if (seconds == 1)
		cout << " sec " ;
		else
			cout<< " secs " ;
	}
	
	cout << '\n';
	

	
	
	return 0;
	
	
}
