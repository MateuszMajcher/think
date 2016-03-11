#include<iostream>

//deklaracja przedstawia nazwe definicja tworzy zmienna

	extern int i;  //deklaracja bez definicji
	extern float f(float); //deklaracja funkcji
	
	float b; //deklaracja i definicja
	float f(float a) {   //definicja
		return a + 1.0;
	}
	
	int i; //definicja
	int h(int x) {  //deklaracja i definicja
	    return x+1;
	}

int main() {
    b = 1.0;
    i = 2;
    f(b);
    h(i);
	
	return 0;
}
