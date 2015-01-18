#include<iostream>
#include<sstream>
#include "sosYAML.h"
#include "test.h"

int main(int argc, char** argv)
{
    std::stringstream output;
    sos::SerializeYAML serializer = sos::SerializeYAML();
    sos::Object root = sos::Object();

    build(root);

    serializer.process(root, output);
    std::cout << output.rdbuf() << std::endl;
}
