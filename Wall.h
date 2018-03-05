#ifndef WALL_H
#define WALL_H

#include "MapSite.h"

class Wall: public MapSite {
public:
    Wall();
    ~Wall();

    virtual void Enter();
};

#endif
