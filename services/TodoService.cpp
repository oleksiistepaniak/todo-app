#include <iostream>
#include <vector>
#include <map>
#include "TodoService.h"

using namespace std;

int static IDENTIFIER = 0;
map<int, string> INDEXES_STATUSES = {
        {0, "active"},
        {1, "completed"},
};

void TodoService::createTodo(vector<Todo> &todos)
{
    cout << "==============================" << endl;
    cout << "Okay. You wanna to create a Todo for you!" << endl;
    cout << "Please, enter a title for your Todo!" << endl;
    string title;
    cin.ignore();

    getline(cin, title);

    cout << "Okay, you have entered a title for your Todo: " << title << endl;
    cout << "Please, enter a description for your Todo!" << endl;
    string description;
    cin.ignore();

    getline(cin, description);

    cout << "Okay, you have entered a description for your Todo: " << description << endl;

    Todo todo = Todo(IDENTIFIER, title, description);
    IDENTIFIER++;
    todos.push_back(todo);

    cout << "You have successfully created the new Todo!" << endl;
    cout << "==============================" << endl;
}

void TodoService::printInfoAboutTodos(const vector<Todo> &todos)
{
    if (todos.empty())
    {
        cout << "Unfortunately, there is no todos yet!" << endl;
        return;
    }

    cout << "==============================" << endl;
    cout << "INFORMATION ABOUT ALL TODOS" << endl;

    for (Todo todo : todos)
    {
        string status = INDEXES_STATUSES[todo.getStatus()];
        cout << "****************************" << endl;
        cout << "ID: " << todo.getId() << endl;
        cout << "TITLE: " << todo.getTitle() << endl;
        cout << "DESCRIPTION: " << todo.getDescription() << endl;
        cout << "STATUS: " << status << endl;
        cout << "****************************" << endl;
    }

    cout << "==============================" << endl;
}