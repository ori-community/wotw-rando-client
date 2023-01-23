#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SlugDamageReciever.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::SlugDamageReciever {
    IL2CPP_REGISTER_METHOD(0x006C5340, void, OnRecieveDamage, (app::SlugDamageReciever * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x006C5370, void, ctor, (app::SlugDamageReciever * this_ptr))
} // namespace app::classes::SlugDamageReciever
