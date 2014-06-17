#include <iostream>
#include "config.h"
#include "PartArray.h"

using namespace std;

int main()
{
    config::Instance()->srand(time(NULL));

    cout << "Hello World!" << endl;
    return 0;
}

