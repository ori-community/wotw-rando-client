#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::HitReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x014AB990, void, Awake, (app::HitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014AB9E0, void, OnReceiveEvent, (app::HitReactionBehaviour * this_ptr, app::EntityEvent* event_info))
    IL2CPP_REGISTER_METHOD(0x014ABBE0, bool, PlayHitReaction, (app::HitReactionBehaviour * this_ptr, app::EntityDamageEvent* damage_event))
    IL2CPP_REGISTER_METHOD(0x014ABD70, void, FixedUpdate, (app::HitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014ABDB0, app::StaggerSettings*, GetStaggerSetting, (app::HitReactionBehaviour * this_ptr, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (app::HitReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HitReactionBehaviour * this_ptr))
} // namespace app::classes::Moon::HitReactionBehaviour
