#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinAttack.h>

namespace app::classes::SeinAttack {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SeinAttack * this_ptr))
}
