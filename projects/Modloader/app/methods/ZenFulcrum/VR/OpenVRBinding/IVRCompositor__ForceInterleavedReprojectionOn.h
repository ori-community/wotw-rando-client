#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ForceInterleavedReprojectionOn {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_ForceInterleavedReprojectionOn * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (app::IVRCompositor_ForceInterleavedReprojectionOn * this_ptr, bool b_override))
    IL2CPP_REGISTER_METHOD(0x02F41A40, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_ForceInterleavedReprojectionOn * this_ptr, bool b_override, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRCompositor_ForceInterleavedReprojectionOn * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ForceInterleavedReprojectionOn
