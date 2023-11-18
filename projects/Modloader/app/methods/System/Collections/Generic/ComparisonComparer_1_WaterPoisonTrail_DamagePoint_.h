#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_WaterPoisonTrail_DamagePoint_.h>
#include <Modloader/app/structs/Comparison_1_WaterPoisonTrail_DamagePoint_.h>
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_WaterPoisonTrail_DamagePoint_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::Comparison_1_WaterPoisonTrail_DamagePoint_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A1B0, int32_t, Compare, (app::ComparisonComparer_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::WaterPoisonTrail_DamagePoint x, app::WaterPoisonTrail_DamagePoint y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_WaterPoisonTrail_DamagePoint_
