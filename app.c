// app.c
// Romaric Assogba, this 25 oct. 2024

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "app.h"
#include "utils.h"
#include "colors.h"
#include "todolist.h"

// Globals variables
char actions[16][256] = {
    "Afficher une vue d'ensemble de la liste des tâches",
    "Ajouter une nouvelle tâche",
    "Modifier le libellé d'une tâche existante",
    "Marquer une tâche comme accomplie",
    "Marquer une tâche comme non accomplie",
    "Afficher les détails d'une tâche",
    "Supprimer une tâche",
    "Rechercher l'id d'une tâche",
    "Réafficher la liste des commandes disponibles",
    "Quitter\n"
};
const int ACTIONS_COUNT = 10;
Task app_todolist[1000] = {0};
char username[100] = {0};

// Functions

void display_available_commands()
{
    for (int i = 0; i < ACTIONS_COUNT; i++)
        printf(TEXT_GREEN "%d- " RESET "%s \n", i + 1, actions[i]);
}

void welcome_message()
{
    printf(TEXT_YELLOW BOLD "TODOLIST APP v0.0.1\n" RESET);
    input("\nEntrer votre pseudo, svp: ", username);
    printf("\nBonjour, " BOLD TEXT_BLUE "%s" RESET
           "\nListe des commandes disponibles\n\n", username);
    display_available_commands();
}

void adding_task()
{
    char task_name[MAX_NAME_LEN] = {0};
    input("\nEntrer le nom de la tâche à ajouter: ", task_name);
    add_task(app_todolist, todolist_length(app_todolist), task_name);
    if (strcmp(task_name, "") != 0)
        printf("Tâche ajoutée avec succès\n");
    else
        printf("Aucune tâche n'a été ajouté");
}

void editing_task()
{
    int size = todolist_length(app_todolist);
    int id = 0;
    char new_name[MAX_NAME_LEN] = {0};
    if (size)
    {
        printf("\nEntrer le numéro de la tâche. ");
        ask_int_between(1, size, &id);

        input("Nouveau nom de la tâche: ", new_name);
        rename_task(app_todolist, id-1, new_name);
        printf("Tâche modifiée avec succès\n");
    }
    else
        printf("\nDésolé, la liste est vide \n");  
}

void updating_task_status(TaskState status)
{
    int size = todolist_length(app_todolist);
    int id = 0;
    if (size)
    {
        printf("\nEntrer le numéro de la tâche. ");
        ask_int_between(1, size, &id);

        set_task_status(app_todolist, id-1, status);
        printf("Tâche marquée comme %s", status? "accomplie\n": "non accomplie\n");
    }
    else
        printf("\nDésolé, la liste est vide \n");   
}

void display_task()
{
    int size = todolist_length(app_todolist);
    int id = 0;
    if (size)
    {
        printf("\nEntrer le numéro de la tâche. ");
        ask_int_between(1, size, &id);
        print_task(&app_todolist[id-1]);
    }
    else
        printf("\nDésolé, la liste est vide \n"); 
}

void removing_task()
{
    int size = todolist_length(app_todolist);
    int id = 0;
    if (size)
    {
        printf("\nEntrer le numéro de la tâche. ");
        ask_int_between(1, size, &id);
        print_task(&app_todolist[id-1]);

        if (confirm("\nÊtes-vous sûr de vouloir supprimer cette tâche ? "
                    "Cette action est irréversible après confirmation"))
        {
            remove_task(app_todolist, id-1);
            printf("Tâche supprimée\n");
        }
    }
    else
        printf("\nDésolé, la liste est vide \n"); 
}

void searching_task_using_kw()
{
    printf("Cette fonctionnalité est en cours de développement.\n");
    // empty for the moment
}

void run_app()
{
    int command = 0, running = 1;
    welcome_message();
    while (running)
    {
        printf("\n");
        ask_int_between(1, ACTIONS_COUNT, &command);
        switch (command)
        {
        case 1:
            display_todolist(app_todolist);
            break;
        case 2:
            adding_task();
            break;
        case 3:
            editing_task();
            break;
        case 4:
            updating_task_status(DONE);
            break;
        case 5:
            updating_task_status(NOT_DONE);
            break;
        case 6:
            display_task();
            break;
        case 7:
            removing_task();
            break;
        case 8:
            searching_task_using_kw();
            break;
        case 9:
            display_available_commands();
            break;
        case 10:
            running = 0;
            break;
        default:
            printf(TEXT_RED BOLD "Commande inconnue\n" RESET);
            break;
        }
    }
}
