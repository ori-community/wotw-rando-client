#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FlyToUserInterfaceSpot.h>

namespace app::classes::FlyToUserInterfaceSpot {
    IL2CPP_REGISTER_METHOD(0x0127B540, void, Start, (app::FlyToUserInterfaceSpot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0127B630, void, FixedUpdate, (app::FlyToUserInterfaceSpot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0127B6B0, void, LateUpdate, (app::FlyToUserInterfaceSpot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085D750, bool, get_IsSuspended, (app::FlyToUserInterfaceSpot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFE00, void, set_IsSuspended, (app::FlyToUserInterfaceSpot * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::FlyToUserInterfaceSpot * this_ptr))
} // namespace app::classes::FlyToUserInterfaceSpot
