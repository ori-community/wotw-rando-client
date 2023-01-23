#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationsErrorNameFromEnum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRApplicationError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationsErrorNameFromEnum {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_GetApplicationsErrorNameFromEnum * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F52080, void*, Invoke, (app::IVRApplications_GetApplicationsErrorNameFromEnum * this_ptr, app::EVRApplicationError__Enum error))
    IL2CPP_REGISTER_METHOD(0x02F3EB00, app::IAsyncResult*, BeginInvoke, (app::IVRApplications_GetApplicationsErrorNameFromEnum * this_ptr, app::EVRApplicationError__Enum error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, void*, EndInvoke, (app::IVRApplications_GetApplicationsErrorNameFromEnum * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationsErrorNameFromEnum
