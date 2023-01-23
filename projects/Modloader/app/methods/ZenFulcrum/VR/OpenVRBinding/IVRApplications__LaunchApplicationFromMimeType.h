#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRApplications_LaunchApplicationFromMimeType.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRApplicationError__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchApplicationFromMimeType {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_LaunchApplicationFromMimeType * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C7EDC0, app::EVRApplicationError__Enum, Invoke, (app::IVRApplications_LaunchApplicationFromMimeType * this_ptr, app::String* pch_mime_type, app::String* pch_args))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::IVRApplications_LaunchApplicationFromMimeType * this_ptr, app::String* pch_mime_type, app::String* pch_args, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_LaunchApplicationFromMimeType * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchApplicationFromMimeType
