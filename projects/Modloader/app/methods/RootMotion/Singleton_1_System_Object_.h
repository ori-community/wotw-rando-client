#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Singleton_1_System_Object_.h>

namespace app::classes::RootMotion::Singleton_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D17440, app::Object*, get_instance, ())
    IL2CPP_REGISTER_METHOD(0x01D17540, void, Awake, (app::Singleton_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019FAA80, void, ctor, (app::Singleton_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::RootMotion::Singleton_1_System_Object_
