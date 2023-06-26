#include <iostream>
#include "Client.h"

int main()
{

	Client* clients = new Client("Oleg Ivanov", 13);
	Client* clients2 = new Client("Vasay Pupkin", 11);
	Client* clients3 = new Client("Igor Sergeivich", 13);
	Client* clients4 = new Client("Stanislav Pitrasyn", 13);
	clients->ShowData();
	clients2->ShowData();
	clients3->ShowData();
	clients4->ShowData();

	return {};
}