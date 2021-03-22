//
//  main.cpp
//  learnOperOver
//
//  Created by Jedidiah Uchenna on 22.03.2021.
//

#include <iostream>

class optest{
private:
    int damn;
public:
    optest(int damn){
        this->damn = damn;
    }
    optest operator-(const optest& love){
        optest life = this->damn - love.damn;
        return life;
    }
    optest operator++(int){
        optest temp = this->damn;
        this->damn++;
        return temp;
    }
    bool operator>(const optest& love){
        return this->damn > love.damn;
    }
    friend std::ostream& operator<< (std::ostream& , const optest& );
};
std::ostream& operator<< (std::ostream& jout, const optest& love){
    jout << love.damn;
    return jout;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    optest john(20), jack(5);
    optest colin = john - jack;
    std::cout << colin << "\n";
    optest jav = colin++;
    std::cout << colin << "\n";
    std::cout << jav << "\n";
    
    if(jav > jack) std::cout << "true\n";
    else std::cout << "false\n";

    return 0;
}
