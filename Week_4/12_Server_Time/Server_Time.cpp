#include <iostream>
#include <exception>
#include <string>

using namespace std;

string AskTimeServer(){
	/* Для тестирования повставляйте сюда код, реализующий различное поведение этой функии:
	   * нормальный возврат строкового значения
	   * выброс исключения system_error
	   * выброс другого исключения с сообщением.
	*/
	if (false){
		throw system_error(error_code());
	}
	if (true){
		throw runtime_error("Something went wrong");
	}
	string server_time = "11:11:11";
	return server_time;
}

class TimeServer{
    public:
        string GetCurrentTime(){
            /* Реализуйте этот метод:
                * если AskTimeServer() вернула значение, запишите его в LastFetchedTime и верните
                * если AskTimeServer() бросила исключение system_error, верните текущее значение
                поля LastFetchedTime
                * если AskTimeServer() бросила другое исключение, пробросьте его дальше.
            */
		   try{
				LastFetchedTime = AskTimeServer();
		   }
		   catch(system_error& sys_e){
				cout << sys_e.code() << endl;
		   }
		   return LastFetchedTime;
        }
    private:
        string LastFetchedTime = "00:00:00";
};

int main(){
	// Меняя реализацию функции AskTimeServer, убедитесь, что это код работает корректно
	TimeServer ts;
	try{
		cout << ts.GetCurrentTime() << endl;
	}
	catch (exception& e){
		cout << "Exception got: " << e.what() << endl;
	}
	return 0;
}