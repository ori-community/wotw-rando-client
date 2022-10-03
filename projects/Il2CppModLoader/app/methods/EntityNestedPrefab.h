#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::EntityNestedPrefab {
    IL2CPP_REGISTER_METHOD(0x00C93010, void, OnValidate, (app::EntityNestedPrefab * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C930F0, void, InstantiatePrefab, (app::EntityNestedPrefab * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C935A0, void, Start, (app::EntityNestedPrefab * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EntityNestedPrefab * this_ptr))
} // namespace app::classes::EntityNestedPrefab
