#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GroundEnemy3DState.h>
#include <Modloader/app/structs/GroundEnemy3D.h>

namespace app::classes::GroundEnemy3DState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::GroundEnemy3DState * this_ptr, app::GroundEnemy3D* enemy3_d))
    IL2CPP_REGISTER_METHOD(0x0058F9C0, float, get_CurrentStateTime, (app::GroundEnemy3DState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::GroundEnemy3DState * this_ptr))
} // namespace app::classes::GroundEnemy3DState
