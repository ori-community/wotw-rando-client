#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/JumpShootSharkZone.h>

namespace app::classes::JumpShootSharkZone {
    IL2CPP_REGISTER_METHOD(0x00E4FA00, void, OnTriggerStay, app::JumpShootSharkZone* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x00E4FD10, void, ctor, app::JumpShootSharkZone* this_ptr)
} // namespace app::classes::JumpShootSharkZone
