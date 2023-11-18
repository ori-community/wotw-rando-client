#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_PreRecordingInstantiationEntry_.h>
#include <Modloader/app/structs/Comparison_1_PreRecordingInstantiationEntry_.h>
#include <Modloader/app/structs/PreRecordingInstantiationEntry.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_PreRecordingInstantiationEntry_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_PreRecordingInstantiationEntry_ * this_ptr, app::Comparison_1_PreRecordingInstantiationEntry_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A050, int32_t, Compare, (app::ComparisonComparer_1_PreRecordingInstantiationEntry_ * this_ptr, app::PreRecordingInstantiationEntry x, app::PreRecordingInstantiationEntry y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_PreRecordingInstantiationEntry_
