#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MonoSingleton_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::MonoSingleton_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019FAE30, app::Object*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x019FAAA0, void, Awake, app::MonoSingleton_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019FAA80, void, ctor, app::MonoSingleton_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::MonoSingleton_1_System_Object_
