#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRCompositor_SubmitExplicitTimingData.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRCompositorError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SubmitExplicitTimingData {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_SubmitExplicitTimingData * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0167F180, app::EVRCompositorError__Enum, Invoke, (app::IVRCompositor_SubmitExplicitTimingData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_SubmitExplicitTimingData * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRCompositorError__Enum, EndInvoke, (app::IVRCompositor_SubmitExplicitTimingData * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SubmitExplicitTimingData
