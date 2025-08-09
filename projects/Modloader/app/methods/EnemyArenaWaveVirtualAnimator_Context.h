#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnemyArenaController.h>
#include <Modloader/app/structs/EnemyArenaWaveVirtualAnimator_Context__Boxed.h>

namespace app::classes::EnemyArenaWaveVirtualAnimator_Context {
    IL2CPP_REGISTER_METHOD(
        0x0011D2D0,
        void,
        ctor,
        app::EnemyArenaWaveVirtualAnimator_Context__Boxed* this_ptr,
        app::EnemyArenaController* controller,
        int32_t index
    )
}
