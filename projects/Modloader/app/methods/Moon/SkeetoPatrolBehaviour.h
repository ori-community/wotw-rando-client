#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SkeetoPatrolBehaviour.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::SkeetoPatrolBehaviour {
    IL2CPP_REGISTER_METHOD(0x00E2CF70, void, OnEntityInitialized, (app::SkeetoPatrolBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E2D0D0, bool, IsPatrolPointValid, (app::SkeetoPatrolBehaviour * this_ptr, app::Vector3 target_position))
    IL2CPP_REGISTER_METHOD(0x00E2D470, void, ctor, (app::SkeetoPatrolBehaviour * this_ptr))
} // namespace app::classes::Moon::SkeetoPatrolBehaviour
