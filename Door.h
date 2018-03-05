#ifndef DOOR_H
#define DOOR_H

#include <memory>
#include "MapSite.h"
#include "Room.h"

class Door: public MapSite {
public:
    Door(std::shared_ptr<Room> room1 = NULL, std::shared_ptr<Room> room2 = NULL);
    ~Door();

    virtual void Enter();
    Room* otherSideFrom(Room*);

private:
    std::weak_ptr<Room> _room1;
    std::weak_ptr<Room> _room2;
    bool _isOpen;
};

#endif
