#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpellUIItem {
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::PlayerUberStateInventory_InventoryItem*, get_Spell, (app::SpellUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094D730, void, Awake, (app::SpellUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094D760, void, SetItemContext, (app::SpellUIItem * this_ptr, app::Object* context, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x0094D860, void, OnItemContextDirty, (app::SpellUIItem * this_ptr, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x0094D870, void, SetSpell, (app::SpellUIItem * this_ptr, app::PlayerUberStateInventory_InventoryItem* spell))
    IL2CPP_REGISTER_METHOD(0x0094D8C0, void, UpdateSpellIcon, (app::SpellUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094DAD0, void, UpdateSpellProperties, (app::SpellUIItem * this_ptr, bool initialize))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpellUIItem * this_ptr))
} // namespace app::classes::SpellUIItem
