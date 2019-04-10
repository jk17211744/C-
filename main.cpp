
#include"Chinese.h"
#include"American.h"

 int main()
 {
     Chinese *p=new Chinese("ÄÐ","ÀîËÄ",1500,150);
     Person *o=new Chinese("Àî·É",20);
     o->sayInfo();
     o->sayLanguage();
     delete o;
     o=NULL;
     cout<<endl;
     p->sayLanguage();
     p->sayInfo();
     p->personallntrouduce();
     delete p;
     p=NULL;
     American *q=new American("JIM",15);
     cout<<endl;
     q->sayLanguage();
     q->sayInfo();
     delete p;
     q=NULL;
 }










