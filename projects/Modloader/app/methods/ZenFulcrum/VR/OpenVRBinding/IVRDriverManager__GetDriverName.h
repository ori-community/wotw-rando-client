#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRDriverManager__GetDriverName {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRDriverManager_GetDriverName * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE3D50, uint32_t, Invoke, (app::IVRDriverManager_GetDriverName * this_ptr, uint32_t n_driver, app::StringBuilder* pch_value, uint32_t un_buffer_size))
    IL2CPP_REGISTER_METHOD(0x02D78170, app::IAsyncResult*, BeginInvoke, (app::IVRDriverManager_GetDriverName * this_ptr, uint32_t n_driver, app::StringBuilder* pch_value, uint32_t un_buffer_size, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRDriverManager_GetDriverName * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRDriverManager__GetDriverName
