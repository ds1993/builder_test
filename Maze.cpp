#include <stdio.h>
#include "Maze.h"

Maze::Maze()
{
    printf("create a Maze\n");
}

Maze::~Maze()
{
    printf("delete a Maze\n");
}

void Maze::AddRoom(std::shared_ptr<Room> room)
{
    int roomNum = room->GetRoomNumber();
    if (RoomList.find(roomNum) != RoomList.end()) {
        printf("the room %d has been add to the list!\n", roomNum);
    }
    else {
        printf("add room %d\n", roomNum);
        RoomList[roomNum] = room;
    }
}

std::shared_ptr<Room> Maze::RoomNo(int roomNum)
{
    if (RoomList.find(roomNum) != RoomList.end()) {
        return RoomList[roomNum];
    }
    else {
        printf("the room %d is not in the list\n", roomNum);
        return NULL;
    }
}