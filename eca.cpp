/* RC,RL,RLC series circuit
Vr = voltage across the resistor R
Vl = Voltage across inductor L
Vc = voltage across the capacitor c
V = Total voltage across the RL series circuit*/
#include<iostream>
#include<math.h>
using namespace std;
// RC Circuit
class RC{
    public:
    float I,Vr,Vc,V,Z,Xc,R,C,phi,P,Q,cos_phi;
    void data(){
        cout<<endl<<"\t\t** RC Series Circuit **"<<endl<<endl;
        cout<<"Enter the Resistance in Circuit (in Ohms): ";
        cin>>R;
        cout<<"Enter the Capacitance in Circuit (in Micro Farad) : ";
        cin>>C;
        cout<<"The Supply Voltage is 230V and frequency is 50Hz."<<endl;
    }
    void calculations(){
        float a;
        a= 2*3.14*50*0.000001*C; // 2*pi*f*C  where f=50
        V=230;
        Xc=1/a;  // Capacivity
        Z = sqrt((R*R) + (Xc*Xc)); // Impedance
        I=V/Z; //Current
        Vr= I*R; //Voltage across Resistor
        Vc= I*Xc; //Voltage across Capacitor
        cos_phi=R/z;
        phi = (atan(Xc/R))*180/3.14;
        P=V*I*cos_phi
        Q=V*I*sin(phi)
    }
    void show(){
        cout<<endl<<"\tThe Calculated Values of the Circuit. "<<endl<<endl;
        cout<<"Current Through the circuit is :"<<I<<" Amps"<<endl;
        cout<<"The Capacitive Reactance (Xc) is :"<<Xc<<" Ohms"<<endl;
        cout<<"The Impedance of the circuit (Z) is :"<<Z<<" Ohms"<<endl;
        cout<<"The Voltage across Resistor (R) is :"<<Vr<<" Volts"<<endl;
        cout<<"The Voltage across Capacitor (C) is :"<<Vc<<" Volts"<<endl;
        cout<<"The Power Factor (cos(phi))  is :"<<R/Z<<endl;
        cout<<"The Power Factor Angle (phi) is :"<<phi<<" Degrees"<<endl;
        cout<<"Active Power is : "<<P<<" Watts"<<endl;
        cout<<"Reactive Power is : "<<Q<<" VAR"<<endl; // VAR= volt-ampere reactive
    }
};
// RL Circuit
class RL{
    public:
    float I,Vr,Vl,V,Z,XL,R,L,P,Q,phi,Cos_phi;
    void data(){
        cout<<"\t\t** RL Series Circuit **"<<endl<<endl;
        cout<<"Enter the Resistance in Circuit (in Ohms): ";
        cin>>R;
        cout<<"Enter the Inductance in Circuit (in  Henry) : ";
        cin>>L;
        cout<<"The Supply Voltage is 230V and frequency is 50Hz."<<endl;

    }
    void calculation(){
        XL= 2*3.14*50*L;// Inductivity
        V=230;
        Z = sqrt((R*R) + ((XL)*(XL))); // Impedance
        I=V/Z; //Current
        Vr= I*R; //Voltage across Resistor
        Vl= I*XL; // Voltage across Inductance
        Cos_phi=R/Z; //Power Factor
        phi=acos(R/Z)*180/3.14; //Power Factor Angle
        P=V*I*cos(phi); //Active Power
        Q= V*I*sin(phi); //Reactive power
    }
    void show(){
        cout<<endl<<"\tThe calculated values of the circuit."<<endl;
        cout<<"Current (I) through the circuit is :"<<I<<" Amps"<<endl;
        cout<<"The Inductive Reactance (XL) is :"<<XL<<" Ohms"<<endl;
        cout<<"The Impedance of the circuit (Z) is :"<<Z<<" Ohms"<<endl;
        cout<<"The Voltage across Resistor (R) is :"<<Vr<<" Volts"<<endl;
        cout<<"The Voltage across Inductor (L) is :"<<Vl<<" Volts"<<endl;
        cout<<"The Power Factor (cos(phi))  is :"<<Cos_phi<<endl;
        cout<<"The Power Factor Angle (phi) is :"<<phi<<" Degrees"<<endl;
        cout<<"The Active Power (P) of the circuit  is :"<<P<<" Watts"<<endl;
        cout<<"The Reactive Power (Q) Of the circuit is :"<<Q<<" VAR"<<endl;
    }
};
// RLC Circuit
class RLC{
    public:
    float I,Vr,Vl,V,Z,XL,R,L,C,Vc,Xc,P,Q,phi,Cos_phi;
    void data(){
        cout<<"\t\t** RLC Series Circuit **"<<endl<<endl;
        cout<<"Enter the Resistance in Circuit (in Ohms): ";
        cin>>R;
        cout<<"Enter the Inductance in Circuit (in  Henry) : ";
        cin>>L;
        cout<<"Enter the Capacitance in Circuit (in Micro Farad) : ";
        cin>>C;
        cout<<"The Supply Voltage is 230V and frequency is 50Hz."<<endl;

    }
    void cal(){
        float a= 2*3.14*50*L;
        float b=2*3.14*50*0.000001*C;
        V=230;
        XL=a;
        Xc=1/b;
    
    //Inductive 
        class inductive:public RLC
        {
            
        void Calculations(){
            Z = sqrt((R*R) + ((XL-Xc)*(XL-Xc))); // Impedance
            I=V/Z; //Current
            Vr= I*R; //Voltage across Resistor
            Vl= I*XL; // Voltage across Inductance
            Vc=I*Xc;  //voltage across capacitor
            Cos_phi=R/Z; //Power Factor
            phi=acos(R/Z)*180/3.14; //Power Factor Angle
            P=V*I*cos_phi; //Active Power
            Q= V*I*sin(phi); //Reactive 
        }
            void Display(){
            cout<<endl<<"\tThe calculated values of the circuit."<<endl;
            cout<<"Current (I) through the circuit is :"<<I<<" Amps"<<endl;
            cout<<"The Inductive Reactance (XL) is :"<<XL<<" Ohms"<<endl;
            cout<<"The Capacitive Reactance (Xc) is :"<<Xc<<" Ohms"<<endl;
            cout<<"The Impedance of the circuit (Z) is :"<<Z<<" Ohms"<<endl;
            cout<<"The Voltage across Resistor (R) is :"<<Vr<<" Volts"<<endl;
            cout<<"The Voltage across capacitor (C) is :"<<Vc<<" Volts"<<endl;
            cout<<"The Voltage across Inductance (L) is :"<<Vl<<" Volts"<<endl;
            cout<<"The Power Factor (cos(phi))  is :"<<Cos_phi<<endl;
            cout<<"The Power Factor Angle (phi) is :"<<phi<<" Degrees"<<endl;
            cout<<"The Active Power (P) of the circuit  is :"<<P<<" Watts"<<endl;
            cout<<"The Reactive Power (Q) Of the circuit is :"<<Q<<" VAR"<<endl;
        }
        };
    //Capacitive
        class capcitive:public RLC
        {
            void Calculations(){
            Z = sqrt((R*R) + ((Xc-XL)*(Xc-XL))); // Impedance
            I=V/Z; //Current
            Vr= I*R; //Voltage across Resistor
            Vl= I*XL; // Voltage across Inductor
            Vc=I*Xc; //voltage across capacitor
            Cos_phi=R/Z; //Power Factor
            phi=acos(R/Z)*180/3.14; //Power Factor Angle
            P=V*I*cos(phi); //Active Power
            Q= V*I*sin(phi); //Reactive power
            }
            void Display(){
            cout<<endl<<"\tThe calculated values of the circuit."<<endl;
            cout<<"Current (I) through the circuit is :"<<I<<" Amps"<<endl;
            cout<<"The Inductive Reactance (XL) is :"<<XL<<" Ohms"<<endl;
            cout<<"The Capacitive Reactance (Xc) is :"<<Xc<<" Ohms"<<endl;
            cout<<"The Impedance of the circuit (Z) is :"<<Z<<" Ohms"<<endl;
            cout<<"The Voltage across Resistor (R) is :"<<Vr<<" Volts"<<endl;
            cout<<"The Voltage across capacitor (C) is :"<<Vc<<" Volts"<<endl;
            cout<<"The Voltage across Inductor (L) is :"<<Vl<<" Volts"<<endl;
            cout<<"The Power Factor (cos(phi))  is :"<<Cos_phi<<endl;
            cout<<"The Power Factor Angle (phi) is :"<<phi<<" Degrees"<<endl;
            cout<<"The Active Power (P) of the circuit  is :"<<P<<" Watts"<<endl;
            cout<<"The Reactive Power (Q) Of the circuit is :"<<Q<<" VAR"<<endl;
        }
        };
    //Resistive
        class resistive:public RLC
        {
        void Calculations(){
            Z = R; // Impedance
            I=V/Z; //Current
            Vr= I*R; //Voltage across Resistor
            Vl= I*XL; // Voltage across Inductor
            Vc=I*Xc; //voltage across capacitor
            Cos_phi=1; //Power Factor
            phi=0; //Power Factor Angle
            P=V*I*cos(phi); //Active Power
            Q= V*I*sin(phi); //Reactive power
        }
            void Display(){
            cout<<endl<<"\tThe calculated values of the circuit."<<endl;
            cout<<"Current (I) through the circuit is :"<<I<<" Amps"<<endl;
            cout<<"The Inductive Reactance (XL) is :"<<XL<<" Ohms"<<endl;
            cout<<"The Capacitive Reactance (Xc) is :"<<Xc<<" Ohms"<<endl;
            cout<<"The Impedance of the circuit (Z) is :"<<Z<<" Ohms"<<endl;
            cout<<"The Voltage across Resistor (R) is :"<<Vr<<" Volts"<<endl;
            cout<<"The Voltage across capacitor (C) is :"<<Vc<<" Volts"<<endl;
            cout<<"The Voltage across Inductor (L) is :"<<Vl<<" Volts"<<endl;
            cout<<"The Power Factor (cos(phi))  is :"<<Cos_phi<<endl;
            cout<<"The Power Factor Angle (phi) is :"<<phi<<" Degrees"<<endl;
            cout<<"The Active Power (P) of the circuit  is :"<<P<<" Watts"<<endl;
            cout<<"The Reactive Power (Q) Of the circuit is :"<<Q<<" VAR"<<endl;
        }
    };
};

int condition()
{
    if (XL>Xc)
    {
        inductive x;
        x.calculation();
        x.display();
        break;
    }
    else if(XL<Xc)
    {
        capacitive y;
        y.calculation();
        y.display();
        break;
    }
    else
    {
        resistive z;
        z.calculation();
        z.display();
        break;
    
    }
}
int main(){
    int n;
    cout<<endl<<"\t** Series Circuit **"<<endl;
    cout<<"1- RC Circuit."<<endl;
    cout<<"2- RL Circuit."<<endl;
    cout<<"3- R-L-C Circuit."<<endl;
    cout<<endl<<"Enter the Corresponding Number for the required Circuit : ";
    cin>>n;
    cout<<endl<<endl;
    switch(n){
        case 1:{
            RC rc;
            rc.data();
            rc.calculations();
            rc.show();
            break;
        }
        case 2:{
            RL rl;
            rl.data();
            rl.calculation();
            rl.show();
            break;
        }
        case 3:{
            condition()
            
            break;
        }
        default:{
            cout<<"Wrong Input..!";
            break;
        }
    }
}