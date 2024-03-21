#ifndef TODO_APP_TODOSERVICE_H
#define TODO_APP_TODOSERVICE_H

#include <vector>
#include "../models/Todo.h"

class TodoService {
public:
    static void createTodo(vector<Todo> &todos);
    static void printInfoAboutTodos(const vector<Todo> &todos);
};


#endif //TODO_APP_TODOSERVICE_H
