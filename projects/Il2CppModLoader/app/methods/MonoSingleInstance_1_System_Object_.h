#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MonoSingleInstance_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019FA1D0, bool, get_IsInitialized, ())
    IL2CPP_REGISTER_METHOD(0x019FA2D0, app::Object*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x019DF660, void, set_Instance, (app::Object * value))
    IL2CPP_REGISTER_METHOD(0x019FA910, void, Awake, (app::MonoSingleInstance_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019FAA80, void, ctor, (app::MonoSingleInstance_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::MonoSingleInstance_1_System_Object_
