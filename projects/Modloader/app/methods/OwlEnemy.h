#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OwlEnemy.h>

namespace app::classes::OwlEnemy {
    IL2CPP_REGISTER_METHOD(0x004435B0, void, StopSpeed, app::OwlEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, app::OwlEnemy* this_ptr)
} // namespace app::classes::OwlEnemy
