#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObjectFilter.h>

namespace app::classes::GameObjectFilter {
    IL2CPP_REGISTER_METHOD(0x003F8970, bool, Valid, app::GameObjectFilter* this_ptr, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::GameObjectFilter* this_ptr)
} // namespace app::classes::GameObjectFilter
