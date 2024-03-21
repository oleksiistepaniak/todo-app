#ifndef TODO_APP_TODOSERVICE_H
#define TODO_APP_TODOSERVICE_H

#include <vector>
#include "../models/Todo.h"

class TodoService {
public:
    Todo createTodo(vector<Todo> &todos);
};


#endif //TODO_APP_TODOSERVICE_H
