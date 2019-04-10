
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
    cout<<"我是"<<m_strName<<endl;
    cout<<"我今年"<<m_iAge<<"岁"<<endl;
}
void Person::sayLanguage()
{
    cout<<"我会说话"<<endl;
}
