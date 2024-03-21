#include <iostream>
#include <vector>
#include <map>
#include "TodoService.h"

using namespace std;

int static IDENTIFIER = 0;
int static MIN_TITLE_LENGTH = 3;
int static MIN_DESCRIPTION_LENGTH = 5;
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

    if (title.empty() || title.length() < MIN_TITLE_LENGTH)
    {
        cout << "Unfortunately, you have entered an invalid title! Title cannot be empty. "
                "Min length is 3 symbols!" << endl;
        return;
    }

    cout << "Okay, you have entered a title for your Todo: " << title << endl;
    cout << "Please, enter a description for your Todo!" << endl;
    string description;

    getline(cin, description);

    if (description.empty() || description.length() < MIN_DESCRIPTION_LENGTH)
    {
        cout << "Unfortunately, you have entered an invalid description! Description cannot be empty! "
                "Min length is 5 symbols!" << endl;
        return;
    }

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

void TodoService::makeTodoCompleted(vector<Todo> &todos)
{
    cout << "==============================" << endl;
    cout << "Okay. You wanna to make Todo as completed!" << endl;
    cout << "Please, enter a todo's identifier!" << endl;

    int id;

    cin >> id;

    cin.ignore();

    if (id >= todos.size())
    {
        cout << "Unfortunately, you have entered an invalid identifier! Please, try again!" << endl;
        return;
    }

    if (todos[id].getStatus() == COMPLETED)
    {
        cout << "Unfortunately, you cannot make todo as completed, because it's already completed!" << endl;
        return;
    }

    cout << "Okay, you have specified an identifier of completed task: " << id << endl;

    todos[id].setStatus(COMPLETED);

    cout << "You have successfully made completed Todo by identifier: " << id << endl;
    cout << "==============================" << endl;
}

void TodoService::changeTodoTitle(vector<Todo> &todos)
{
    cout << "==============================" << endl;
    cout << "Okay. You wanna to change the todo's title!" << endl;
    cout << "Please, enter a todo's identifier!" << endl;

    int id;

    cin >> id;

    if (id >= todos.size())
    {
        cout << "Unfortunately, you have entered an invalid identifier! Please, try again!" << endl;
        return;
    }

    cin.ignore();

    cout << "Okay, you have specified an identifier of task (which title should be changed): " << id << endl;
    cout << "Current title of todo's by id: " << id << " is " << todos[id].getTitle() << endl;
    cout << "Please, now enter a new title of todo's" << endl;

    string title;

    getline(cin, title);

    if (title.empty() || title.length() < MIN_TITLE_LENGTH)
    {
        cout << "Unfortunately, you have entered an invalid title! Title cannot be empty."
                " Min length is 3 symbols!" << endl;
        return;
    }

    cout << "Okay, you have specified the new title for task by id: " << id << ". New title: " << title << endl;

    todos[id].setTitle(title);

    cout << "You have successfully changed Todo's title by identifier: " << id << endl;
    cout << "==============================" << endl;
}