#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::CharacterInteractables {
    IL2CPP_REGISTER_METHOD(0x00CC3EE0, void, Register, (app::ICharacterInteractable * interactable))
    IL2CPP_REGISTER_METHOD(0x00CC3FA0, void, Unregister, (app::ICharacterInteractable * interactable))
    IL2CPP_REGISTER_METHOD(0x00CC4060, void, cctor, ())
} // namespace app::classes::Moon::CharacterInteractables
