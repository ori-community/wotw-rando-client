#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageTextSpawner.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::DamageTextSpawner {
    IL2CPP_REGISTER_METHOD(0x00DCA5F0, void, SpawnDamageText, (app::DamageTextSpawner * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DamageTextSpawner * this_ptr))
} // namespace app::classes::DamageTextSpawner
