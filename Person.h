#ifndef PERSON_H
#define PERSON_H


#include<cstring>
#include<iostream>
using namespace std;
class Person
{
    public:
        Person (string name,int age);
        Person ();
        ~Person();
        void setName(string);
        string getName();
        void setAge(int);
        int getAge();
        void sayInfo();
        virtual void sayLanguage();
    protected:
        string m_strName;
        int m_iAge;
 };
#endif
