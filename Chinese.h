
#include"Person.h"

class Chinese : public Person
 {
    public:
        Chinese (string sex,string name,int money,int age);
        Chinese (string name,int age);
        ~Chinese();
        void setSex(string);
        string getSex();
        void setMoney(int);
        int getMoney();
        virtual void sayLanguage();
        void personallntrouduce();
    protected:
        string m_strSex;
        int m_iMoney;
 };
