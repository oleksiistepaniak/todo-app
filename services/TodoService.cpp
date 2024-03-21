#include <iostream>
#include <vector>
#include "TodoService.h"

using namespace std;

int static IDENTIFIER = 1;

Todo TodoService::createTodo(vector<Todo> &todos)
{
    cout << "==============================" << endl;
    cout << "Okay. You wanna to create a Todo for you!" << endl;
    cout << "Please, enter a title for your Todo!" << endl;
    string title;

    getline(cin, title);

    cout << "Okay, you have entered a title for your Todo: " << title << endl;
    cout << "Please, enter a description for your Todo!" << endl;
    string description;

    getline(cin, description);

    cout << "Okay, you have entered a description for your Todo: " << description << endl;

    Todo todo = Todo(IDENTIFIER, title, description);
    IDENTIFIER++;
    todos.push_back(todo);

    cout << "You have successfully created the new Todo!" << endl;
}