#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetPlayAreaSize {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperone_GetPlayAreaSize * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (app::IVRChaperone_GetPlayAreaSize * this_ptr, float* p_size_x, float* p_size_z))
    IL2CPP_REGISTER_METHOD(0x02F3FD90, app::IAsyncResult*, BeginInvoke, (app::IVRChaperone_GetPlayAreaSize * this_ptr, float* p_size_x, float* p_size_z, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (app::IVRChaperone_GetPlayAreaSize * this_ptr, float* p_size_x, float* p_size_z, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetPlayAreaSize
