#include <iostream>
using namespace std;


class Mathematician {
    public:
    Mathematician (string _name,string _last_name,int _number_of_publications,
        string _best_publication) 
        :name(_name), last_name(_last_name),
            number_of_publications(_number_of_publications),
            best_publication(_best_publication){} 

        // Получение имени учененго
        virtual string get_name()
        {            return name;        }
        // Получение фамилии ученого
        virtual string get_last_name()
        {            return last_name;        }
        // получить количество статей ученого
        virtual int get_number_of_publications()
        {            return number_of_publications;        }
        // Получение название лучшей работы
        virtual string get_best_publication()
        {            return best_publication;        }

        void result_math()
        {
            cout<< "Великий математик " << get_name() << " " << get_last_name()<< " опубликовал " <<  get_number_of_publications() <<" работ"<< ", лучшая из которых: \"" << get_best_publication()<< "\"";    
        }

    private:
        string name;// Имя
        string last_name;// Фамилия
        int number_of_publications;//  Количество публикаций
        string best_publication;//название лучшей публикации
}; 

class Physicist {
    public:
    Physicist (string _name,string _last_name,int _number_of_patents,
        string _best_patent) 
        :name(_name), last_name(_last_name),
            number_of_patents(_number_of_patents),
            best_patent(_best_patent){} 

      
        // Получение имени учененго
        string get_name()
        {            return name;         }
        // Получение фамилии ученого
        string get_last_name()
        {            return last_name;        }
        // получить количество патентов ученого
        int get_number_of_patents()
        {            return number_of_patents;        }
        // Получение название лучшей работы
        string get_best_patent()
        {            return best_patent;        }

       
        void result_phis()
        {
            cout<< "Великий физик и изобретатель " << get_name() << " " << get_last_name()<< " получил " <<  get_number_of_patents() <<" патентов."<<endl <<  " Его лучшее ихобретение - " << get_best_patent();    
        }
    private:
        string name;// Имя 
        string last_name;// Фамилия
        int number_of_patents;//  Количество патентов
        string best_patent;//название лучшего изобретения
    
}; 

class Valkov: public Physicist, public Mathematician {
    public:
    Valkov(string _name,string _last_name,int _number_of_patents,
        string _best_patent,int _number_of_publications,string _best_publication):{
            name = _name, 
            last_name = _last_name,
            number_of_publications =(_number_of_publications),
            best_publication  =(_best_publication),
            number_of_patents = (_number_of_patents), 
            best_patent = (_best_patent)
} 
//number_of_publications{_number_of_publications} , best_publication{_best_publication}
        /*Valkov(string _name,string _last_name,int _number_of_patents,
        string _best_patent, int _number_of_publications,
        string _best_publication) 
        :name(_name), last_name(_last_name),
            number_of_publications(_number_of_publications),
            best_publication(_best_publication),
            number_of_patents(_number_of_patents), 
            best_patent(_best_patent){}*/



        void a_b()
        {
            cout << Mathematician::result_math() << endl << "AND" << Physicist::result_phis();
        }

        void result()
        {
            cout<< "Великий физик и математик " << Mathematician::get_name() << " " << Mathematician::get_last_name()<< " получил " <<  Physicist::get_number_of_patents() <<" патентов и имеет "<< Mathematician::get_number_of_publications() << " публикаций. " <<endl <<  " Его лучшее изобретение - " << Physicist::get_best_patent() << ". Лучшая публикация - " << Mathematician::get_best_publication();    
        }



    private:
        string name;// Имя 
        string last_name;// Фамилия
        int number_of_patents;//  Количество патентов
        string best_patent;//название лучшего изобретения
        int number_of_publications;//  Количество публикаций
        string best_publication;//название лучшей публикации

};












int main()
{
	
    Mathematician math("Алексей", "Вальков", 10, "число Валькова");
    math.result_math();
    cout << endl << endl ;
    Physicist phis("Алексей", "Вальков", 10500, "ШтуЧка");
    phis.result_phis();
    cout << endl << endl ;
    
	return 0;
}