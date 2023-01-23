#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpiritLeashEffect.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/IAttackable.h>

namespace app::classes::SpiritLeashEffect {
    IL2CPP_REGISTER_METHOD(0x00D5BCE0, void, Awake, (app::SpiritLeashEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5BD70, void, Update, (app::SpiritLeashEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5BEA0, void, UpdateLeashEffect, (app::SpiritLeashEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5C420, void, UpdateTargetCircleEffect, (app::SpiritLeashEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5C780, void, SetTarget, (app::SpiritLeashEffect * this_ptr, app::SeinCharacter* sein, app::IAttackable* target, float effect_duration))
    IL2CPP_REGISTER_METHOD(0x00D5C820, void, ctor, (app::SpiritLeashEffect * this_ptr))
} // namespace app::classes::SpiritLeashEffect
