#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AutoDamageCollider_c.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::AutoDamageCollider___c {
    IL2CPP_REGISTER_METHOD(0x0085C230, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AutoDamageCollider_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085C370, bool, _RemoveNullChildren_b__25_0, (app::AutoDamageCollider_c * this_ptr, app::GameObject* s))
} // namespace app::classes::AutoDamageCollider___c
