#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__PerformApplicationPrelaunchCheck {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_PerformApplicationPrelaunchCheck * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x020105B0, app::EVRApplicationError__Enum, Invoke, (app::IVRApplications_PerformApplicationPrelaunchCheck * this_ptr, app::String* pch_app_key))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::IVRApplications_PerformApplicationPrelaunchCheck * this_ptr, app::String* pch_app_key, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_PerformApplicationPrelaunchCheck * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__PerformApplicationPrelaunchCheck
