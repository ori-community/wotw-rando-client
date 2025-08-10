#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttackTokens_Request__Boxed.h>
#include <Modloader/app/structs/IAttackTokenHolder.h>

namespace app::classes::AttackTokens_Request {
    IL2CPP_REGISTER_METHOD(0x0011A6A0, void, ctor, app::AttackTokens_Request__Boxed* this_ptr, app::IAttackTokenHolder* holder)
}
