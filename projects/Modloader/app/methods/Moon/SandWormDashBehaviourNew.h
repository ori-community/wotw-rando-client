#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SandWormDashBehaviourNew.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour_SpeedEntry.h>
#include <Modloader/app/structs/SandWormDashBehaviourNew_State__Enum.h>

namespace app::classes::Moon::SandWormDashBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x00EC1200, app::Vector3, get_DashTargetPosition, (app::SandWormDashBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EC1370, void, OnEntityInitialized, (app::SandWormDashBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EC1420, void, OnEnter, (app::SandWormDashBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00EC1B30, void, CalculateDashTime, (app::SandWormDashBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EC1D20, app::BehaviourStatus__Enum, OnExecute, (app::SandWormDashBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00EC1E20, void, OnExit, (app::SandWormDashBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00EC2240, void, OnCollision, (app::SandWormDashBehaviourNew * this_ptr, app::GameObject* go))
    IL2CPP_REGISTER_METHOD(0x00EC2390, void, OnMoonControllerCollision, (app::SandWormDashBehaviourNew * this_ptr, app::MoonControllerColliderHit moon_controller_collider_hit))
    IL2CPP_REGISTER_METHODINFO(0x047776C8, SandWormDashBehaviourNew_OnMoonControllerCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EC2420, void, OnNativeCollision, (app::SandWormDashBehaviourNew * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHODINFO(0x04703EA0, SandWormDashBehaviourNew_OnNativeCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EC2460, void, HitWall, (app::SandWormDashBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::SandWormDashBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EC24A0, app::SandWormSandDigLocomotionBehaviour_SpeedEntry, GetSpeedSetting, (app::SandWormDashBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047134D8, SandWormDashBehaviourNew_GetSpeedSetting__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EC2510, void, ChangeState, (app::SandWormDashBehaviourNew * this_ptr, app::SandWormDashBehaviourNew_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00EC26B0, app::BehaviourStatus__Enum, OnAnticUpdate, (app::SandWormDashBehaviourNew * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x00EC2960, app::BehaviourStatus__Enum, OnDashUpdate, (app::SandWormDashBehaviourNew * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x00EC2BB0, app::BehaviourStatus__Enum, OnResolveUpdate, (app::SandWormDashBehaviourNew * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x00EC2C10, void, ctor, (app::SandWormDashBehaviourNew * this_ptr))
} // namespace app::classes::Moon::SandWormDashBehaviourNew
