#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SetExplicitTimingMode {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_SetExplicitTimingMode * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (app::IVRCompositor_SetExplicitTimingMode * this_ptr, bool b_explicit_timing_mode))
    IL2CPP_REGISTER_METHOD(0x02F43130, app::IAsyncResult *, BeginInvoke, (app::IVRCompositor_SetExplicitTimingMode * this_ptr, bool b_explicit_timing_mode, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRCompositor_SetExplicitTimingMode * this_ptr, app::IAsyncResult * result))
}
