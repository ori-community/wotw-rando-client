#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ListOfCollidedObjects_c.h>

namespace app::classes::ListOfCollidedObjects___c {
    IL2CPP_REGISTER_METHOD(0x00FA90A0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ListOfCollidedObjects_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FA91E0, bool, _FixedUpdate_b__8_0, app::ListOfCollidedObjects_c* this_ptr, app::GameObject* a)
} // namespace app::classes::ListOfCollidedObjects___c
