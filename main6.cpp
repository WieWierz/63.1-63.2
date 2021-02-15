#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class licz{
	
	public:
	
	void dwucykl(long long liczba);
	void dwieJedynki();
};

void licz::dwucykl(long long liczba){
	string s = to_string(liczba);
	string s1 = s.substr(0, s.length() / 2);
	string s2 = s.substr(s.length() / 2);
	if(s1==s2){
		cout<<liczba<<endl;
	}
}

void licz::dwieJedynki(){
		ifstream plik2;
		int ile;
		int t[1000];
		plik2.open("ciagi.txt");
		
	while(!plik2.eof()){
		
		for(int i = 0;i<10;i++){
        	t[i] = getchar() - 48;
        //	cout<<t[i];
    	
        if(t[i]==1 && t[i-1] == 1){
        	
		}else{
			ile++;
		}
	}
		cout<<ile;
	}	
}

int main(int argc, char** argv) {
	
	ifstream plik1;
	long long liczba;
	int t[1000];
	
	plik1.open("ciagi.txt");
	
	licz l;
	
	while(!plik1.eof()){
		plik1>>liczba;
		l.dwucykl(liczba);
	}
	
	l.dwieJedynki();

	return 0;
}
