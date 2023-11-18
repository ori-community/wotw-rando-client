#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/CrabPlaceholder.h>

namespace app::classes::CrabPlaceholder {
    IL2CPP_REGISTER_METHOD(0x006253D0, app::GameObject*, get_Prefab, (app::CrabPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006253E0, void, ClearPrefabLinks, (app::CrabPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (app::CrabPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DB67E0, void, ctor, (app::CrabPlaceholder * this_ptr))
} // namespace app::classes::CrabPlaceholder
