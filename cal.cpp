#include<iostream>
using namespace std;

int main()
{
    int n;
    double b,a;
    
    cout<<"PRESS '1' to perfrom addition"<<endl;                
    cout<<"PRESS '2' to perfrom subtraction"<<endl;
    cout<<"PRESS '3' to perfrom multiplication"<<endl; 
    cout<<"PRESS '4' to perfrom division"<<endl; 
    cout<<"PRESS '5' to find square root"<<endl; 
    cout<<"PRESS '6' to find the logarithm"<<endl; 
    cout<<"PRESS '7' to find nth power of a number 'a' "<<endl;
    cout<<"PRESS '8' to find trigonometric ratios"<<endl;
    cout<<"PRESS '9' to find roots of a quadratic equation"<<endl;
    cout<<"PRESS '10'to solve n linear equations in n variables"<<endl; 
    cin>>n;
    switch (n)
    {
        case 1:
        cout<<"enter two numbers to be added";
        cin>>a>>b;
        cout<<"The sum is:"<<a+b;
        break;
        
        case 2:
        cout<<"enter two numbers to be subtracted";
        cin>>a>>b;
        cout<<"The difference is:"<<a-b;
        break;
        
        case 3:
        cout<<"enter two numbers to be multiplied";
        cin>>a>>b;
        cout<<"The product is:"<<a*b;
        break;
        
        case 4:
        cout<<"enter two numbers to be divided";
        cin>>a>>b;
        cout<<"The quotient is:"<<a/b;
        break;
        
        
        case 5:
        float a1,i1;
        cout<<"enter a number of which the square root has to be found";
        cin>>a1;
        if(a1<0)
        {
            cout<<"square root not defined";
        }
        else
        {
            for(i1=0.001;i1*i1<a1;i1=i1+0.001);
            cout<<"The square root of the number is"<<i1;
        }
        break;
        
        case 6:
        double gl,f,f1,gl1,gl2,x,a,i;
        cout<<"enter a number ";
        cin>>a;
        
        if(a<2)
        {
            x=a-1;
            gl= x - (x*x)/2 + (x*x*x)/3 - (x*x*x*x)/4 + (x*x*x*x*x)/5 - (x*x*x*x*x*x)/6 + (x*x*x*x*x*x*x)/7 - (x*x*x*x*x*x*x*x)/8 + (x*x*x*x*x*x*x*x*x)/9 - (x*x*x*x*x*x*x*x*x*x)/10;
            cout<<gl;
        }
        else
        {
            f=a;
            while(f>=2)
            {
                f=f/2;
                i=i+1;
            }
            x=f-1;
            gl1=0.693147180*i;
            gl2= x - (x*x)/2 + (x*x*x)/3 - (x*x*x*x)/4 + (x*x*x*x*x)/5 - (x*x*x*x*x*x)/6 + (x*x*x*x*x*x*x)/7 - (x*x*x*x*x*x*x*x)/8 + (x*x*x*x*x*x*x*x*x)/9 - (x*x*x*x*x*x*x*x*x*x)/10;
            f1=gl1+gl2;
            cout<<"The log value of "<<a<<" to the base e is "<<f1<<endl;
            cout<<"The log value of "<<a<<" to the base 10 is "<<f1/2.303<<endl;
        }
        break;
        
        case 7:
        double num1;
        int ex,fake;
        cout<<"enter a number and also enter the power to which it has to be raised";
        cin>>num1>>ex;
        fake=1;
        for(int i=1;i<=ex;i++)
        {
            fake=fake*num1;
        }
        cout<<"The result is "<<fake;
        break;

        case 8:
        int ch;
        

                    int i2,n,degree;
                    float x1, sum,num, term,m,l;
                    
                    cout<<"enter the value in degree\n";
                    cin>>degree;
                    x1=degree*(3.142/180);
                    
                    //now finding cos
                    num=1;
                    i2=1;
                    m=1;
                    do
                    {
                    term=num/m;
                    sum=sum+term;
                    num=-num*x1*x1;
                    m=m*i2*(i2+1);
                    i2=i2+2;
                    if(term<0)               //just mod of term
                        {
                            l=-1*term;
                            
                    
                        }
                        else
                        {
                            l=term;
                        }
                    }while(l>=0.01);
                    double cos;
                    cos=sum;
                    
                    
                    //now finding sin
                    float sum1;
                    num=x1;
                    i=2;
                    m=1;
                    do
                    {
                    term=num/m;
                    sum1=sum1+term;
                    num=-num*x1*x1;
                    m=m*i*(i+1);
                    i=i+2;
                    if(term<0)
                        {
                            l=-1*term;
                            
                    
                        }
                        else
                        {
                            l=term;
                        }
                    }while(l>=0.00001);
                    double sine;
                    sine = sum1;
                    //cout<<"the result of sin(x)=\n"<<sum1;

                    //now finding tan
                    double tan,cot,cosec,sec;
                    tan=sine/cos;
                    cot=1/tan;
                    cosec=1/sine;
                    sec=1/cos;

                    
                   cout<<"The value of sine of the angle is "<<sine<<endl;
                   cout<<"The value of cosine of the angle is "<<cos<<endl;
                   cout<<"The value of tan of the angle is "<<tan<<endl;
                   cout<<"The value of cot of the angle is "<<cot<<endl;
                   cout<<"The value of cosecant of the angle is "<<cosec<<endl;
                   cout<<"The value of secant of the angle is "<<sec<<endl;
        break;

        case 9:
        double a3,b,c,d,root1,root2,sq,r1,r2,l1;
        float i3;
        cout<<"enter the values of coefficients a,b,c of the quadratic equation ax^2+bx+c=0"<<endl; 
        cin>>a3>>b>>c;
        d=(b*b)-(4*a3*c);
        if(d<0)
        {
        l1=-1*d;
        }
        //now find square root of disciminant
        for( i3=0.01;i3*i3<l1;i3=i3+0.01);
        sq=i3;
        
        if ((a3==0) && (b==0)) 
        { 
            printf("roots cant be found\n");
        }
        
        
        if (d==0)
        {
            cout<<"roots are equal\n"; 
            root1=root2=-b/(2*a3);
            cout<<"root1=root2="<<root1;
        }
        else if (d>0)
        {
            cout<<"roots are distinct\n";
            root1=(-b+sq)/2*a3;
            root2=(-b-sq)/2*a3;
            cout<<"root1="<<root1<<endl;
            cout<<"root2="<<root2<<endl;
        }
        else 
        { 
            cout<<"roots are imaginary\n";
            root1=-b/(2*a3);
            root2=sq/(2*a3);
            cout<<root2<<endl;
            cout<<"root1="<<root1<<"+"<<root2<<"i"<<endl;
            cout<<"root2="<<root1<<"-"<<root2<<"i"<<endl;
        }
        break;

        case 10:
        int no,A,B,C,D,e,F,g,h,I,j,k,L,dx,dy,dz;
        double X,y,dis,z;
        cout<<"enter the no of variables in your linear equations(2 or 3)";
        cin>>no;
        if(no==2)
        {
            cout<<"ax+by=c"<<endl;
            cout<<"dx+ey=f"<<endl;
            cout<<"enter the respective coefficients in an order"<<endl;
            cin>>A>>B>>C>>D>>e>>F;
            dis=(A*e)-(B*D);
            dx=(C*e)-(B*F);
            dy=(A*F)-(C*D);
            X=dx/dis;
            y=dy/dis;
            cout<<"The value of x is "<<X<<endl;
            cout<<"The value of y is "<<y<<endl;
        }
        if(no==3)
        {
            cout<<"ax+by+cz=d"<<endl;
            cout<<"ex+fy+gz=h"<<endl;
            cout<<"ix+jy+kz=l"<<endl;
            cout<<"enter the respective coefficients in an order"<<endl;
            cin>>A>>B>>C>>D>>e>>F>>g>>h>>I>>j>>k>>L;
           dis=A*((F*k)-(g*j)) - B*((e*k)-(g*I)) + C*((e*j)-(F*I));
           dx=D*((F*k)-(g*j)) - B*((h*k)-(g*L)) + C*((h*j)-(F*L));
           dy=A*((h*k)-(g*L)) - D*((e*k)-(g*I)) + C*((e*L)-(h*I));
           dz=A*((F*L)-(h*j)) - B*((e*L)-(h*I)) + D*((e*j)-(F*I));
           X=dx/dis;
           y=dy/dis;
           z=dz/dis;
           cout<<"The value of x is "<<X<<endl;
           cout<<"The value of y is "<<y<<endl;
           cout<<"The value of z is "<<z<<endl;
        }
    }
    return 0;  
}
    

