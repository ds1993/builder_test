#ifndef MAZEGAME_H
#define MAZEGAME_H

#include <memory>
#include "MazeBuilder.h"

class MazeGame {
public:
    MazeGame();
    ~MazeGame();

    std::shared_ptr<Maze> CreateMaze(MazeBuilder& builder);
};

#endif
