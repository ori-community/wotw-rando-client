#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_PlayerInputRebinding_PlayerInputKey_.h>
#include <Modloader/app/structs/PlayerInputRebinding_KeyBindingSettings.h>

namespace app::classes::PlayerInputRebinding_KeyBindingSettings {
    IL2CPP_REGISTER_METHOD(
        0x01426320,
        app::IEnumerable_1_PlayerInputRebinding_PlayerInputKey_*,
        GetKeysIterator,
        app::PlayerInputRebinding_KeyBindingSettings* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x014264B0, void, ctor, app::PlayerInputRebinding_KeyBindingSettings* this_ptr)
} // namespace app::classes::PlayerInputRebinding_KeyBindingSettings
