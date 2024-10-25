// todolist.c
// Romaric Assogba, this 25 oct. 2024

#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <time.h>
#include "todolist.h"
#include "colors.h"
#include "utils.h"

int todolist_length(Task todolist[])
{
    int count = 0;
    while (!is_empty(todolist, count))
        count++;
    return count;
}

void display_todolist(Task todolist[])
{
    printf(BOLD "LISTE DES TÂCHES\n" RESET);
    int i = 0;
    Task *task = NULL;
    while (!is_empty(todolist, i))
    {
        task = &todolist[i];
        printf(TEXT_MAGENTA "%d-" RESET " %s (%s)\n",
               i + 1, task->name,
               task->state ? (BOLD TEXT_GREEN "DONE" RESET) : (BOLD TEXT_RED "NOT DONE" RESET));
        i++;
    }
    if (i == 0)
        printf(TEXT_GRAY "--Liste vide--\n" RESET);
}

void add_task(Task todolist[], int id, char name[])
{
    Task *task = &todolist[id];
    task->id = id;
    strcpy(task->name, name);
    time_t t;
    time(&t);
    task->datetime = *localtime(&t);
    task->state = NOT_DONE;
}

void rename_task(Task todolist[], int id, char name[])
{
    Task *task = &todolist[id];
    strcpy(task->name, name);
}

int is_empty(Task todolist[], int id)
{
    return !(strcmp("", (&todolist[id])->name));
}

void set_task_status(Task todolist[], int id, TaskState status)
{
    Task *task = &todolist[id];
    task->state = status;
}

void remove_task(Task todolist[], int id)
{
    int i = id;
    while (!is_empty(todolist, i))
    {
        todolist[i] = todolist[i + 1];
        i++;
    }
}

void print_task(Task *task)
{
    printf(BG_BLUE BOLD TEXT_WHITE "Task (id = %d)" RESET "\n"
           UNDERLINE "Name:" RESET " %s \n" 
           UNDERLINE "Added:" RESET " %s" 
           UNDERLINE "State:" RESET " %s\n",
           task->id, task->name,
           asctime(&task->datetime),
           task->state ? (BOLD TEXT_GREEN "DONE" RESET) : (BOLD TEXT_RED "NOT DONE" RESET));
}

void research_task(Task todolist[], char entree[])
{
    printf("Not implemented yet\n");
    // research task with keywords
    // not implemented yet
}
