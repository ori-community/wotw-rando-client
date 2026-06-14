#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/WaterThatRockFallsInto.h>

namespace app::classes::WaterThatRockFallsInto {
    IL2CPP_REGISTER_METHOD(0x008E5070, void, OnTriggerEnter, app::WaterThatRockFallsInto* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x008E55B0, void, OnTriggerStay, app::WaterThatRockFallsInto* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::WaterThatRockFallsInto* this_ptr)
} // namespace app::classes::WaterThatRockFallsInto
