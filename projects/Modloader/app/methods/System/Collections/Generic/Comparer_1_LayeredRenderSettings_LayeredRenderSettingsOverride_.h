#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_.h>
#include <Modloader/app/structs/Comparison_1_LayeredRenderSettings_LayeredRenderSettingsOverride_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02CA1500, app::Comparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_*, Create, (app::Comparison_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x047532C8, Comparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride__Create__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA1700, app::Comparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02808F10, int32_t, IComparer_Compare, (app::Comparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_LayeredRenderSettings_LayeredRenderSettingsOverride_
