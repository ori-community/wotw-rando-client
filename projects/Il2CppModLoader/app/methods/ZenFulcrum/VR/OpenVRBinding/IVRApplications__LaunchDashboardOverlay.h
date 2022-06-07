#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchDashboardOverlay {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_LaunchDashboardOverlay * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x020105B0, app::EVRApplicationError__Enum, Invoke, (app::IVRApplications_LaunchDashboardOverlay * this_ptr, app::String * pch_app_key))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::IVRApplications_LaunchDashboardOverlay * this_ptr, app::String * pch_app_key, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_LaunchDashboardOverlay * this_ptr, app::IAsyncResult * result))
}
