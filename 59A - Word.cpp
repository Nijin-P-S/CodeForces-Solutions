#include<bits/stdc++.h>
using namespace std;

int main(){
	string input;
	cin>>input;
	int l = 0, u = 0;
	for(int i =0; i<input.size(); i++){
		if((int)input[i] < 97)
			u++;
		else
			l++;
	}
  if(l == u || l > u){
		//Convert everthing to lower
		for(int i=0; i<input.size(); i++){
			if((int)input[i] < 97)
				input[i] = ((int)input[i]-'A')+'a';
		}
	}
  else{
		//convert everything to upper
		for(int i=0; i<input.size(); i++){
			if((int)input[i] >= 97)
				input[i] = ((int)input[i]-'a')+'A';
		}
	}
	cout<<input<<endl;
	return 0;
}

