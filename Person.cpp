
#include"Person.h"

Person::Person (string name,int age)
{
    m_strName=name;
    m_iAge=age;
}
Person::Person()
{

}
Person::~Person(){};
void Person::setName(string name)
{
    m_strName=name;
}
string Person::getName()
{
    return m_strName;
}
void Person::setAge(int age)
{
    m_iAge=age;
}
int Person::getAge()
{
    return m_iAge;
}
void Person::sayInfo()
{
    cout<<"����"<<m_strName<<endl;
    cout<<"�ҽ���"<<m_iAge<<"��"<<endl;
}
void Person::sayLanguage()
{
    cout<<"�һ�˵��"<<endl;
}
