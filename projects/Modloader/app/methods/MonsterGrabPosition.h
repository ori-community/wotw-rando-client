#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MonsterGrabPosition.h>

namespace app::classes::MonsterGrabPosition {
    IL2CPP_REGISTER_METHOD(0x01331F00, void, LateUpdate, app::MonsterGrabPosition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::MonsterGrabPosition* this_ptr)
} // namespace app::classes::MonsterGrabPosition
