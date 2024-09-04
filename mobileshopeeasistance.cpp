#include <iostream>
using namespace std;
static int x=0;
class mobile
{
public:int price,RAM,camera;
string processor,display_type,name;
double display_size;
int storage,battery;
};
class Iphone:public mobile
{
public :
 
void store_Iphone(Iphone &I13p,Iphone &I13,Iphone &I14,Iphone &I14p,Iphone &I15,Iphone 
&I15p,Iphone &I15pm)
{
I13p.name="iphone 13 pro";
I13p.price=110000;
I13p.camera=12;
I13p.storage=512;
I13p.battery=3095;
I13p.processor="A15 Bionic chip";
I13p.display_type="XDR Display";
I13p.display_size=6.1;
I13p.RAM=6;
I13.name="iphone 13";
I13.price=55000;
I13.camera=12;
I13.storage=64;
I13.battery=3227;
I13.processor="A15 Bionic chip";
I13.display_type="OLED Display";
I13.display_size=6.1;
I13.RAM=4;
I14.name="iphone 14";
I14.price=99999;
I14.camera=12;
I14.storage=128;
I14.battery=4000;
I14.processor="A15 Bionic chip";
I14.display_type="XDR Display";
I14.display_size=6.1;
I14.RAM=6;
I14p.name="iphone 14 pro";
I14p.price=112000;
I14p.camera=13;
I14p.storage=512;
I14p.battery=4000;
I14p.processor="A15 Bionic chip";
I14p.display_type="XDR Display";
I14p.display_size=6.7;
I14p.RAM=6;
I15.name="iphone 15";
I15.price=120000;
I15.camera=48;
I15.storage=256;
I15.battery=5000;
I15.processor="A15 Bionic chip";
I15.display_type="OLED Display";
I15.display_size=6.7;
I15.RAM=6;
I15p.name="iphone 15 pro";
I15p.price=110000;
I15p.camera=64;
I15p.storage=128;
I15p.battery=4500;
I15p.processor="A16 Bionic chip";
I15p.display_type="XDR Display";
I15p.display_size=6.1;
I15p.RAM=8;
I15pm.name="iphone 15 pro max";
I15pm.price=189000;
I15pm.camera=64;
I15pm.storage=512;
I15pm.battery=4500;
I15pm.processor="A16 Bionic chip";
I15pm.display_type="OLED Display";
I15pm.display_size=6.7;
I15pm.RAM=12;
} 
};
class Samsung:public mobile
{
public :
void store_Samsung(Samsung &F15,Samsung &F54,Samsung &S24,Samsung &M14,Samsung 
&A03,Samsung &A35,Samsung &A55)
{
F15.name="Samsung Galaxy F15";
F15.price=14499;
F15.camera=50;
F15.storage=128;
F15.battery=6000;
F15.processor="hexacore";
F15.display_type="super amoled";
F15.display_size=6.5;
F15.RAM=6;
F54.name="Samsung Galaxy F54";
F54.price=22000;
F54.camera=108;
F54.storage=256;
F54.battery=6000;
F54.processor="octacore";
F54.display_type="super amoled";
F54.display_size=6.7;
F54.RAM=8;
S24.name="Samsung Galaxy S24";
S24.price=144999;
S24.camera=200;
S24.storage=512;
S24.battery=5000;
S24.processor="octacore";
S24.display_type="amoled";
S24.display_size=6.7;
S24.RAM=12;
M14 .name="Samsung Galaxy M14";
M14 .price=17000;
M14 .camera=50;
M14 .storage=128;
M14 .battery=6000;
M14 .processor="octacore";
M14 .display_type="amoled";
M14 .display_size=6.1;
M14.RAM=4;
A03.name="Samsung Galaxy A03";
A03.price=8000;
A03.camera=8;
A03.storage=32;
A03.battery=5000;
A03.processor="hexacore";
A03.display_type="lcd";
A03.display_size=6.5;
A03.RAM=2;
A35.name="Samsung Galaxy A35";
A35.price=30990;
A35.camera=50;
A35.storage=128;
A35.battery=5000;
A35.processor="octacore";
A35.display_type="amoled";
A35.display_size=6.6;
A35.RAM=8;
A55.name="Samsung Galaxy A55";
A55.price=62500;
A55.camera=50;
A55.storage=128;
A55.battery=5000;
A55.processor="octacore";
A55.display_type="amoled";
A55.display_size=6.6;
A55.RAM=6;
}
};
class Realme:public mobile
{
 public :
 void store_Realme(Realme &C53,Realme &X50,Realme &N60,Realme &R12,Realme &R2,Realme 
&GT,Realme & N53)
{
C53.name="Realme C53";
C53.price=10500;
C53.camera=108;
C53.storage=128;
C53.battery=5000;
C53.processor="octacore";
C53.display_type="lcd";
C53.display_size=6.74;
C53.RAM=6;
R12.name="Realme 12 Pro";
R12.price=27000;
R12.camera=50;
R12.storage=256;
R12.battery=5000;
R12.processor="octacore";
R12.display_type="OLED Display";
R12.display_size=6.7;
R12.RAM=8;
N60.name="Narzo 60";
N60.price=15606;
N60.camera=64;
N60.storage=128;
N60.battery=5000;
N60.processor="octacore";
N60.display_type="lcd";
N60.display_size=6.43;
N60.RAM=8;
X50 .name="Realme X50 Pro";
X50 .price=55000;
X50 .camera=64;
X50 .storage=256;
X50 .battery=4200;
X50 .processor="octacore";
X50 .display_type="supper amoled";
X50 .display_size=6.44;
X50.RAM=12;
R2.name="Realme X2 Pro";
R2.price=35099;
R2.camera=64;
R2.storage=256;
R2.battery=4000;
R2.processor="octacore";
R2.display_type="supper amoled";
R2.display_size=6.5;
R2.RAM=12;
GT.name="Realme GT Neo 3";
GT.price=39999;
GT.camera=50;
GT.storage=256;
GT.battery=5000;
GT.processor="octacore";
GT.display_type="OLED Display";
GT.display_size=6.7;
GT.RAM=8;
 N53.name="Realme Narzo N53";
 N53.price=9500;
 N53.camera=50;
 N53.storage=128;
 N53.battery=5000;
 N53.processor="octacore";
 N53.display_type="lcd";
 N53.display_size=6.74;
 N53.RAM=8;
}
};
class Oppo:public mobile
{
 public :
 void store_Oppo(Oppo &A59,Oppo &A18,Oppo &N2,Oppo &A11,Oppo &N3,Oppo &A10,Oppo 
&F21)
{
A59.name="Oppo A59";
A59.price=15499;
A59.camera=12;
A59.storage=128;
A59.battery=5000;
A59.processor="octacore";
A59.display_type="lcd";
A59.display_size=6.56;
A59.RAM=6;
A11.name="Oppo Reno 11";
A11.price=38099;
A11.camera=50;
A11.storage=128;
A11.battery=5000;
A11.processor="octacore";
A11.display_type="amoled";
A11.display_size=6.7;
A11.RAM=8;
N2.name="Oppo find N2 Flip";
N2.price=60999;
N2.camera=50;
N2.storage=256;
N2.battery=4300;
N2.processor="octacore";
N2.display_type="super amoled";
N2.display_size=6.8;
N2.RAM=8;
A18 .name="Oppo A18";
A18 .price=8999;
A18 .camera=8;
A18 .storage=64;
A18 .battery=5000;
A18 .processor="octacore";
A18 .display_type="lcd";
A18 .display_size=6.56;
A18.RAM=4;
N3.name="Oppo find N3 flip";
N3.price=99999;
N3.camera=50;
N3.storage=256;
N3.battery=4300;
N3.processor="octacore";
N3.display_type="amoled";
N3.display_size=6.8;
N3.RAM=12;
A10.name="Oppo Reno A10 Pro+";
A10.price=54999;
A10.camera=108;
A10.storage=256;
A10.battery=4700;
A10.processor="octacore";
A10.display_type="OLED Display";
A10.display_size=6.74;
A10.RAM=12;
F21.name="Oppo F21s Pro";
F21.price=22800;
F21.camera=64;
F21.storage=128;
F21.battery=4500;
F21.processor="octacore";
F21.display_type="amoled";
F21.display_size=6.43;
F21.RAM=8;
}
};
class Redmi:public mobile
{
public :
void store_Redmi(Redmi &X7,Redmi &X12,Redmi &X11,Redmi &X13,Redmi &X10,Redmi 
&X15,Redmi & X5)
{
X7.name="Redmi Note 7 Pro";
X7.price=9250;
X7.camera=48;
X7.storage=64;
X7.battery=4000;
X7.processor="octacore";
X7.display_type="lcd";
X7.display_size=6.3;
X7.RAM=4;
X13.name="Redmi 13 pro";
X13.price=29999;
X13.camera=200;
X13.storage=256;
X13.battery=5100;
X13.processor="octacore";
X13.display_type="amoled";
X13.display_size=6.67;
X13.RAM=12;
X11.name="Xiaomi 11 T Pro";
X11.price=54500;
X11.camera=108;
X11.storage=256;
X11.battery=5000;
X11.processor="octacore";
X11.display_type="super amoled";
X11.display_size=6.67;
X11.RAM=12;
X12 .name="Xiaomi 12 Pro";
X12 .price=84999;
X12 .camera=108;
X12 .storage=256;
X12 .battery=4600;
X12 .processor="octacore";
X12 .display_type="amoled";
X12 .display_size=6.73;
X12.RAM=12;
X10.name="Redmi note 10 Pro Max";
X10.price=18999;
X10.camera=108;
X10.storage=128;
X10.battery=5000;
X10.processor="octacore";
X10.display_type="amoled";
X10.display_size=6.8;
X10.RAM=6;
X15.name="Redmi Note 13 Pro+";
X15.price=35999;
X15.camera=200;
X15.storage=512;
X15.battery=5000;
X15.processor="octacore";
X15.display_type="amoled";
X15.display_size=6.67;
X15.RAM=12;
 X5.name="Redmi Note 5";
 X5.price=4999;
 X5.camera=12;
 X5.storage=32;
 X5.battery=4000;
 X5.processor="hexacore";
 X5.display_type="lcd";
 X5.display_size=6.1;
 X5.RAM=4;
}
};
class brand:public Iphone,public Samsung,public Realme,public Oppo,public Redmi
{
public:
template<class T1,class T2,class T3>
void compare(T1 &O,T2 x[10],T3 m)
{int c=0;
int v=0;
if(x[0]==1)
{
 if(O.price>2999 && O.price<=20000)
 {c++;}
}
else if(x[0]==2)
{
 if(O.price>20000 && O.price<=50000)
 {c++;}
}
else if(x[0]==3)
{
 if(O.price>50000)
 {c++;}
}
if(x[1]==1)
{
 if(O.camera>=8 && O.camera<=16)
 {c++;}
}
else if(x[1]==2)
{
 if(O.camera>16 && O.camera<=50)
 {c++;}
}
else if(x[1]==3)
{
 if(O.camera>50)
 {c++;}
}
if(x[2]==1)
{
 if(O.storage>=32 && O.storage<=64)
 {c++;}
}
else if(x[2]==2)
{
 if(O.storage>64 && O.storage<=128)
 {c++;}
}
else if(x[2]==3)
{
 if(O.storage>128)
 {c++;}
}
if(x[3]==1)
{
 if(O.battery>=3000 && O.battery<=4000)
 {c++;}
}
else if(x[3]==2)
{
 if(O.battery>4000 && O.battery<=5000)
 {c++;}
}
else if(x[3]==3)
{
 if(O.battery>5000)
 {c++;}
}
if(x[4]==1)
{
 if(O.processor=="hexacore")
 {c++;}
}
else if(x[4]==2)
{
 if(O.processor=="octacore")
 {c++;}
}
if(x[5]==1)
{
 if(O.display_type=="amoled")
 {c++;}
}
else if(x[5]==2)
{
 if(O.display_type=="super amoled")
 {c++;}
}
else if(x[5]==3)
{
 if(O.display_type=="lcd")
 {c++;}
}
else if(x[5]==4)
{
 if(O.display_type== "OLED Display")
 {c++;}
}
if(x[6]==1)
{
 if(O.display_size>=6.0 && O.display_size<=6.5)
 {c++;}
}
else if(x[6]==2)
{
 if(O.display_size>6.5 && O.display_size<=6.7)
 { c++;}
}
else if(x[6]==3)
{
 if(O.display_size>6.7)
 {
 c++;
 }
}
if(x[7]==1)
{
 if(O.RAM>=2 && O.RAM<=4)
 {
 c++;
 }
}
else if(x[7]==2)
{
 if(O.RAM>=6 && O.RAM<=8)
 {
 c++;
 }
}
else if(x[7]==3)
{
 if(O.RAM>=12)
 {
 c++;
 }
}
if(c==m)
{
 show(O);
 
}
}
template <class T>
void show(T &obj)
{
x++;
cout<<x<<"] "<<obj.name<<endl;
cout<<"Price : Rs."<<obj.price<<endl;
cout<<"RAM : "<<obj.RAM<<" GB"<<endl;
cout<<"ROM : "<<obj.storage<<" GB"<<endl;
cout<<"Processor : "<<obj.processor<<endl;
cout<<"Rear Camera : "<<obj.camera<<" MP"<<endl;cout<<"Display Type : "<<obj.display_type<<"("<<obj.display_size<<" Inch)"<<endl;
cout<<"Battery : "<<obj.battery<<" mAh"<<endl<<endl;
}
brand()
{
 
cout<<"___________________________________________________________________________________________________________________________________________"<<endl;
 cout<<endl<<" >>>> || WELCOME TO B.TECH MOBILE SHOPPING ASSISTANT || <<<< "<<endl<<endl;
}
~brand()
{
 
cout<<"___________________________________________________________________________________________________________________________________________"<<endl;
 cout<<" >>>> Thanks for visiting <<<< "<<endl<<endl<<endl;
}
};
int main()
{
 brand b;
Iphone i13p,i13,i14,i14p,i15,i15p,i15pm;
Samsung F15,F54,S24,M14,A03,A35,A55;
Oppo A59,A18,N2,A11,N3,A10,F21;
Redmi X7,X12,X11,X13,X10,X15,X5;
Realme C53,X50,N60,R12,R2,GT,N53;
b.store_Samsung(F15,F54,S24,M14,A03,A35,A55);
b.store_Iphone(i13p,i13,i14,i14p,i15,i15p,i15pm);
b.store_Oppo(A59,A18,N2,A11,N3,A10,F21);
b.store_Redmi(X7,X12,X11,X13,X10,X15,X5);
b.store_Realme(C53,X50,N60,R12,R2,GT,N53);
int Req,choise[10]={0,0,0,0,0,0,0,0,0,0};
cout<<"Choose and apply Filter:"<<endl<<endl;
cout<<"1)Price "<<" 2)Camera "<<"3)Storage "<<"4)Battery "<<endl;
cout<<"5)Processor "<<" 6)Display Type "<<"7)Display size "<<"8)RAM"<<endl;
cin>>Req;
int i=0;
int count=0;
while(Req!=0)
{int x;
x = Req%10;
count++;
Req = Req/10;
if(x == 1)
{
 cout<<"# Enter Price Range"<<endl<<" - 1) 2,999 - 20,000"<<endl<<" - 2) 20,000 - 50,999"<<endl<<" - 3) 50,000 + "<<endl;
 cin>>choise[0];
}
 if(x == 2)
{
 cout<<"# Enter Camera Range"<<endl<<" - 1) 8 - 16"<<endl<<" - 2) 17 - 50"<<endl<<" - 3) 50 + "<<endl;
 cin>>choise[1];
}
 if(x == 3)
{
 cout<<"# Enter Storage Range"<<endl<<" - 1) 32 - 64 "<<endl<<" - 2) 64 - 128"<<endl<<" - 3) 128+ "<<endl;
 cin>>choise[2];
}
else if(x == 4)
{
 cout<<"# Enter Battery Range"<<endl<<" - 1) 3000 - 4000 "<<endl<<" - 2) 4100 - 5000"<<endl<<" - 3) 5000+ "<<endl;
 cin>>choise[3];
}
else if(x == 5)
{
 cout<<"# Enter processor type"<<endl<<" - 1) Hexacore "<<endl<<" - 2) Octacore"<<endl;
 cin>>choise[4];
}
else if(x == 6)
{
 cout<<"# Enter Display Type"<<endl<<" - 1) Amoled"<<endl<<" - 2) Super Amoled"<<endl<<" - 3) LCD Display"<<endl<<" - 4) OLED Display"<<endl;
 cin>>choise[5];
}
else if(x == 7)
{
 cout<<"# Enter Display Size Range"<<endl<<" - 1) 6.0 - 6.5 "<<endl<<" - 2) 6.5 - 6.7"<<endl<<" - 3) 6.7+ "<<endl;
 cin>>choise[6];
}
else if(x == 8)
{
 cout<<"# Enter RAM "<<endl<<" - 1) 2 or 4"<<endl<<" - 2) 6 or 8"<<endl<<" - 3) 12 "<<endl;
 cin>>choise[7];
}
}
cout<<"As per your customization:"<<endl<<endl;
//Iphone
b.compare<Iphone,int>(i14p,choise,count);
b.compare<Iphone,int>(i13p,choise,count);
b.compare<Iphone,int>(i14,choise,count);
b.compare<Iphone,int>(i15p,choise,count);
b.compare<Iphone,int>(i15pm,choise,count);
b.compare<Iphone,int>(i13,choise,count);
b.compare<Iphone,int>(i15,choise,count);
// samsung
b.compare<Samsung,int>(F15,choise,count);
b.compare<Samsung,int>(F54,choise,count);
b.compare<Samsung,int>(S24,choise,count);
b.compare<Samsung,int>(M14,choise,count);
b.compare<Samsung,int>(A03,choise,count);
b.compare<Samsung,int>(A35,choise,count);
b.compare<Samsung,int>(A55,choise,count);
// oppo
b.compare<Oppo,int>(A59,choise,count);
b.compare<Oppo,int>(A18,choise,count);
b.compare<Oppo,int>(N2,choise,count);
b.compare<Oppo,int>(A11,choise,count);
b.compare<Oppo,int>(N3,choise,count);
b.compare<Oppo,int>(A10,choise,count);
b.compare<Oppo,int>(F21,choise,count);
//Redmi
b.compare<Redmi,int>(X7,choise,count);
b.compare<Redmi,int>(X12,choise,count);
b.compare<Redmi,int>(X11,choise,count);
b.compare<Redmi,int>(X13,choise,count);
b.compare<Redmi,int>(X10,choise,count);
b.compare<Redmi,int>(X15,choise,count);
b.compare<Redmi,int>(X5,choise,count);
//Realme
b.compare<Realme,int>(C53,choise,count);
b.compare<Realme,int>(X50,choise,count);
b.compare<Realme,int>(N60,choise,count);
b.compare<Realme,int>(R12,choise,count);
b.compare<Realme,int>(R2,choise,count);
b.compare<Realme,int>(GT,choise,count);
b.compare<Realme,int>(N53,choise,count);
if(x==0)
cout<<"Unfortunately , the mobile you are looking as per filter applied is not available ."<<endl;
 return 0;
}