#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::BlockDamageInterruptionHandler {
    IL2CPP_REGISTER_METHOD(0x00CBB980, void, ctor, (app::BlockDamageInterruptionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBBB50, void, Reset, (app::BlockDamageInterruptionHandler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CBBBC0, void, CacheSerializedComponents, (app::BlockDamageInterruptionHandler * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00CBBCA0, void, InitializeTimeline, (app::BlockDamageInterruptionHandler * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00CBC140, void, OnDamageBlockingStart, (app::BlockDamageInterruptionHandler * this_ptr, app::DamageWeightMask__Enum damage_weight_mask))
    IL2CPP_REGISTER_METHOD(0x00CBC260, void, OnDamageBlockingEnd, (app::BlockDamageInterruptionHandler * this_ptr, app::DamageWeightMask__Enum damage_weight_mask))
    IL2CPP_REGISTER_METHOD(0x00CBC380, bool, CanBeInterruptedBy, (app::BlockDamageInterruptionHandler * this_ptr, app::DamageWeight__Enum weight))
    IL2CPP_REGISTER_METHOD(0x00CBC3C0, bool, IsBlockingInterruption, (app::BlockDamageInterruptionHandler * this_ptr, app::EntityDamageEvent* damage_event, app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason))
} // namespace app::classes::Moon::BlockDamageInterruptionHandler
