#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ColosseumBase.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::ColosseumBase {
    IL2CPP_REGISTER_METHOD(0x011DA7F0, void, Start, (app::ColosseumBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DA850, void, OnCollisionEnter, (app::ColosseumBase * this_ptr, app::Collision* col))
    IL2CPP_REGISTER_METHOD(0x011DAE70, void, ReceiveDamage, (app::ColosseumBase * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x011DAFB0, void, ctor, (app::ColosseumBase * this_ptr))
} // namespace app::classes::ColosseumBase
