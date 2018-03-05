#include "MazeGame.h"
#include "StandardMazeBuilder.h"

int main()
{
    StandardMazeBuilder builder;
    MazeGame maze;
    maze.CreateMaze(builder);
}
