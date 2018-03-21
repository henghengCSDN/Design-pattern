#include <iostream>
#include <stdlib.h>

using namespace std;

class Singleton {
	private:
		static Singleton * instance;
		Singleton (){
			cout<<"singleton"<<endl;
		}
	public:
		static Singleton * create () {
			if (!instance){
				instance = new Singleton ();
			}
			return instance;
		}
}; 
Singleton * Singleton::instance = NULL;

int main (void) {
	Singleton *p;
	p = Singleton :: create ();
}
