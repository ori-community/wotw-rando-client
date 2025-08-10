#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageBasedPrefabProvider.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::Game::Attacking_DamageEffect {
    IL2CPP_REGISTER_METHOD(0x01521EA0, app::GameObject*, Create, app::Damage* damage, app::Transform* target, app::DamageBasedPrefabProvider* effect_provider)
    IL2CPP_REGISTER_METHOD(
        0x01522100,
        app::GameObject*,
        CreateRotated,
        app::Damage* damage,
        app::Transform* target,
        app::DamageBasedPrefabProvider* effect_provider
    )
} // namespace app::classes::Game::Attacking_DamageEffect
