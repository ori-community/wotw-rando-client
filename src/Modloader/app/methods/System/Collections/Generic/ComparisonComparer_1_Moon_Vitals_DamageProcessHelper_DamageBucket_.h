#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_.h>
#include <Modloader/app/structs/Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_DamageBucket.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* this_ptr,
        app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A2F0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* this_ptr,
        app::Vitals_DamageProcessHelper_DamageBucket x,
        app::Vitals_DamageProcessHelper_DamageBucket y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_
