#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpellUISpellDetails {
    IL2CPP_REGISTER_METHOD(0x009512C0, void, Awake, (app::SpellUISpellDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00951610, void, OnNewItemHighlighted, (app::SpellUISpellDetails * this_ptr, bool first_after_populating))
    IL2CPP_REGISTER_METHODINFO(0x04742C68, SpellUISpellDetails_OnNewItemHighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009516D0, void, Show, (app::SpellUISpellDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (app::SpellUISpellDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009517A0, void, OnItemActivatedCallback, (app::SpellUISpellDetails * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754010, SpellUISpellDetails_OnItemActivatedCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00951910, void, DoAddSocket, (app::SpellUISpellDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009519A0, void, SetItem, (app::SpellUISpellDetails * this_ptr, app::PlayerUberStateInventory_InventoryItem* item))
    IL2CPP_REGISTER_METHOD(0x00951AB0, void, UpdateContext, (app::SpellUISpellDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00951F20, void, ctor, (app::SpellUISpellDetails * this_ptr))
} // namespace app::classes::SpellUISpellDetails
