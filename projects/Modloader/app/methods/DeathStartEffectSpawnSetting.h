#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::DeathStartEffectSpawnSetting {
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, OnEntityInitialized, (app::DeathStartEffectSpawnSetting * this_ptr, app::Entity* entity))
    IL2CPP_REGISTER_METHOD(0x00DDE380, app::Transform*, get_EffectiveLocation, (app::DeathStartEffectSpawnSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DDE450, app::GameObject*, Spawn, (app::DeathStartEffectSpawnSetting * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00DDEC60, void, ctor, (app::DeathStartEffectSpawnSetting * this_ptr))
} // namespace app::classes::DeathStartEffectSpawnSetting
