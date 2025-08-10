#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear__Boxed.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SeinSpiritSpearSpell_FlyingSpear {
    IL2CPP_REGISTER_METHOD(0x0011C410, app::Vector3, get_Direction, app::SeinSpiritSpearSpell_FlyingSpear__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0011C440,
        void,
        ctor,
        app::SeinSpiritSpearSpell_FlyingSpear__Boxed* this_ptr,
        app::Transform* spear_transform,
        app::Vector3 target,
        float duration,
        app::IAttackable* attackable
    )
    IL2CPP_REGISTER_METHOD(0x0011C480, void, Step, app::SeinSpiritSpearSpell_FlyingSpear__Boxed* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0011C490, bool, get_IsDone, app::SeinSpiritSpearSpell_FlyingSpear__Boxed* this_ptr)
} // namespace app::classes::SeinSpiritSpearSpell_FlyingSpear
