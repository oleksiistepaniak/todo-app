#ifndef TODO_APP_TODO_H
#define TODO_APP_TODO_H

#include <string>

using namespace std;

enum TodoStatus {
    ACTIVE,
    COMPLETED,
};

class Todo {
private:
    int id;
    string title;
    string description;
    TodoStatus status;

public:
    int getId();
    string getTitle();
    string getDescription();
    TodoStatus getStatus();
    Todo(int id, string &title, string &description);
    void setStatus(TodoStatus desiredStatus);
    void setTitle(string &desiredTitle);
};

#endif //TODO_APP_TODO_H
