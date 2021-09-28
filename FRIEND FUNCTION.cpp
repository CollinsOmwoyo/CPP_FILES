//The function checkLength can access both private and public data members
#include <iostream>
using namespace std;

class Race {
    private:
        int meter;
        
        // The friend function
        friend int checkLength(Race);

    public:
        Race() : meter(0) {}
        
};

int checkLength (Race d) {

    // Functionality accessing private members from the friend function
    d.meter += 5;
    return d.meter;
}

int main() {
   Race D ;
    cout << "Race: " << checkLength(D);
    return 0;
}

