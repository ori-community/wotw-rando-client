#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRApplicationError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRApplications_RemoveApplicationManifest.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__RemoveApplicationManifest {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRApplications_RemoveApplicationManifest* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x020105B0,
        app::EVRApplicationError__Enum,
        Invoke,
        app::IVRApplications_RemoveApplicationManifest* this_ptr,
        app::String* pch_application_manifest_full_path
    )
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRApplications_RemoveApplicationManifest* this_ptr,
        app::String* pch_application_manifest_full_path,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F550D0,
        app::EVRApplicationError__Enum,
        EndInvoke,
        app::IVRApplications_RemoveApplicationManifest* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__RemoveApplicationManifest
