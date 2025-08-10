#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpawnWormsAttack.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::SpawnWormsAttack {
    IL2CPP_REGISTER_METHOD(0x00EF6860, void, Start, app::SpawnWormsAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::SpawnWormsAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EF6A10, void, SpawnAttack, app::SpawnWormsAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EF6B40, void, LaunchBabyWayerWorm, app::SpawnWormsAttack* this_ptr, app::Transform* spawn_point_transform)
    IL2CPP_REGISTER_METHOD(0x00EF6E40, void, ctor, app::SpawnWormsAttack* this_ptr)
} // namespace app::classes::SpawnWormsAttack
