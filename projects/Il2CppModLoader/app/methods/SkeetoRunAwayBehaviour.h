#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SkeetoRunAwayBehaviour {
    IL2CPP_REGISTER_METHOD(0x006AF270, app::SkeetoLocomotion *, get_Locomotion, (app::SkeetoRunAwayBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006AF350, bool, GetValidAnticipationPosition, (app::SkeetoRunAwayBehaviour * this_ptr, app::Vector3 * ref_target))
    IL2CPP_REGISTER_METHOD(0x006AF5A0, bool, TryGetValidAnticipationSidePosition, (app::SkeetoRunAwayBehaviour * this_ptr, float sign, app::Vector3 * ref_target))
    IL2CPP_REGISTER_METHOD(0x006AFB10, void, OnEnterApproach, (app::SkeetoRunAwayBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006AFC80, void, OnEnter, (app::SkeetoRunAwayBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x006AFF50, bool, IsFacingTarget, (app::SkeetoRunAwayBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B00D0, app::BehaviourStatus__Enum, UpdateApproach, (app::SkeetoRunAwayBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B0610, void, OnExit, (app::SkeetoRunAwayBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x006B0670, app::BehaviourStatus__Enum, OnExecute, (app::SkeetoRunAwayBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x006B0680, void, ctor, (app::SkeetoRunAwayBehaviour * this_ptr))
}
