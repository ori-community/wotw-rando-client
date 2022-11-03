#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetFrameTimings {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_GetFrameTimings * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F54C90, uint32_t, Invoke, (app::IVRCompositor_GetFrameTimings * this_ptr, app::Compositor_FrameTiming* p_timing, uint32_t n_frames))
    IL2CPP_REGISTER_METHOD(0x02F42180, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_GetFrameTimings * this_ptr, app::Compositor_FrameTiming* p_timing, uint32_t n_frames, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (app::IVRCompositor_GetFrameTimings * this_ptr, app::Compositor_FrameTiming* p_timing, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetFrameTimings
