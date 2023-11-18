#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinNestedPrefab.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SeinCharacter.h>

namespace app::classes::SeinNestedPrefab {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::SeinNestedPrefab * this_ptr, app::SeinCharacter* sein, app::GameObject* prefab))
    IL2CPP_REGISTER_METHOD(0x008AEAC0, void, set_IsInstantiated, (app::SeinNestedPrefab * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008AEC20, bool, get_IsInstantiated, (app::SeinNestedPrefab * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008AECC0, void, Instantiate, (app::SeinNestedPrefab * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008AF050, void, Destroy, (app::SeinNestedPrefab * this_ptr))
} // namespace app::classes::SeinNestedPrefab
