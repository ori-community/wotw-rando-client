#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SlugPlaceholder.h>

namespace app::classes::SlugPlaceholder {
    IL2CPP_REGISTER_METHOD(0x006C8770, app::GameObject*, get_Prefab, (app::SlugPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C8780, void, ClearPrefabLinks, (app::SlugPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C8790, void, Spawn, (app::SlugPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (app::SlugPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C88F0, void, ctor, (app::SlugPlaceholder * this_ptr))
} // namespace app::classes::SlugPlaceholder
