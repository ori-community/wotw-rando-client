#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::LizardJumpOverBehaviour {
    IL2CPP_REGISTER_METHOD(0x01105C70, void, Awake, (app::LizardJumpOverBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01105CA0, void, CacheSerializedComponents, (app::LizardJumpOverBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01105CD0, bool, IsBlockingInterruption, (app::LizardJumpOverBehaviour * this_ptr, app::EntityDamageEvent * damage_event, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason))
    IL2CPP_REGISTER_METHOD(0x01105D00, void, OnEntityInitialized, (app::LizardJumpOverBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01105DB0, void, OnEnter, (app::LizardJumpOverBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011061C0, app::BehaviourStatus__Enum, OnExecute, (app::LizardJumpOverBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01106480, void, OnExit, (app::LizardJumpOverBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01106670, bool, WillJumpBeValid, (app::LizardJumpOverBehaviour * this_ptr, app::Vector3 * landing_point))
    IL2CPP_REGISTER_METHOD(0x01106AF0, void, StartTimeline, (app::LizardJumpOverBehaviour * this_ptr, app::MoonTimeline * timeline, app::Action * on_end))
    IL2CPP_REGISTER_METHOD(0x01106C30, void, DisableDamageDealers, (app::LizardJumpOverBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047908E8, LizardJumpOverBehaviour_DisableDamageDealers__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01106C70, void, ActivateDamageDealers, (app::LizardJumpOverBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0088C860, app::Vector2, GetVector2, (app::LizardJumpOverBehaviour * this_ptr, app::Vector3 vector))
    IL2CPP_REGISTER_METHOD(0x01106CC0, void, ctor, (app::LizardJumpOverBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00754B80, void, _OnExecute_b__22_0, (app::LizardJumpOverBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768D50, LizardJumpOverBehaviour__OnExecute_b__22_0__MethodInfo)
}
