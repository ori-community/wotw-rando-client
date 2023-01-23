#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MeleeComboMoveSwordstaff_c.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::MeleeComboMoveSwordstaff___c {
    IL2CPP_REGISTER_METHOD(0x009C0AA0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MeleeComboMoveSwordstaff_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009C0BE0, void, _InterruptMove_b__74_0, (app::MeleeComboMoveSwordstaff_c * this_ptr, app::GameObject* effect))
    IL2CPP_REGISTER_METHODINFO(0x0470D2C0, MeleeComboMoveSwordstaff_c__InterruptMove_b__74_0__MethodInfo)
} // namespace app::classes::MeleeComboMoveSwordstaff___c
