
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include <vector>
using namespace std;

class Animal{
    
    public:
    string name = " ";
    string feature = "";
    string sound = "";
   
    Animal(string _name)
   {
       name = _name;
       
       cout << "God created " << name<< endl;
   }
    
    void get_sound()
    {        cout << sound<<endl;    }
    void get_action()
    {        cout << feature <<endl;    }
};



    
class Farm_Animal: public Animal {
    public:
        vector <string> resource;
        Farm_Animal(vector <string> res, string _name) : Animal( _name)
        {       resource = res;    }
            
        void get_resource( string name_eat)
            {
            int flag = 0;
            for (int i=0; i < resource.size(); i++){
                if (resource[i] == name_eat)
                    {   
                    cout << name << " can be eaten "<< name_eat<< endl;
                    flag = 1;
                    break;
                    }
                }
                
            if (flag == 0)
                { cout << name << " can't be eaten "<< name_eat<<  endl;  }
            }
};
    //задание 3
class Zebra: public Farm_Animal { //1
    public:
    Zebra(string ability, vector <string> res, string _name):Farm_Animal( res,  _name)
    {        feature = ability;    }
    
     void get_action(string object)
    {        cout << name <<" "<< feature <<" the " << object <<endl;    }
};

class Alligator: public Farm_Animal { //2
    public:
    Alligator(string ability, vector <string> res, string _name):Farm_Animal( res,  _name)
    {        feature = ability;    }
    
     void get_action(string object)
    {        cout << name <<" "<< feature <<" the " << object <<endl;    }
};

class Cheburashka: public Farm_Animal { //3
    public:
    Cheburashka(string ability, vector <string> res, string _name):Farm_Animal( res,  _name)
    {        feature = ability;    }
    
     void get_action(string object)
    {        cout << name <<" "<< feature <<" the " << object <<endl;    }
};

class Rat: public Farm_Animal { //4
    public:
    Rat(string ability, vector <string> res, string _name):Farm_Animal( res,  _name)
    {        feature = ability;    }
    
     void get_action(string object)
    {        cout << name <<" "<< feature <<" the " << object <<endl;    }
};


//задание 4
class Tiger: public Animal {
    public:
        Tiger(string _name, string _feature, string _sound) : Animal( _name)
        {   feature = _feature;
            sound = _sound;
           }
        void get_action(string object)
        {   cout << name <<" "<< feature <<" the " << object <<endl;    }
         
    
};

class Fox: public Animal {
    public:
        Fox(string _name, string _feature, string _sound) : Animal( _name)
        {   feature = _feature;
            sound = _sound;
           }
        void get_action(string object)
        {   cout << name <<" "<< feature <<" the " << object <<endl;    }
         
    
};

class Wolf: public Animal {
    public:
        Wolf(string _name, string _feature, string _sound) : Animal( _name)
        {   feature = _feature;
            sound = _sound;
           }
        void get_action(string object)
        {   cout << name <<" "<< feature <<" the " << object <<endl;    }
         
    
};

class Hyena: public Animal {
    public:
        Hyena(string _name, string _feature, string _sound) : Animal( _name)
        {       
            feature = _feature;
            sound = _sound;
           }
        void get_action(string object)
        {   cout << name <<" "<< feature <<" the " << object <<endl;    }
         
    
};











int main()
{
    Animal bear("Misha");
    bear.get_sound();
    bear.get_action();
    
    vector <string> res_din = {"bear","man", "hare", "horse", "elephant" };
    Farm_Animal dinosaur(res_din, "dinosaur");
    dinosaur.get_resource("bear");
    
    //задача 2
    //зебра
    vector <string> res_zeb= {"grass" };
    Zebra martin("pushes", res_zeb, "martin");
    martin.get_resource("grass");
    martin.get_action("elefant" );
    //крокодил гена 
    vector <string> res_alligator= {"man", "hare", "horse" };
    Alligator gena("bites", res_alligator, "Gena" );
    gena.get_action("rat" );
    //чебурашка
    vector <string> res_aheburashka= {"nuts", "apples" };
    Cheburashka cheba("listening to" ,res_aheburashka, "Cheburator");
    cheba.get_action("radio" );
    // крыса
    vector <string> res_rat= {"Alligator", "Cheburashka","man" ,"girl" };
    Rat larisa("sniffs",res_rat, "Larisa");
    larisa.get_resource("girl");
    larisa.get_action("trace");
    //задание 4
    
    
    Hyena hyena( "the desert wolf", "hunts for", "yYYyaY AyyYyAAY");
    Wolf wolf("the wolf","hunts for","Yyyyyyyyy");
    Fox fox( "red cat","hunts for", "mrmrmrrmrmrmrm" );
    Tiger tiger( "big cat", "hunts for","RRRRRrrrRRrrrRR");
    cout<< "голос лисы - "  << fox.sound;
    return 0;
}
