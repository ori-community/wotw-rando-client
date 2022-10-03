#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TextMeshSetter {
    IL2CPP_REGISTER_METHOD(0x010E8390, void, Awake, (app::TextMeshSetter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E8420, void, OnEnable, (app::TextMeshSetter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E8420, void, FixedUpdate, (app::TextMeshSetter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E8460, void, SetText, (app::TextMeshSetter * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TextMeshSetter * this_ptr))
} // namespace app::classes::TextMeshSetter
