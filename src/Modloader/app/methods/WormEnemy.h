#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WormEnemy.h>

namespace app::classes::WormEnemy {
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, app::WormEnemy* this_ptr)
}
