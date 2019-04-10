
#include"Chinese.h"

Chinese::Chinese(string sex,string name,int money,int age):Person(name,age)
{
    m_strSex=sex;
    m_iMoney=money;
}
Chinese::Chinese(string name,int age):Person(name,age){}
Chinese::~Chinese(){};
void Chinese::setSex(string sex)
{
    m_strSex=sex;
}
string Chinese::getSex()
{
    return m_strSex;
}
void Chinese::setMoney(int money)
{
    m_iMoney=money;
}
int Chinese::getMoney()
{
    return m_iMoney;
}
void Chinese::sayLanguage()
{
    cout<<"ÎÒ»áËµººÓï"<<endl;
}
void Chinese::personallntrouduce()
{
    sayInfo();
    sayLanguage();
}
