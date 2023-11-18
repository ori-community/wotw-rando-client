#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_UberPoolManager_ObjectTracking_.h>
#include <Modloader/app/structs/Comparison_1_UberPoolManager_ObjectTracking_.h>
#include <Modloader/app/structs/UberPoolManager_ObjectTracking.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UberPoolManager_ObjectTracking_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_UberPoolManager_ObjectTracking_ * this_ptr, app::Comparison_1_UberPoolManager_ObjectTracking_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A050, int32_t, Compare, (app::ComparisonComparer_1_UberPoolManager_ObjectTracking_ * this_ptr, app::UberPoolManager_ObjectTracking x, app::UberPoolManager_ObjectTracking y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_UberPoolManager_ObjectTracking_
