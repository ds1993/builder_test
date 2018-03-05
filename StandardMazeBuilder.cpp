#include <stdio.h>
#include "StandardMazeBuilder.h"

StandardMazeBuilder::StandardMazeBuilder(): _currentMaze(NULL)
{
}

StandardMazeBuilder::~StandardMazeBuilder()
{
}

void StandardMazeBuilder::BuildMaze()
{
    _currentMaze = std::shared_ptr<Maze>(new Maze);
}

void StandardMazeBuilder::BuildRoom(int roomNum)
{
    if (_currentMaze->RoomNo(roomNum) == NULL) {
        std::shared_ptr<Room> room = std::shared_ptr<Room>(new Room(roomNum));
        _currentMaze->AddRoom(room);
        std::shared_ptr<Wall> wall1(new Wall);
        std::shared_ptr<Wall> wall2(new Wall);
        std::shared_ptr<Wall> wall3(new Wall);
        std::shared_ptr<Wall> wall4(new Wall);
        room->SetSide(North, wall1);
        room->SetSide(South, wall2);
        room->SetSide(East, wall3);
        room->SetSide(West, wall4);
    }
}

void StandardMazeBuilder::BuildDoor(int roomFrom, int roomTo, Direction d1)
{
    std::shared_ptr<Room> r1 = _currentMaze->RoomNo(roomFrom);
    std::shared_ptr<Room> r2 = _currentMaze->RoomNo(roomTo);
    if ((r1 == NULL) || (r2 == NULL)) {
        printf("error room num!\n");
        return;
    }

    Direction d2;
    if (d1 == North) {
        d2 = South;
    }
    else if (d1 == South) {
        d2 = North;
    }
    else if (d1 == East) {
        d2 = West;
    }
    else {
        d2 = East;
    }

    std::shared_ptr<Door> door = std::shared_ptr<Door>(new Door(r1, r2));
    r1->SetSide(d1, door);
    r2->SetSide(d2, door);
}

std::shared_ptr<Maze> StandardMazeBuilder::GetMaze()
{
    return _currentMaze;
}
