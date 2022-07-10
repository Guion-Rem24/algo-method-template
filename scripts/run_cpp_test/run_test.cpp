#include <bits/stdc++.h>
#include "nlohmann/json.hpp"
#include "cppunit.h"
#include "tests.hpp"



using json = nlohmann::json;

class TestUnit : public Cppunit {
    int no=1;
public:
    TestUnit(int No) { no = No; }
    void single_test() {
        char buf[128];
        sprintf(buf, "/root/src/questions/%d/case.json", no);
        std::string cases_json = buf;

        std::ifstream ifs(cases_json);
        json cases;
        ifs >> cases;
        for(auto& test:cases) {
            test_cin(test[0].get<std::string>());
            std::stringbuf  buffer;                          // stringstream用のstreambuf
            std::streambuf* prev = std::cout.rdbuf(&buffer); // streambufをすげかえる
            (new Test)->run();
            std::cout.rdbuf(prev);
            // std::cerr << test[1].get<std::string>() << std::endl;
            CHECKS(buffer.str(), test[1].get<std::string>());
        }
    }
};

int main(int argc, char** argv) {
    std::string no_str = argv[1];
    return (new TestUnit(std::stoi(no_str)))->run();
}