#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScenarioPlaybackData.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B85630, int32_t, Invoke, (app::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_ * this_ptr, app::ScalableAnimationPlayer_ScenarioPlaybackData x, app::ScalableAnimationPlayer_ScenarioPlaybackData y))
    IL2CPP_REGISTER_METHOD(0x02B8C360, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_ * this_ptr, app::ScalableAnimationPlayer_ScenarioPlaybackData x, app::ScalableAnimationPlayer_ScenarioPlaybackData y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_Moon_ScalableAnimationPlayer_ScenarioPlaybackData_
