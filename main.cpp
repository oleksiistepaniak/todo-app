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
        cout << "Choose a needed option, please." << endl;
        cout << "1. Create new task." << endl;
        cout << "2. Display info about tasks" << endl;
        cout << "3. Make task completed by its identifier" << endl;
        cout << "4. Change task title by its identifier" << endl;
        cout << "5. Change task description by its identifier" << endl;
        cout << "6. Display info about active tasks" << endl;
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

        if (operation == 3)
        {
            TodoService::makeTodoCompleted(todos);
        }

        if (operation == 4)
        {
            TodoService::changeTodoTitle(todos);
        }

        if (operation == 5)
        {
            TodoService::changeTodoDescription(todos);
        }

        if (operation == 6)
        {
            TodoService::printInfoAboutActiveTodos(todos);
        }
    }
}
