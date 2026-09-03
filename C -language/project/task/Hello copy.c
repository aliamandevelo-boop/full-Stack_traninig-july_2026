#include <stdio.h>

struct Player
{
    int id;
    char name[20];
    char city[20];
};

void input(struct Player p[])
{
    for(int i = 0; i < 5; i++)
    {
        printf("Enter Player %d ID: ", i+1);
        scanf("%d", &p[i].id);

        printf("Enter Player Name: ");
        scanf("%s", p[i].name);

        printf("Enter Player City: ");
        scanf("%s", p[i].city);
    }
    
}

void display(struct Player p[])


{
    for(int i = 0; i < 5; i++)
    {
        printf("\nID: %d", p[i].id);
        printf("\nName: %s", p[i].name);
        printf("\nCity: %s\n", p[i].city);
    }
}

int main()
{
    struct Player p[5];

    input(p);

    display(p);

    return 0;
}