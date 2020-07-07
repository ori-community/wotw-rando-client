#include <interception_macros.h>

//No it's not KeystoneDoor
INTERCEPT(17948416, bool, MoonDoorWithSlots__get_SeinInRange, (app::MoonDoorWithSlots* this_ptr)) {
    //We could do something position based, but that would be actual work :>
    this_ptr->fields.m_opensOnLeftSide = 0;
    bool right = MoonDoorWithSlots__get_SeinInRange(this_ptr);
    this_ptr->fields.m_opensOnLeftSide = 1;
    bool left = MoonDoorWithSlots__get_SeinInRange(this_ptr);
    return right || left;
}
