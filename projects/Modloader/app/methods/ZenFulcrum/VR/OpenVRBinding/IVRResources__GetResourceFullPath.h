#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRResources_GetResourceFullPath.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRResources__GetResourceFullPath {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRResources_GetResourceFullPath * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE3470, uint32_t, Invoke, (app::IVRResources_GetResourceFullPath * this_ptr, app::String* pch_resource_name, app::String* pch_resource_type_directory, app::String* pch_path_buffer, uint32_t un_buffer_len))
    IL2CPP_REGISTER_METHOD(0x02CE4D40, app::IAsyncResult*, BeginInvoke, (app::IVRResources_GetResourceFullPath * this_ptr, app::String* pch_resource_name, app::String* pch_resource_type_directory, app::String* pch_path_buffer, uint32_t un_buffer_len, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRResources_GetResourceFullPath * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRResources__GetResourceFullPath
