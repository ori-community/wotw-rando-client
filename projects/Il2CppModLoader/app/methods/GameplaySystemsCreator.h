#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GameplaySystemsCreator {
    IL2CPP_REGISTER_METHOD(0x004140F0, void, Awake, (app::GameplaySystemsCreator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00414240, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x004142F0, app::IEnumerator *, CreateSetups, (app::GameplaySystemsCreator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00414440, app::GameObject *, InstantiatePrefab_1, (app::GameObject * prefab))
    IL2CPP_REGISTER_METHOD(0x00414520, app::GameObject *, InstantiatePrefab_2, (app::GameObject * prefab, app::Transform * parent, app::Vector3 local_position))
    IL2CPP_REGISTER_METHOD(0x00414850, void, ctor, (app::GameplaySystemsCreator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
