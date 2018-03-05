#include <stdio.h>
#include "Door.h"
#include "Room.h"

Door::Door(std::shared_ptr<Room> room1, std::shared_ptr<Room> room2)
{
    printf("create a Door\n");
    _room1 = room1;
    _room2 = room2;
}

Door::~Door()
{
    printf("delete a Door\n");
}

void Door::Enter()
{
    if (_isOpen == true) {
        if (_room1.expired() == true && _room2.expired() == true) {
            std::shared_ptr<Room> s_room1 = _room1.lock();
            std::shared_ptr<Room> s_room2 = _room2.lock();
            printf("enter from room %d to room %d\n", s_room1->GetRoomNumber(), s_room2->GetRoomNumber());
        }
        else {
            printf("error room!\n");
        }
    }
    else {
        printf("the door is not open!\n");
    }
}
