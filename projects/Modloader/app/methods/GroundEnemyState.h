#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GroundEnemy.h>
#include <Modloader/app/structs/GroundEnemyState.h>

namespace app::classes::GroundEnemyState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::GroundEnemyState* this_ptr, app::GroundEnemy* enemy)
    IL2CPP_REGISTER_METHOD(0x0058F9C0, float, get_CurrentStateTime, app::GroundEnemyState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, app::GroundEnemyState* this_ptr)
} // namespace app::classes::GroundEnemyState
