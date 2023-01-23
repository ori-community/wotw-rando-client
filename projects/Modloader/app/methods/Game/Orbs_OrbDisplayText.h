#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ExpText.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Game::Orbs_OrbDisplayText {
    IL2CPP_REGISTER_METHOD(0x015267E0, app::GameObject*, get_OrbText, ())
    IL2CPP_REGISTER_METHOD(0x01526870, void, LoadOrbText, ())
    IL2CPP_REGISTER_METHOD(0x015269A0, app::ExpText*, Create, (app::Transform * target, app::Vector3 offset, int32_t value))
} // namespace app::classes::Game::Orbs_OrbDisplayText
