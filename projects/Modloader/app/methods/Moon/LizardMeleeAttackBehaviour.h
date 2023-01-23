#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LizardMeleeAttackBehaviour.h>
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Moon::LizardMeleeAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x01107F30, void, OnEntityInitialized, (app::LizardMeleeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011080A0, app::EffectSpawn, ProvideDamageEffect, (app::LizardMeleeAttackBehaviour * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x01108210, void, OnEnter, (app::LizardMeleeAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01108680, void, OnExit, (app::LizardMeleeAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011087A0, app::BehaviourStatus__Enum, OnExecute, (app::LizardMeleeAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011088A0, void, StartAttackTimeline, (app::LizardMeleeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01108AA0, void, OnAttackBaseTimelineStopEvent, (app::LizardMeleeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717F80, LizardMeleeAttackBehaviour_OnAttackBaseTimelineStopEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01109060, void, OnTimelineSequenceStopEvent, (app::LizardMeleeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011090C0, bool, IsTargetBehind, (app::LizardMeleeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01109190, void, OnTurningMirrorEvent, (app::LizardMeleeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04770FC0, LizardMeleeAttackBehaviour_OnTurningMirrorEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00D20500, void, ProcessIfTargetIsStillInZone, (app::LizardMeleeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471F700, LizardMeleeAttackBehaviour_ProcessIfTargetIsStillInZone__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01109210, void, SetSpeed, (app::LizardMeleeAttackBehaviour * this_ptr, app::Vector2 speed))
    IL2CPP_REGISTER_METHOD(0x01109240, void, Jump, (app::LizardMeleeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047621D8, LizardMeleeAttackBehaviour_Jump__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01109510, bool, IsToNearToLedge, (app::LizardMeleeAttackBehaviour * this_ptr, float direction))
    IL2CPP_REGISTER_METHOD(0x011096A0, void, SpawnAttackVFX, (app::LizardMeleeAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01109B20, void, ctor, (app::LizardMeleeAttackBehaviour * this_ptr))
} // namespace app::classes::Moon::LizardMeleeAttackBehaviour
