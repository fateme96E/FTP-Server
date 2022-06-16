#include "client.h"

#include <fstream>
#include <iostream>
#include <filesystem>

using namespace std;


int main()
{
    Client client("../config.json");
    
    client.run();
    
    return 0;
}