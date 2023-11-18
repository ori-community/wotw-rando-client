#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShootProjectileBehaviourNew.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ShootProjectileBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x005B8000, bool, IsBlockingInterruption, (app::ShootProjectileBehaviourNew * this_ptr, app::EntityDamageEvent* damage_event, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
    IL2CPP_REGISTER_METHOD(0x005B8080, void, CacheSerializedComponents, (app::ShootProjectileBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B80D0, void, OnEntityInitialized, (app::ShootProjectileBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B81F0, void, OnEnter, (app::ShootProjectileBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005B8560, app::BehaviourStatus__Enum, OnExecute, (app::ShootProjectileBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005B8580, void, OnExit, (app::ShootProjectileBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005B8890, void, ShootProjectile, (app::ShootProjectileBehaviourNew * this_ptr, float angle))
    IL2CPP_REGISTER_METHOD(0x005B8DB0, void, Shoot, (app::ShootProjectileBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B90C0, void, ShootingFinished, (app::ShootProjectileBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B90D0, void, OnDrawGizmosSelected, (app::ShootProjectileBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B9380, void, ctor, (app::ShootProjectileBehaviourNew * this_ptr))
} // namespace app::classes::ShootProjectileBehaviourNew
