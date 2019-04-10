#include"American.h"
American::American(string name,int age):Person(name,age)
{

}
American::American()
{

}
American::~American(){};
void American::sayLanguage()
{
    cout<<"我会说英语"<<endl;
}

