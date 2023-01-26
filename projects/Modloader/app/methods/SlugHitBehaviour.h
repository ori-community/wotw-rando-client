#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SlugHitBehaviour.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/IBlackboard.h>

namespace app::classes::SlugHitBehaviour {
    IL2CPP_REGISTER_METHOD(0x006C5B70, void, OnInitialize, (app::SlugHitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C5D60, void, OnDestroy, (app::SlugHitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDamageReceived, (app::SlugHitBehaviour * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHOD(0x006C5F30, void, OnExecute, (app::SlugHitBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x006C5F40, void, ActivateDamageDealers, (app::SlugHitBehaviour * this_ptr, bool enable))
    IL2CPP_REGISTER_METHOD(0x005B7700, void, OnAnimationFinished, (app::SlugHitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C5FC0, void, OnEndBehaviour, (app::SlugHitBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetShouldPauseTree, (app::SlugHitBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::SlugHitBehaviour * this_ptr))
} // namespace app::classes::SlugHitBehaviour
