#include<iostream>
using namespace std;

int main () {
    int position[] = {0 , 0 , 0};

    char direction;
    cin >> direction;

    char initial = 'N';
    char set_initial;

    if(direction == 'f'){
        position[1] = 1;
        set_initial = 'N';
    }
    else if(direction == 'r'){
        position[1] = 1;
        set_initial = 'E';
    }
    else if(direction == 'u'){
        position[1] = 1;
        set_initial = 'U';
    }
    else if(direction == 'b'){
        position[1] = 1;
        position[2] = -1;
        set_initial = 'U';
    }
    else if(direction == 'l'){
        position[1] = 1;
        position[2] = -1;
        set_initial = 'N';
    }

    if(set_initial == 'N' && position[1] == 1 && position[2] == -1){
        cout << position[0] << " " << position[1] << " " << position[2] << endl;
        cout << set_initial << endl;
    }
    
    return 0;
}