#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityEvent.h>
#include <Modloader/app/structs/HitReactionBehaviourOld.h>
#include <Modloader/app/structs/StaggerSettings.h>

namespace app::classes::Moon::HitReactionBehaviourOld {
    IL2CPP_REGISTER_METHOD(0x014AB990, void, Awake, app::HitReactionBehaviourOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014ABE60, void, OnReceiveEvent, app::HitReactionBehaviourOld* this_ptr, app::EntityEvent* event_info)
    IL2CPP_REGISTER_METHOD(0x014AC060, bool, PlayHitReaction, app::HitReactionBehaviourOld* this_ptr, app::EntityDamageEvent* damage_event)
    IL2CPP_REGISTER_METHOD(0x014ABD70, void, FixedUpdate, app::HitReactionBehaviourOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014ABDB0, app::StaggerSettings*, GetStaggerSetting, app::HitReactionBehaviourOld* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, app::HitReactionBehaviourOld* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::HitReactionBehaviourOld* this_ptr)
} // namespace app::classes::Moon::HitReactionBehaviourOld
