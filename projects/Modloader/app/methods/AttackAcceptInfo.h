#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttackAcceptInfo.h>

namespace app::classes::AttackAcceptInfo {
    IL2CPP_REGISTER_METHOD(0x00852AD0, void, ctor, app::AttackAcceptInfo* this_ptr, bool can_attack)
}
