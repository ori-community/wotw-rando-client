#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_Datadog_ThresholdItem_.h>
#include <Modloader/app/structs/Comparison_1_Datadog_ThresholdItem_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_Datadog_ThresholdItem_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_Datadog_ThresholdItem_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02C978C0, app::Comparer_1_Datadog_ThresholdItem_*, Create, (app::Comparison_1_Datadog_ThresholdItem_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0471B290, Comparer_1_Datadog_ThresholdItem__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C97AC0, app::Comparer_1_Datadog_ThresholdItem_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x028085A0, int32_t, IComparer_Compare, (app::Comparer_1_Datadog_ThresholdItem_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_Datadog_ThresholdItem_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_Datadog_ThresholdItem_
