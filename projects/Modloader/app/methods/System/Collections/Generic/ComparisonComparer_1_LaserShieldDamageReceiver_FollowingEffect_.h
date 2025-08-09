#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_LaserShieldDamageReceiver_FollowingEffect_.h>
#include <Modloader/app/structs/Comparison_1_LaserShieldDamageReceiver_FollowingEffect_.h>
#include <Modloader/app/structs/LaserShieldDamageReceiver_FollowingEffect.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_LaserShieldDamageReceiver_FollowingEffect_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_LaserShieldDamageReceiver_FollowingEffect_* this_ptr,
        app::Comparison_1_LaserShieldDamageReceiver_FollowingEffect_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A0E0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_LaserShieldDamageReceiver_FollowingEffect_* this_ptr,
        app::LaserShieldDamageReceiver_FollowingEffect x,
        app::LaserShieldDamageReceiver_FollowingEffect y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_LaserShieldDamageReceiver_FollowingEffect_
