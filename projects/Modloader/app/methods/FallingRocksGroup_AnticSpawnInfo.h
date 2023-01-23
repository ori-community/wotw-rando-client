#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FallingRocksGroup_AnticSpawnInfo.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::FallingRocksGroup_AnticSpawnInfo {
    IL2CPP_REGISTER_METHOD(0x0099A9B0, void, ctor, (app::FallingRocksGroup_AnticSpawnInfo * this_ptr, app::GameObject* owner, app::GameObject* prefab, float countdown, app::Vector3 spawn_pos, app::Quaternion spawn_rot))
}
