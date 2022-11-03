#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayFab::Internal::SingletonMonoBehaviour_1_PlayFabHttp_ {
    IL2CPP_REGISTER_METHOD(0x01D14FB0, app::PlayFabHttp*, get_instance, ())
    IL2CPP_REGISTER_METHODINFO(0x0473DAF8, SingletonMonoBehaviour_1_PlayFabHttp__get_instance__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D15050, void, CreateInstance, ())
    IL2CPP_REGISTER_METHODINFO(0x04779F30, SingletonMonoBehaviour_1_PlayFabHttp__CreateInstance__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019FAA80, void, ctor, (app::SingletonMonoBehaviour_1_PlayFabHttp_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475B590, SingletonMonoBehaviour_1_PlayFabHttp___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D154F0, void, Awake, (app::SingletonMonoBehaviour_1_PlayFabHttp_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (app::SingletonMonoBehaviour_1_PlayFabHttp_ * this_ptr))
} // namespace app::classes::PlayFab::Internal::SingletonMonoBehaviour_1_PlayFabHttp_
