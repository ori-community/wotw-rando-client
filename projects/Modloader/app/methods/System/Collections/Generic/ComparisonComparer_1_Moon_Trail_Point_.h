#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ComparisonComparer_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/Comparison_1_Moon_Trail_Point_.h>
#include <Modloader/app/structs/Trail_Point.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_Trail_Point_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_Moon_Trail_Point_ * this_ptr, app::Comparison_1_Moon_Trail_Point_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A520, int32_t, Compare, (app::ComparisonComparer_1_Moon_Trail_Point_ * this_ptr, app::Trail_Point x, app::Trail_Point y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_Trail_Point_
