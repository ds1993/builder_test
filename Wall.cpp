#include <stdio.h>
#include "Wall.h"

Wall::Wall()
{
    printf("create a Wall\n");
}

Wall::~Wall()
{
    printf("delete a Wall\n");
}

void Wall::Enter()
{
    printf("this is a Wall!\n");
}