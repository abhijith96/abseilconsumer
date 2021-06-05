//
// Created by Abhijith K A on 05/06/21.
//

#include <iostream>

#include <absl/container/flat_hash_set.h>

int main() {

    absl::flat_hash_set<std::string> set2 = {{"huey"}, {"dewey"}, {"louie"},};

    std::cout << "first value in map : "<<*set2.begin()<<"\n";

    return 0;
}