#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRResources__LoadSharedResource {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRResources_LoadSharedResource * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE4E30, uint32_t, Invoke, (app::IVRResources_LoadSharedResource * this_ptr, app::String* pch_resource_name, app::String* pch_buffer, uint32_t un_buffer_len))
    IL2CPP_REGISTER_METHOD(0x02CE53A0, app::IAsyncResult*, BeginInvoke, (app::IVRResources_LoadSharedResource * this_ptr, app::String* pch_resource_name, app::String* pch_buffer, uint32_t un_buffer_len, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRResources_LoadSharedResource * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRResources__LoadSharedResource
