#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>
#include <Modloader/app/structs/SpellInventory_c.h>

namespace app::classes::SpellInventory___c {
    IL2CPP_REGISTER_METHOD(0x00942ED0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SpellInventory_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__43_0, app::SpellInventory_c* this_ptr, app::PlayerUberStateInventory_InventoryItem* _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__43_1, app::SpellInventory_c* this_ptr, app::SpellInventory_Binding__Enum _p0_)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__43_2, app::SpellInventory_c* this_ptr)
} // namespace app::classes::SpellInventory___c
