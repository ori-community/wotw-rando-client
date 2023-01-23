#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRApplications_GetApplicationKeyByProcessId.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRApplicationError__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationKeyByProcessId {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_GetApplicationKeyByProcessId * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE3D50, app::EVRApplicationError__Enum, Invoke, (app::IVRApplications_GetApplicationKeyByProcessId * this_ptr, uint32_t un_process_id, app::String* pch_app_key_buffer, uint32_t un_app_key_buffer_len))
    IL2CPP_REGISTER_METHOD(0x02F3D3A0, app::IAsyncResult*, BeginInvoke, (app::IVRApplications_GetApplicationKeyByProcessId * this_ptr, uint32_t un_process_id, app::String* pch_app_key_buffer, uint32_t un_app_key_buffer_len, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_GetApplicationKeyByProcessId * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationKeyByProcessId
