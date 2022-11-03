#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KeystoneDoorSlot {
    IL2CPP_REGISTER_METHOD(0x00E70200, app::Color, get_ColorValue, (app::KeystoneDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E702D0, void, Awake, (app::KeystoneDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E70400, void, FixedUpdate, (app::KeystoneDoorSlot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E706A0, void, ctor, (app::KeystoneDoorSlot * this_ptr))
} // namespace app::classes::KeystoneDoorSlot
