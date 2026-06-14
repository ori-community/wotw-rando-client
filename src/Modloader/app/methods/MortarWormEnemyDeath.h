#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/MortarWormEnemyDeath.h>

namespace app::classes::MortarWormEnemyDeath {
    IL2CPP_REGISTER_METHOD(0x00863360, app::IEnumerator*, Start, app::MortarWormEnemyDeath* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::MortarWormEnemyDeath* this_ptr)
} // namespace app::classes::MortarWormEnemyDeath
