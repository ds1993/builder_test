#ifndef ROOM_H
#define ROOM_H

#include <memory>
#include "MapSite.h"

class Room: public MapSite {
public:
    Room(int roomNo);
    ~Room();

    std::shared_ptr<MapSite> GetSide(Direction) const;
    void SetSide(Direction, std::shared_ptr<MapSite>);

    int GetRoomNumber() {return _roomNumber;}

    virtual void Enter();

private:
    std::shared_ptr<MapSite> _sides[4];
    int _roomNumber;
};

#endif
