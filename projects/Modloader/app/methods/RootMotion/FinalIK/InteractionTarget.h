#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::InteractionTarget {
    IL2CPP_REGISTER_METHOD(0x02A14720, void, OpenTutorial1, (app::InteractionTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A147E0, void, OpenTutorial2, (app::InteractionTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A148A0, void, OpenTutorial3, (app::InteractionTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A14960, void, OpenTutorial4, (app::InteractionTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A14A20, void, SupportGroup, (app::InteractionTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A14AE0, void, ASThread, (app::InteractionTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A14BA0, float, GetValue, (app::InteractionTarget * this_ptr, app::InteractionObject_WeightCurve_Type__Enum curve_type))
    IL2CPP_REGISTER_METHOD(0x02A14C30, void, ResetRotation, (app::InteractionTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A14D40, void, RotateTo, (app::InteractionTarget * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x02A15B60, void, OpenUserManual, (app::InteractionTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A15C20, void, OpenScriptReference, (app::InteractionTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A15CE0, void, ctor, (app::InteractionTarget * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::InteractionTarget
