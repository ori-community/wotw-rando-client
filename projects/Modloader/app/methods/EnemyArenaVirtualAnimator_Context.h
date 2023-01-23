#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnemyArenaVirtualAnimator_Context__Boxed.h>
#include <Modloader/app/structs/EnemyArenaController.h>

namespace app::classes::EnemyArenaVirtualAnimator_Context {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::EnemyArenaVirtualAnimator_Context__Boxed * this_ptr, app::EnemyArenaController* controller))
}
