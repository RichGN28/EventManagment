#ifndef STAFF_HPP
#define STAFF_HPP

#define PERSONA_HPP

class Staff:public Person{
protected:
    std::string service;
    int turno;
public:
    void showPersona();
};

#endif  STAFF_HPP
