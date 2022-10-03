#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::MovingDiscController {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::MovingDiscController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111CB40, float, get_StartingDiscPosition, (app::MovingDiscController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111CC20, void, OnCollisionStay, (app::MovingDiscController * this_ptr, app::Collision* other))
    IL2CPP_REGISTER_METHOD(0x0111CF40, void, OnUpdate, (app::MovingDiscController * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x0111D560, bool, ShouldMove, (app::MovingDiscController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111D650, void, StopTimeline, (app::MovingDiscController * this_ptr, app::MoonTimeline* moon_timeline))
    IL2CPP_REGISTER_METHOD(0x0111D710, void, StartTimeline, (app::MovingDiscController * this_ptr, app::MoonTimeline* moon_timeline))
    IL2CPP_REGISTER_METHOD(0x0111D7D0, void, SetAngularVelocity, (app::MovingDiscController * this_ptr, float angular_velocity))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::MovingDiscController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111D990, void, Apply, (app::MovingDiscController * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x0111DBE0, app::IUberState__Array*, get_AffectingUberStates, (app::MovingDiscController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111DC70, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::MovingDiscController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111DE30, void, Awake, (app::MovingDiscController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111DEF0, void, OnDestroy, (app::MovingDiscController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111DFB0, void, ctor, (app::MovingDiscController * this_ptr))
} // namespace app::classes::Moon::MovingDiscController
