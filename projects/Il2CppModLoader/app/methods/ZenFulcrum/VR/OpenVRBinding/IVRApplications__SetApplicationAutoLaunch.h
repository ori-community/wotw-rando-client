#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__SetApplicationAutoLaunch {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_SetApplicationAutoLaunch * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0167E660, app::EVRApplicationError__Enum, Invoke, (app::IVRApplications_SetApplicationAutoLaunch * this_ptr, app::String* pch_app_key, bool b_auto_launch))
    IL2CPP_REGISTER_METHOD(0x02F3F630, app::IAsyncResult*, BeginInvoke, (app::IVRApplications_SetApplicationAutoLaunch * this_ptr, app::String* pch_app_key, bool b_auto_launch, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_SetApplicationAutoLaunch * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__SetApplicationAutoLaunch
