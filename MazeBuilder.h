#ifndef MAZEBUILDER_H
#define MAZEBUILDER_H

#include <memory>
#include "Maze.h"
#include "Room.h"
#include "Door.h"
#include "Wall.h"

class MazeBuilder {
public:
    virtual void BuildMaze() {}
    virtual void BuildRoom(int roomNum) {}
    virtual void BuildDoor(int roomFrom, int roomTo, Direction d) {}

    virtual std::shared_ptr<Maze> GetMaze() {return NULL;}

    MazeBuilder() {}
    virtual ~MazeBuilder() {}
};

#endif
