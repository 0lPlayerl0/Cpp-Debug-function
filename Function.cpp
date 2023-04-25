#include <iostream>
#include <string>

using namespace std;

void debug(string number = " "){
    static int times = 1;
    cout << "number " << times << " " << number << endl;
    times = times + 1;
}

int main (){
debug();
cout << "hello world" << endl;
debug("line 15");

return 0;
}
