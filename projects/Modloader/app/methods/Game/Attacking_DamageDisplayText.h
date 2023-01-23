#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/DamageText.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::Game::Attacking_DamageDisplayText {
    IL2CPP_REGISTER_METHOD(0x01521900, app::GameObject*, get_DamageText, ())
    IL2CPP_REGISTER_METHOD(0x01521990, void, LoadDamageText, ())
    IL2CPP_REGISTER_METHOD(0x01521AC0, app::DamageText*, Create, (app::Damage * damage, app::Transform* target, bool is_player_damage))
} // namespace app::classes::Game::Attacking_DamageDisplayText
