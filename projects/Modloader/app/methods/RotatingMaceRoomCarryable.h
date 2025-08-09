#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPressurePlate.h>
#include <Modloader/app/structs/RotatingMaceRoomCarryable.h>

namespace app::classes::RotatingMaceRoomCarryable {
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, OnPressed, app::RotatingMaceRoomCarryable* this_ptr, app::IPressurePlate* plate)
    IL2CPP_REGISTER_METHOD(0x00650B90, void, OnReleased, app::RotatingMaceRoomCarryable* this_ptr, app::IPressurePlate* plate)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::RotatingMaceRoomCarryable* this_ptr)
} // namespace app::classes::RotatingMaceRoomCarryable
