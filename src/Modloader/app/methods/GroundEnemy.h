#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroundEnemy.h>

namespace app::classes::GroundEnemy {
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, app::GroundEnemy* this_ptr)
}
