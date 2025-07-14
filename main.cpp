#include<iostream>
using namespace std;
int main(){
	int x,s1=0,s2=0;
	double c1=0,c2=0;
	cout<<"欢迎来到GeoFS速度换算系统（KTS与KMH互转）\n";
	cout<<"1.KTS转KMH		2.KMH转KTS\n";
	cout<<"选择选项:";
	cin>>x; 
	if(x==1){
		cout<<"请输入当前速度(KTS):";
		cin>>s1;
		c1=s1*1.852;
		cout<<c1<<"KMH";
	}
	if(x==2)
	{
		cout<<"请输入速度(KMH):";
		cin>>s2;
		c2=s2/1.852;
		cout<<c2<<"KTS";
	}
	
		
	
	return 0;
} 
