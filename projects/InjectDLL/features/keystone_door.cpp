#include <interception_macros.h>

//No it's not KeystoneDoor
IL2CPP_INTERCEPT(, MoonDoorWithSlots, bool, get_SeinInRange, (app::MoonDoorWithSlots* this_ptr)) {
    //We could do something position based, but that would be actual work :>
    this_ptr->fields.m_opensOnLeftSide = 0;
    bool right = MoonDoorWithSlots_get_SeinInRange(this_ptr);
    this_ptr->fields.m_opensOnLeftSide = 1;
    bool left = MoonDoorWithSlots_get_SeinInRange(this_ptr);
    return right || left;
}
