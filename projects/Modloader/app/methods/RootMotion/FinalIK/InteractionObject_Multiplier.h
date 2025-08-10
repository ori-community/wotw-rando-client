#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InteractionObject_Multiplier.h>
#include <Modloader/app/structs/InteractionObject_WeightCurve.h>

namespace app::classes::RootMotion::FinalIK::InteractionObject_Multiplier {
    IL2CPP_REGISTER_METHOD(
        0x02A0E0A0,
        float,
        GetValue,
        app::InteractionObject_Multiplier* this_ptr,
        app::InteractionObject_WeightCurve* weight_curve,
        float timer
    )
    IL2CPP_REGISTER_METHOD(0x004FC8F0, void, ctor, app::InteractionObject_Multiplier* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::InteractionObject_Multiplier
