#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__CancelApplicationLaunch {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_CancelApplicationLaunch * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0167EC80, bool, Invoke, (app::IVRApplications_CancelApplicationLaunch * this_ptr, app::String * pch_app_key))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::IVRApplications_CancelApplicationLaunch * this_ptr, app::String * pch_app_key, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRApplications_CancelApplicationLaunch * this_ptr, app::IAsyncResult * result))
}
