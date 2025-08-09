#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FishEnemyAnimations.h>

namespace app::classes::FishEnemyAnimations {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::FishEnemyAnimations* this_ptr)
}
