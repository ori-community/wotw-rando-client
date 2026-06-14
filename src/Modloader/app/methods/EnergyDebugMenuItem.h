#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnergyDebugMenuItem.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::EnergyDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x00C87390, void, ctor, app::EnergyDebugMenuItem* this_ptr, app::String* path, app::String* str)
    IL2CPP_REGISTER_METHOD(0x00C87550, void, OnSelectedFixedUpdate, app::EnergyDebugMenuItem* this_ptr)
} // namespace app::classes::EnergyDebugMenuItem
