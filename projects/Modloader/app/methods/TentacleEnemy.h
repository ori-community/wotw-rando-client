#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TentacleEnemy_Joint.h>
#include <Modloader/app/structs/BehaviourTreeStatus__Enum.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/TentacleEnemy.h>
#include <Modloader/app/structs/TentacleEnemy_WiggleData.h>
#include <Modloader/app/structs/TickData.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>

namespace app::classes::TentacleEnemy {
    IL2CPP_REGISTER_METHOD(0x00CEF030, app::TentacleEnemy_Joint*, get_HeadJoint, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEF0D0, app::GameObject*, get_HeadGameObject, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEF160, app::TentacleEnemy_Joint*, get_NeckJoint, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEF200, app::GameObject*, get_NeckGameObject, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEF310, float, get_CurrentLength, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEF510, app::Vector3, get_HeadOrientation, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEF740, bool, get_CanAttack, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEF770, bool, get_CanSpitAttack, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEF7A0, void, Awake, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CEF940, void, Start, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF0860, void, Update, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF0870, void, UpdateGame, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF11A0, void, UpdateEditor, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF1610, void, FixedUpdate, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF1E20, void, OnHeadColliderEnter, (app::TentacleEnemy * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00CF1E60, void, SetupPhysicalBody, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF2790, void, UpdateHorizontalPull, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF2B20, void, UpdateWiggle, (app::TentacleEnemy * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00CF3310, void, WiggleHead, (app::TentacleEnemy * this_ptr, app::TentacleEnemy_WiggleData* settings))
    IL2CPP_REGISTER_METHOD(0x00CF3900, void, UpdateRecoil, (app::TentacleEnemy * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00CF3990, void, SeekTarget, (app::TentacleEnemy * this_ptr, app::Vector3 target, float force))
    IL2CPP_REGISTER_METHOD(0x00CF3C00, app::BehaviourTreeStatus__Enum, OnReset, (app::TentacleEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHOD(0x00CF3D00, void, MakeSmoothCurve2, (app::TentacleEnemy * this_ptr, app::Vector3__Array* input, app::Vector3__Array** output, int32_t iterations))
    IL2CPP_REGISTER_METHOD(0x00CF41A0, app::Vector3__Array*, MakeSmoothCurve, (app::Vector3__Array * array_to_curve, float smoothness))
    IL2CPP_REGISTER_METHOD(0x00CF47C0, void, OnJointReceiveDamage, (app::TentacleEnemy * this_ptr, app::Damage* damage, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00CF5070, void, OnDeath, (app::TentacleEnemy * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00CF58B0, void, SetLayerRecusive, (app::TentacleEnemy * this_ptr, app::GameObject* gobj, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x00CF5AE0, void, ApplyHeadForce, (app::TentacleEnemy * this_ptr, app::Vector3 force, float diminish_speed))
    IL2CPP_REGISTER_METHOD(0x00CF5D00, void, ApplyRecoil, (app::TentacleEnemy * this_ptr, app::Vector3 force, float diminish_rate, float duration))
    IL2CPP_REGISTER_METHOD(0x00CF5D50, void, OnFreeze, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF5E40, void, OnUnfreeze, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF5F30, void, DisableColliders, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF6060, void, EnableColliders, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF6190, void, EnableHeadColliders, (app::TentacleEnemy * this_ptr, bool enable))
    IL2CPP_REGISTER_METHOD(0x00CF6310, void, EnableBodyColliders, (app::TentacleEnemy * this_ptr, bool enable))
    IL2CPP_REGISTER_METHOD(0x00CF6490, void, OnEnterBash, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF64B0, void, ctor, (app::TentacleEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CF6AB0, bool, _Start_b__81_0, (app::TentacleEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHOD(0x00CF6AE0, bool, _Start_b__81_1, (app::TentacleEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHOD(0x00CF6B20, bool, _Start_b__81_2, (app::TentacleEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHOD(0x00CF6B30, bool, _Start_b__81_3, (app::TentacleEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHOD(0x00CF6B70, bool, _Start_b__81_4, (app::TentacleEnemy * this_ptr, app::TickData t))
    IL2CPP_REGISTER_METHOD(0x00CF6BE0, bool, _Start_b__81_5, (app::TentacleEnemy * this_ptr, app::TickData t))
} // namespace app::classes::TentacleEnemy
