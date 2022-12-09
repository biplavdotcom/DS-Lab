#include<iostream>
using namespace std;
int ceil(float a);
int floor(float a);

	int main(){
		float a;
		int s,d;
		cout<<"enter any number:";
		cin>>a;
		s=ceil(a);
		d=floor(a);
		cout<<"The ceiling value is :"<<s<<endl;
		cout<<"The floor value is :"<<d<<endl;
		return 0;

	}

	int ceil(float a){
		if(a>0){
			a=(int)a+1;
			return a;
		}else if(a<0){
			a=(int)a;
			return a;
		}
	}

	int floor(float a){
		if(a>0){
			a=(int)a;
			return a;
		}else if(a<0){
			a=(int)a-1;
			return a;
		}
	}