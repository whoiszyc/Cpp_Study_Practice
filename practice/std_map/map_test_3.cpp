#include <iostream>
#include <iterator>
#include <map>

int main()
{
        std::map<std::string, bool> flag = {
                {"daeOrderByVariable", false},
                {"pflow", false},
                {"tds", false}};

        // std::map<std::string, bool> flag;
        // flag["daeOrderByVariable"] = false;
        // flag["pflow"] = false;
        // flag["tds"] = false;

        std::cout << "Status of flag-tds is:" << flag["tds"] << std::endl;

        return 0;
}
