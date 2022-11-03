#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetPlayAreaRect {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperone_GetPlayAreaRect * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02A521E0, bool, Invoke, (app::IVRChaperone_GetPlayAreaRect * this_ptr, app::HmdQuad_t* rect))
    IL2CPP_REGISTER_METHOD(0x02F3FCC0, app::IAsyncResult*, BeginInvoke, (app::IVRChaperone_GetPlayAreaRect * this_ptr, app::HmdQuad_t* rect, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::IVRChaperone_GetPlayAreaRect * this_ptr, app::HmdQuad_t* rect, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetPlayAreaRect
