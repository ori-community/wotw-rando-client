#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/MortarWormEnemyProjectileSpawnerTransform.h>

namespace app::classes::MortarWormEnemyProjectileSpawnerTransform {
    IL2CPP_REGISTER_METHOD(0x008639E0, app::Vector3, FindPosition, (app::MortarWormEnemyProjectileSpawnerTransform * this_ptr, app::Vector3 direction))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MortarWormEnemyProjectileSpawnerTransform * this_ptr))
} // namespace app::classes::MortarWormEnemyProjectileSpawnerTransform
