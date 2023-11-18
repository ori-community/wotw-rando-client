#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/DamageBasedPrefabProvider.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::DamageBasedPrefabProvider {
    IL2CPP_REGISTER_METHOD(0x00DC1C80, app::GameObject*, Prefab, (app::DamageBasedPrefabProvider * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00DC1F40, app::GameObject__Array*, GetPotentialPrefabs, (app::DamageBasedPrefabProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DamageBasedPrefabProvider * this_ptr))
} // namespace app::classes::DamageBasedPrefabProvider
