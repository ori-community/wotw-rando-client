#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SlugEnemy.h>

namespace app::classes::SlugEnemy {
    IL2CPP_REGISTER_METHOD(0x006C5A90, float, get_BendValue, app::SlugEnemy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, app::SlugEnemy* this_ptr)
} // namespace app::classes::SlugEnemy
