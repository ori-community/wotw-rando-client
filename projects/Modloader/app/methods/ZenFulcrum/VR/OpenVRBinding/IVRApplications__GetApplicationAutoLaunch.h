#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationAutoLaunch.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationAutoLaunch {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRApplications_GetApplicationAutoLaunch* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x0167EC80, bool, Invoke, app::IVRApplications_GetApplicationAutoLaunch* this_ptr, app::String* pch_app_key)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRApplications_GetApplicationAutoLaunch* this_ptr,
        app::String* pch_app_key,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, app::IVRApplications_GetApplicationAutoLaunch* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationAutoLaunch
