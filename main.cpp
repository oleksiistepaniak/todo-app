#include <iostream>
#include <vector>
#include "models/Todo.h"
#include "services/TodoService.h"

using namespace std;

int main() {
    vector<Todo> todos;

    while (true)
    {
        cout << "==============================" << endl;
        cout << "Welcome to Todo console application!" << endl;
        cout << "Choose needed option, please." << endl;
        cout << "1. Create new Todo." << endl;
        cout << "2. Display info about todos" << endl;
        cout << "==============================" << endl;

        int operation;

        cin >> operation;

        if (operation == 1)
        {
            TodoService::createTodo(todos);
        }

        if (operation == 2)
        {
            TodoService::printInfoAboutTodos(todos);
        }
    }
}
