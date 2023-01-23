#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparison_1_Datadog_ThresholdItem_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Datadog_ThresholdItem.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Comparison_1_Datadog_ThresholdItem_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Datadog_ThresholdItem_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_Datadog_ThresholdItem_ * this_ptr, app::Datadog_ThresholdItem x, app::Datadog_ThresholdItem y))
    IL2CPP_REGISTER_METHOD(0x02B864E0, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_Datadog_ThresholdItem_ * this_ptr, app::Datadog_ThresholdItem x, app::Datadog_ThresholdItem y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Datadog_ThresholdItem_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_Datadog_ThresholdItem_
