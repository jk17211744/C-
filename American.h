#include "Person.h"


class American :public Person
 {
    public:
        American(string name,int age);
        American();
        ~American();
        virtual void sayLanguage();
 };

