#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRApplications_IdentifyApplication.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRApplicationError__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__IdentifyApplication {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_IdentifyApplication * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F51B50, app::EVRApplicationError__Enum, Invoke, (app::IVRApplications_IdentifyApplication * this_ptr, uint32_t un_process_id, app::String* pch_app_key))
    IL2CPP_REGISTER_METHOD(0x02F3EF10, app::IAsyncResult*, BeginInvoke, (app::IVRApplications_IdentifyApplication * this_ptr, uint32_t un_process_id, app::String* pch_app_key, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_IdentifyApplication * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__IdentifyApplication
