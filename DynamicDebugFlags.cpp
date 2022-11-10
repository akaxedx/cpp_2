#include<iostream>
#include<string>
using namespace std;

bool debug = false;

int main(int argc, char* argv[]){
	for(int i = 0; i < argc; i++){
		if(string(argv[i]) == "--debug=on")
			debug = true;
	}
	bool go = true;
	while(go){
		if(debug){
			cout << "Debugger is now on!" << endl; 
		}
		else{
			cout << "Debugger is now off" << endl;
		}
		cout << "Turn debugger [on/off/quit]";
		string reply;
		cin >> reply;
		if(reply == "on") debug = true;
		if(reply == "off") debug = false;
		if(reply == "quit") break;
	}
}
