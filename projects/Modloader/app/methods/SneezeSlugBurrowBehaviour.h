#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/SneezeSlugBurrowBehaviour_State__Enum.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::SneezeSlugBurrowBehaviour {
    IL2CPP_REGISTER_METHOD(0x00ED5050, bool, IsBlockingInterruption, (app::SneezeSlugBurrowBehaviour * this_ptr, app::EntityDamageEvent* damage_event, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x00ED50B0, void, OnEntityInitialized, (app::SneezeSlugBurrowBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED51F0, void, CacheSerializedComponents, (app::SneezeSlugBurrowBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED5240, void, OnEnter, (app::SneezeSlugBurrowBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00ED5340, app::BehaviourStatus__Enum, OnExecute, (app::SneezeSlugBurrowBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00ED54F0, void, OnExit, (app::SneezeSlugBurrowBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00ED56B0, void, SetState, (app::SneezeSlugBurrowBehaviour * this_ptr, app::SneezeSlugBurrowBehaviour_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x00ED5FB0, void, StartTimeline, (app::SneezeSlugBurrowBehaviour * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop_event))
    IL2CPP_REGISTER_METHOD(0x00ED6010, void, StopCurrentTimeline, (app::SneezeSlugBurrowBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED60F0, void, TeleportToNewSpot, (app::SneezeSlugBurrowBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED6AE0, void, Hide, (app::SneezeSlugBurrowBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED6BF0, void, Show, (app::SneezeSlugBurrowBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED6D00, void, BlastAttack, (app::SneezeSlugBurrowBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047289F0, SneezeSlugBurrowBehaviour_BlastAttack__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ED7080, void, SneezeAttack, (app::SneezeSlugBurrowBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477B6A8, SneezeSlugBurrowBehaviour_SneezeAttack__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ED7CA0, void, ctor, (app::SneezeSlugBurrowBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00ED8280, void, _SetState_b__49_0, (app::SneezeSlugBurrowBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475BEE0, SneezeSlugBurrowBehaviour__SetState_b__49_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00ED8290, void, _SetState_b__49_1, (app::SneezeSlugBurrowBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04741E78, SneezeSlugBurrowBehaviour__SetState_b__49_1__MethodInfo)
} // namespace app::classes::SneezeSlugBurrowBehaviour
