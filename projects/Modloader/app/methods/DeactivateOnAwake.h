#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeactivateOnAwake.h>

namespace app::classes::DeactivateOnAwake {
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Awake, (app::DeactivateOnAwake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DeactivateOnAwake * this_ptr))
} // namespace app::classes::DeactivateOnAwake
