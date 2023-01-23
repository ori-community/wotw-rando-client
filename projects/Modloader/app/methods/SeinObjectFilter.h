#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinObjectFilter.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::SeinObjectFilter {
    IL2CPP_REGISTER_METHOD(0x008AF110, bool, Valid, (app::SeinObjectFilter * this_ptr, app::GameObject* game_object))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinObjectFilter * this_ptr))
} // namespace app::classes::SeinObjectFilter
