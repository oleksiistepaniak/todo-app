#include "Todo.h"

Todo::Todo(int id, std::string &title, std::string &description)
{
    this->id = id;
    this->title = title;
    this->description = description;
    this->status = ACTIVE;
}

int Todo::getId()
{
    return this->id;
}

string Todo::getDescription()
{
    return this->description;
}

string Todo::getTitle()
{
    return this->title;
}

TodoStatus Todo::getStatus()
{
    return this->status;
}

void Todo::makeCompleted()
{
    this->status = COMPLETED;
}
