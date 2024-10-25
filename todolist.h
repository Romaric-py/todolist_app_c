// todolist.h
// Romaric Assogba, this 25 oct. 2024

#ifndef TODOLIST_H
#define TODOLIST_H

// include
#include <time.h>

// constantes macros
#define MAX_NAME_LEN 256

// enumeration
typedef enum 
{
    NOT_DONE, DONE
} TaskState;

// structures
typedef struct 
{
    int id;
    char name[MAX_NAME_LEN];
    struct tm datetime;
    TaskState state;
} Task;

// function prototypes
void add_task(Task todolist[], int id, char name[]);
void print_task(Task *task);
int todolist_length(Task todolist[]);
void display_todolist(Task todolist[]);
void add_task(Task todolist[], int id, char name[]);
void rename_task(Task todolist[], int id, char name[]);
int is_empty(Task todolist[], int id);
void set_task_status(Task todolist[], int id, TaskState status);
void remove_task(Task todolist[], int id);
void print_task(Task *task);
void research_task(Task todolist[], char entree[]);


#endif // TODOLIST_H
