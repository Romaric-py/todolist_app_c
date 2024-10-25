// app.h
// Romaric Assogba, this 25 oct. 2024

#if !defined(APP_H)
#define APP_H

// inclusions
#include "app.h"
#include "utils.h"
#include "colors.h"
#include "todolist.h"

// extern variables
extern char actions[16][256];
extern const int ACTIONS_COUNT;
extern char username[100];

// function prototypes
void display_available_commands();
void welcome_message();
void adding_task();
void editing_task();
void updating_task_status(TaskState status);
void display_task();
void removing_task();
void searching_task_using_kw();
void run_app();



#endif // APP_H
