#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ShopkeeperScreen_c.h>

namespace app::classes::ShopkeeperScreen___c {
    IL2CPP_REGISTER_METHOD(0x005C08E0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ShopkeeperScreen_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C0A20, bool, _FocusOnPreviousSelection_b__58_0, app::ShopkeeperScreen_c* this_ptr, app::CleverMenuItem* a)
    IL2CPP_REGISTER_METHOD(0x005C0AE0, int32_t, _PopulateInventoryCanvasWithUpgrades_b__63_0, app::ShopkeeperScreen_c* this_ptr, app::Object* x, app::Object* y)
} // namespace app::classes::ShopkeeperScreen___c
