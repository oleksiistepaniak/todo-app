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

void Todo::setStatus(TodoStatus desiredStatus)
{
    this->status = desiredStatus;
}

void Todo::setTitle(std::string &desiredTitle)
{
    this->title = desiredTitle;
}

void Todo::setDescription(std::string &desiredDescription)
{
    this->description = desiredDescription;
}