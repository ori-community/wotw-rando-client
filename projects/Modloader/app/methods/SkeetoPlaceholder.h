#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SkeetoEntity.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SkeetoPlaceholder.h>

namespace app::classes::SkeetoPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0075F7D0, app::SkeetoEntity*, get_CurrentEntity, (app::SkeetoPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006253D0, app::GameObject*, get_Prefab, (app::SkeetoPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanUseAutosetupPositionInOnSand, (app::SkeetoPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006253E0, void, ClearPrefabLinks, (app::SkeetoPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075F890, void, Spawn, (app::SkeetoPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsUsingVariations, (app::SkeetoPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0075F970, void, ctor, (app::SkeetoPlaceholder * this_ptr))
} // namespace app::classes::SkeetoPlaceholder
