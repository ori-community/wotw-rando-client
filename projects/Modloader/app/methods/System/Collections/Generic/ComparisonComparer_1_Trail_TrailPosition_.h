#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ComparisonComparer_1_Trail_TrailPosition_.h>
#include <Modloader/app/structs/Comparison_1_Trail_TrailPosition_.h>
#include <Modloader/app/structs/Trail_TrailPosition.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Trail_TrailPosition_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_Trail_TrailPosition_ * this_ptr, app::Comparison_1_Trail_TrailPosition_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A050, int32_t, Compare, (app::ComparisonComparer_1_Trail_TrailPosition_ * this_ptr, app::Trail_TrailPosition x, app::Trail_TrailPosition y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Trail_TrailPosition_
