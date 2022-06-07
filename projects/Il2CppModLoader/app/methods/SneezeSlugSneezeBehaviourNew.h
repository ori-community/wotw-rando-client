#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SneezeSlugSneezeBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x00EE0070, void, Awake, (app::SneezeSlugSneezeBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE00A0, void, CacheSerializedComponents, (app::SneezeSlugSneezeBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE00D0, bool, IsBlockingInterruption, (app::SneezeSlugSneezeBehaviourNew * this_ptr, app::EntityDamageEvent * damage_event, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason))
    IL2CPP_REGISTER_METHOD(0x00EE0100, void, OnEnter, (app::SneezeSlugSneezeBehaviourNew * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00EE04B0, app::BehaviourStatus__Enum, OnExecute, (app::SneezeSlugSneezeBehaviourNew * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00EE04D0, void, OnExit, (app::SneezeSlugSneezeBehaviourNew * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00EE06F0, void, StartTimeline, (app::SneezeSlugSneezeBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE0970, void, OnTimelineSequenceStopEvent, (app::SneezeSlugSneezeBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708C08, SneezeSlugSneezeBehaviourNew_OnTimelineSequenceStopEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EE0B30, void, Flip, (app::SneezeSlugSneezeBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474AB30, SneezeSlugSneezeBehaviourNew_Flip__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EE0C40, void, Shoot, (app::SneezeSlugSneezeBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724098, SneezeSlugSneezeBehaviourNew_Shoot__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EE1C10, bool, IsStandingBackToLedge, (app::SneezeSlugSneezeBehaviourNew * this_ptr, bool is_facing_left, float check_distance, float check_depth))
    IL2CPP_REGISTER_METHOD(0x00EE1ED0, void, ctor, (app::SneezeSlugSneezeBehaviourNew * this_ptr))
}
