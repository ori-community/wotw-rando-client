#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LockRotation.h>

namespace app::classes::LockRotation {
    IL2CPP_REGISTER_METHOD(0x00FC36A0, void, Awake, app::LockRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC3710, void, Start, app::LockRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC3810, void, LateUpdate, app::LockRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::LockRotation* this_ptr)
} // namespace app::classes::LockRotation
