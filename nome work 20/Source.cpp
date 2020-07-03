#include <iostream>

using namespace std;

	

float plug(float a, float b) {
   float result = a + b;
    
    return result;
}
float minu(float a, float b) {
   float result = a - b;
    
    return result;
}
float plural(float a, float b) {
    float result = a * b;
    
    return result;
}
float dil(float a, float b) {
     float result = a / b;
    
    return result;
}

int main() {
    float a1;
    float b1;
    char action;
    cout <<" enter an example in itself number action number end press enter"<<endl;
    cin >> a1 >>action>>b1;
	if(b1 == 0){
		cout<<0;
	}
    
    
    
    float suma;
    switch (action)
    {
    case '+':
       suma =  plug(a1,b1);
       cout << suma;
        break;

    case '-':
        suma = minu(a1,b1);
        cout << suma;
        break;

    case '*':
        suma = plural(a1,b1);
        cout << suma;
        break;

    case '/':
         suma = dil(a1,b1);
         cout << suma;
        break;

    }
}

