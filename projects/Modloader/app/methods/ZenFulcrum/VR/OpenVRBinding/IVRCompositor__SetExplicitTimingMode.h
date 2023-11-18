#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRCompositor_SetExplicitTimingMode.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SetExplicitTimingMode {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_SetExplicitTimingMode * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01DCB6A0, void, Invoke, (app::IVRCompositor_SetExplicitTimingMode * this_ptr, bool b_explicit_timing_mode))
    IL2CPP_REGISTER_METHOD(0x02F43130, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_SetExplicitTimingMode * this_ptr, bool b_explicit_timing_mode, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRCompositor_SetExplicitTimingMode * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SetExplicitTimingMode
