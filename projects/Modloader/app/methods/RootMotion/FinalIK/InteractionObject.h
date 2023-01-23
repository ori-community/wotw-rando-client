#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InteractionObject.h>
#include <Modloader/app/structs/InteractionSystem.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/InteractionTarget.h>
#include <Modloader/app/structs/FullBodyBipedEffector__Enum.h>
#include <Modloader/app/structs/InteractionObject_WeightCurve_Type__Enum.h>
#include <Modloader/app/structs/InteractionTarget__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IKSolverFullBodyBiped.h>

namespace app::classes::RootMotion::FinalIK::InteractionObject {
    IL2CPP_REGISTER_METHOD(0x02A0B300, void, OpenTutorial1, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0B3C0, void, OpenTutorial2, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0B480, void, OpenTutorial3, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0B540, void, OpenTutorial4, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0B600, void, SupportGroup, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0B6C0, void, ASThread, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0091E0B0, float, get_length, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724130, void, set_length, (app::InteractionObject * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::InteractionSystem*, get_lastUsedInteractionSystem, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_lastUsedInteractionSystem, (app::InteractionObject * this_ptr, app::InteractionSystem* value))
    IL2CPP_REGISTER_METHOD(0x02A0B780, void, Initiate, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0BB00, app::Transform*, get_lookAtTarget, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0BBD0, app::InteractionTarget*, GetTarget_1, (app::InteractionObject * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::InteractionSystem* interaction_system))
    IL2CPP_REGISTER_METHOD(0x02A0BE00, bool, CurveUsed, (app::InteractionObject * this_ptr, app::InteractionObject_WeightCurve_Type__Enum type))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::InteractionTarget__Array*, GetTargets, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0BED0, app::Transform*, GetTarget_2, (app::InteractionObject * this_ptr, app::FullBodyBipedEffector__Enum effector_type, app::String* tag))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, OnStartInteraction, (app::InteractionObject * this_ptr, app::InteractionSystem* interaction_system))
    IL2CPP_REGISTER_METHOD(0x02A0C170, void, Apply_1, (app::InteractionObject * this_ptr, app::IKSolverFullBodyBiped* solver, app::FullBodyBipedEffector__Enum effector, app::InteractionTarget* target, float timer, float weight))
    IL2CPP_REGISTER_METHOD(0x02A0C790, float, GetValue, (app::InteractionObject * this_ptr, app::InteractionObject_WeightCurve_Type__Enum weight_curve_type, app::InteractionTarget* target, float timer))
    IL2CPP_REGISTER_METHOD(0x02A0CAE0, app::Transform*, get_targetsRoot, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0CBB0, void, Awake, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0CBC0, void, Apply_2, (app::InteractionObject * this_ptr, app::IKSolverFullBodyBiped* solver, app::FullBodyBipedEffector__Enum effector, app::InteractionObject_WeightCurve_Type__Enum type, float value, float weight))
    IL2CPP_REGISTER_METHOD(0x02A0D320, app::Transform*, GetTarget_3, (app::InteractionObject * this_ptr, app::FullBodyBipedEffector__Enum effector_type))
    IL2CPP_REGISTER_METHOD(0x02A0D3C0, int32_t, GetWeightCurveIndex, (app::InteractionObject * this_ptr, app::InteractionObject_WeightCurve_Type__Enum weight_curve_type))
    IL2CPP_REGISTER_METHOD(0x02A0D430, int32_t, GetMultiplierIndex, (app::InteractionObject * this_ptr, app::InteractionObject_WeightCurve_Type__Enum weight_curve_type))
    IL2CPP_REGISTER_METHOD(0x02A0D4A0, void, OpenUserManual, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0D560, void, OpenScriptReference, (app::InteractionObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0D620, void, ctor, (app::InteractionObject * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::InteractionObject
