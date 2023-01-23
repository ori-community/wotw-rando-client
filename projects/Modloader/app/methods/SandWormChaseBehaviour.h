#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SandWormChaseBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/SandWormChaseBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>

namespace app::classes::SandWormChaseBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C09740, void, OnEntityInitialized, (app::SandWormChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C09810, void, OnEnter, (app::SandWormChaseBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C09AF0, app::BehaviourStatus__Enum, OnExecute, (app::SandWormChaseBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C09E30, void, OnExit, (app::SandWormChaseBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C09E80, void, ChangeState, (app::SandWormChaseBehaviour * this_ptr, app::SandWormChaseBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00C0A1B0, void, OnSandChaseConditionsCheck, (app::SandWormChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSandChaseEnter, (app::SandWormChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0A760, app::BehaviourStatus__Enum, OnSandChaseUpdate, (app::SandWormChaseBehaviour * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSandChaseExit, (app::SandWormChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0ABC0, void, OnPreJumpConditionsCheck, (app::SandWormChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0AF60, void, OnPreJumpEnter, (app::SandWormChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0AFF0, app::BehaviourStatus__Enum, OnPreJumpUpdate, (app::SandWormChaseBehaviour * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPreJumpExit, (app::SandWormChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0B050, void, OnJumpingConditionsCheck, (app::SandWormChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0B2D0, void, OnJumpingEnter, (app::SandWormChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0AFF0, app::BehaviourStatus__Enum, OnJumpingUpdate, (app::SandWormChaseBehaviour * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x00C0B480, void, OnJumpingExit, (app::SandWormChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0B550, bool, IsHeadTipOutsideZone, (app::SandWormChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0B6B0, bool, PointIsInChaseZone, (app::SandWormChaseBehaviour * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00C0B7C0, bool, ClearanceBetweenPointsCheck, (app::SandWormChaseBehaviour * this_ptr, app::Vector3 point1, app::Vector3 point2))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::SandWormChaseBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C0BB40, void, ctor, (app::SandWormChaseBehaviour * this_ptr))
} // namespace app::classes::SandWormChaseBehaviour
