#include "MazeGame.h"

MazeGame::MazeGame()
{
}

MazeGame::~MazeGame()
{
}

std::shared_ptr<Maze> MazeGame::CreateMaze(MazeBuilder& builder)
{
    builder.BuildMaze();
    builder.BuildRoom(1);
    builder.BuildRoom(2);
    builder.BuildDoor(1, 2, North);
    return builder.GetMaze();
}
