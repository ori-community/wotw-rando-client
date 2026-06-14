#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/HornBugStunBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::HornBugStunBehaviour {
    IL2CPP_REGISTER_METHOD(0x010FA930, void, OnEntityInitialized, app::HornBugStunBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x010FA9D0,
        bool,
        IsBlockingInterruption,
        app::HornBugStunBehaviour* this_ptr,
        app::EntityDamageEvent* damage_event,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason
    )
    IL2CPP_REGISTER_METHOD(0x010FAA50, void, CacheSerializedComponents, app::HornBugStunBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010FAAD0, void, Awake, app::HornBugStunBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010FAB50, void, OnEnter, app::HornBugStunBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x010FAC40, app::BehaviourStatus__Enum, OnExecute, app::HornBugStunBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x010FAD70, void, OnExit, app::HornBugStunBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x010FAD70, void, Stop, app::HornBugStunBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010FADC0, void, StartRecovery, app::HornBugStunBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010FAF70, void, StartTurnRecovery, app::HornBugStunBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F2F80, void, OnRecoveryEnded, app::HornBugStunBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010FB210, void, StartLoop, app::HornBugStunBehaviour* this_ptr, float duration)
    IL2CPP_REGISTER_METHOD(0x010FB2F0, void, ctor, app::HornBugStunBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010FB5E0, void, _StartTurnRecovery_b__21_0, app::HornBugStunBehaviour* this_ptr)
} // namespace app::classes::Moon::HornBugStunBehaviour
