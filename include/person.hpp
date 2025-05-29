#ifndef PERSON_HPP
#define PERSON_HPP

class Person {
protected:
    int id;
    std::string name;
    std::string genero;
public:
    virtual void showPersona();
};

#endif PERSON_HPP
