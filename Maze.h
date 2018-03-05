#ifndef MAZE_H
#define MAZE_H

#include <map>
#include <memory>
#include "Room.h"
#include "Door.h"
#include "Wall.h"

class Maze {
public:
    Maze();
    ~Maze();

    void AddRoom(std::shared_ptr<Room>);
    std::shared_ptr<Room> RoomNo(int);

private:
    std::map<int, std::shared_ptr<Room>> RoomList;
};

#endif
