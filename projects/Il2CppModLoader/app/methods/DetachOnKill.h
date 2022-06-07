#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DetachOnKill {
    IL2CPP_REGISTER_METHOD(0x00B8DF10, void, Awake, (app::DetachOnKill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8DFA0, void, OnPoolSpawned, (app::DetachOnKill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::DetachOnKill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8DFB0, app::GameObject *, GetDetachOnKillObjectsParent, ())
    IL2CPP_REGISTER_METHOD(0x00B8E0D0, void, Update, (app::DetachOnKill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8E1E0, void, OnKill, (app::DetachOnKill * this_ptr, app::Vector2 direction))
    IL2CPP_REGISTER_METHOD(0x00506160, void, ctor, (app::DetachOnKill * this_ptr))
}
