#include "stdio.h"
#include "Room.h"

Room::Room(int roomNo): _roomNumber(roomNo)
{
    printf("create a Room\n");
}

Room::~Room()
{
    printf("delete a Room\n");
}

std::shared_ptr<MapSite> Room::GetSide(Direction d) const
{
    return _sides[d];
}

void Room::SetSide(Direction d, std::shared_ptr<MapSite> mapsite)
{
    _sides[d] = mapsite;
}

void Room::Enter()
{
    printf("enter room %d\n", _roomNumber);
}
