#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HasComponentGameObjectFilter.h>

namespace app::classes::HasComponentGameObjectFilter {
    IL2CPP_REGISTER_METHOD(0x0109DFE0, void, Start, app::HasComponentGameObjectFilter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0109E180, bool, Valid, app::HasComponentGameObjectFilter* this_ptr, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x0109E4B0, void, ctor, app::HasComponentGameObjectFilter* this_ptr)
} // namespace app::classes::HasComponentGameObjectFilter
