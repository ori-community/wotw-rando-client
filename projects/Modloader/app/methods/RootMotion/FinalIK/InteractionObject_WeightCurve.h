#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::InteractionObject_WeightCurve {
    IL2CPP_REGISTER_METHOD(0x02A0E0D0, float, GetValue, (app::InteractionObject_WeightCurve * this_ptr, float timer))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InteractionObject_WeightCurve * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::InteractionObject_WeightCurve
