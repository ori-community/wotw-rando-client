#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchApplicationFromMimeType {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_LaunchApplicationFromMimeType * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C7EDC0, app::EVRApplicationError__Enum, Invoke, (app::IVRApplications_LaunchApplicationFromMimeType * this_ptr, app::String * pch_mime_type, app::String * pch_args))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::IVRApplications_LaunchApplicationFromMimeType * this_ptr, app::String * pch_mime_type, app::String * pch_args, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_LaunchApplicationFromMimeType * this_ptr, app::IAsyncResult * result))
}
