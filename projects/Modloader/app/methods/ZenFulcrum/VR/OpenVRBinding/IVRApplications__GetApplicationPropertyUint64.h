#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRApplications_GetApplicationPropertyUint64.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRApplicationError__Enum.h>
#include <Modloader/app/structs/EVRApplicationProperty__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationPropertyUint64 {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_GetApplicationPropertyUint64 * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02F3DE40, uint64_t, Invoke, (app::IVRApplications_GetApplicationPropertyUint64 * this_ptr, app::String* pch_app_key, app::EVRApplicationProperty__Enum e_property, app::EVRApplicationError__Enum* pe_error))
    IL2CPP_REGISTER_METHOD(0x02F3E3C0, app::IAsyncResult*, BeginInvoke, (app::IVRApplications_GetApplicationPropertyUint64 * this_ptr, app::String* pch_app_key, app::EVRApplicationProperty__Enum e_property, app::EVRApplicationError__Enum* pe_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x02CEF3B0, uint64_t, EndInvoke, (app::IVRApplications_GetApplicationPropertyUint64 * this_ptr, app::EVRApplicationError__Enum* pe_error, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationPropertyUint64
