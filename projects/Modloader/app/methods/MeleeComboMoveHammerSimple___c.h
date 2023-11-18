#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MeleeComboMoveHammerSimple_c.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::MeleeComboMoveHammerSimple___c {
    IL2CPP_REGISTER_METHOD(0x0139C020, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MeleeComboMoveHammerSimple_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0139C160, void, _InterruptMove_b__59_0, (app::MeleeComboMoveHammerSimple_c * this_ptr, app::GameObject* effect))
} // namespace app::classes::MeleeComboMoveHammerSimple___c
