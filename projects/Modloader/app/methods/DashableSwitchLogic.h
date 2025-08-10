#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/DashableSwitchLogic.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/IMoonSetupAnimator.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::DashableSwitchLogic {
    IL2CPP_REGISTER_METHOD(0x00DD1ED0, app::IUberState*, get_UberState, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::IMoonSetupAnimator*, get_MoonSetupAnimator, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD1F90, void, set_MoonSetupAnimator, app::DashableSwitchLogic* this_ptr, app::IMoonSetupAnimator* value)
    IL2CPP_REGISTER_METHOD(0x00446590, bool, ShouldCreateCheckpoint, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD2060, bool, get_IsOn, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD21A0, bool, get_IsPlayingTransitionAnimation, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1B030, void, Reset, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD2200, void, Awake, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD22F0, void, PerformStateTransition, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD2450, app::IDesiredUberState*, GetRequirementsForTimeline, app::DashableSwitchLogic* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00DD26C0, void, StopTransitions, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD2200, void, SetAnimatorUberStates, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DD2720, void, OnDashHit, app::DashableSwitchLogic* this_ptr, app::Vector3 impact_velocity)
    IL2CPP_REGISTER_METHOD(0x00DD2A10, void, OnCollisionEnter, app::DashableSwitchLogic* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00DD2BF0, bool, HitFromTop, app::DashableSwitchLogic* this_ptr, app::Vector3 impact_velocity)
    IL2CPP_REGISTER_METHOD(0x00DD2D80, void, PushButton, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::DashableSwitchLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::DashableSwitchLogic* this_ptr)
} // namespace app::classes::DashableSwitchLogic
