#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MapmakerScreen_c.h>
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::MapmakerScreen___c {
    IL2CPP_REGISTER_METHOD(0x00A0E150, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MapmakerScreen_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0E290, bool, _FocusOnPreviousSelection_b__55_0, (app::MapmakerScreen_c * this_ptr, app::CleverMenuItem* a))
    IL2CPP_REGISTER_METHOD(0x00A0E350, int32_t, _PopulateInventoryCanvasWithUpgrades_b__59_0, (app::MapmakerScreen_c * this_ptr, app::Object* x, app::Object* y))
} // namespace app::classes::MapmakerScreen___c
