#pragma once

#include <iostream>
#include <vector>
#include <string>


class Client
{
private:
	std::string _name;
	int _state;
	int _adress;
	int _online;
	int _length;
public:
	
	Client(std::string name, int state) : _name(name), _state(state) {}

	Client(Client& client)
	{
		_name = client._name;
		_state = client._state;
	}

	void ShowData()
	{
		// std::vector <const char*> clients = { "Oleg Ivanov", "Vasay Pupkin", "Igor Sergeivich", "Stanislav Pitrasyn" };
		std::cout << "Client: " << _name << "\n";
		std::cout << "State: " << _state << "\n";
	}

	void State_of_an_account(int state, std::string name);

	void Clients_online(int online , int length);


};