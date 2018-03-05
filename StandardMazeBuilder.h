#ifndef STANDARDMAZEBUILDER_H
#define STANDARDMAZEBUILDER_H

#include <memory>
#include "MazeBuilder.h"

class StandardMazeBuilder: public MazeBuilder {
public:
    StandardMazeBuilder();
    ~StandardMazeBuilder();

    virtual void BuildMaze();
    virtual void BuildRoom(int roomNum);
    virtual void BuildDoor(int roomFrom, int roomTo, Direction d);

    virtual std::shared_ptr<Maze> GetMaze();
private:
    std::shared_ptr<Maze> _currentMaze;
};

#endif