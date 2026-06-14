#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TouchWalls.h>

namespace app::classes::RootMotion::Demos::TouchWalls {
    IL2CPP_REGISTER_METHOD(0x02047640, void, Start, app::TouchWalls* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020476C0, void, FixedUpdate, app::TouchWalls* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02047750, void, OnDestroy, app::TouchWalls* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TouchWalls* this_ptr)
} // namespace app::classes::RootMotion::Demos::TouchWalls
