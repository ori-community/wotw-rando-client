#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SingletonMonoBehaviour_1_System_Object_.h>

namespace app::classes::PlayFab::Internal::SingletonMonoBehaviour_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D14FB0, app::Object*, get_instance, ())
    IL2CPP_REGISTER_METHOD(0x01D15050, void, CreateInstance, ())
    IL2CPP_REGISTER_METHOD(0x01D154F0, void, Awake, (app::SingletonMonoBehaviour_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (app::SingletonMonoBehaviour_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019FAA80, void, ctor, (app::SingletonMonoBehaviour_1_System_Object_ * this_ptr))
} // namespace app::classes::PlayFab::Internal::SingletonMonoBehaviour_1_System_Object_
