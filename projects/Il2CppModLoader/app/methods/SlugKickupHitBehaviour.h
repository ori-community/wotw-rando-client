#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SlugKickupHitBehaviour {
    IL2CPP_REGISTER_METHOD(0x006C6090, void, OnCacheSerializedComponents, (app::SlugKickupHitBehaviour * this_ptr, app::Entity * owner))
    IL2CPP_REGISTER_METHOD(0x006C6140, void, OnInitializeTask, (app::SlugKickupHitBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x006C6370, void, SetFeetAngle, (app::SlugKickupHitBehaviour * this_ptr, float feet_angle))
    IL2CPP_REGISTER_METHOD(0x006C6420, void, SetRotationAngle, (app::SlugKickupHitBehaviour * this_ptr, float rot_angle))
    IL2CPP_REGISTER_METHOD(0x006C6480, void, OnEnterTask, (app::SlugKickupHitBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x006C6B50, void, SpawnOrbs, (app::SlugKickupHitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476FEF8, SlugKickupHitBehaviour_SpawnOrbs__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006C6CC0, void, HandleRotations, (app::SlugKickupHitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C7130, void, ResetFeetAngle, (app::SlugKickupHitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C7140, void, MoveToNeutralStep, (app::SlugKickupHitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C7430, bool, Finished, (app::SlugKickupHitBehaviour * this_ptr, app::LegacyTimelineSequence * seq))
    IL2CPP_REGISTER_METHOD(0x006C7490, bool, BounceRoutine, (app::SlugKickupHitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C7DB0, app::BehaviourStatus__Enum, OnExecuteTask, (app::SlugKickupHitBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x006C7FD0, void, ChangeState, (app::SlugKickupHitBehaviour * this_ptr, app::SlugKickupHitBehaviour_KickupState__Enum state))
    IL2CPP_REGISTER_METHOD(0x006C8440, void, OnExitTask, (app::SlugKickupHitBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::SlugKickupHitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C8710, void, ctor, (app::SlugKickupHitBehaviour * this_ptr))
}
