#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__CanRenderScene {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_CanRenderScene * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x008A18F0, bool, Invoke, (app::IVRCompositor_CanRenderScene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_CanRenderScene * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRCompositor_CanRenderScene * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__CanRenderScene
