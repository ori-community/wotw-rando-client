#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MinerPunchAttack.h>

namespace app::classes::MinerPunchAttack {
    IL2CPP_REGISTER_METHOD(0x00420FE0, void, ctor, app::MinerPunchAttack* this_ptr)
}
