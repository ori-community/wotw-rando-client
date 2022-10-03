#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpellUIShardListOverlay {
    IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsSuspended, (app::SpellUIShardListOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_IsSuspended, (app::SpellUIShardListOverlay * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x005065F0, app::SuspendableMask__Enum, get_Mask, (app::SpellUIShardListOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094FCF0, void, set_Mask, (app::SpellUIShardListOverlay * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0094FDB0, void, Awake, (app::SpellUIShardListOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::SpellUIShardListOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009502A0, void, OnItemActivatedCallback, (app::SpellUIShardListOverlay * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047447C8, SpellUIShardListOverlay_OnItemActivatedCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009503C0, void, OnNewItemHighlighted, (app::SpellUIShardListOverlay * this_ptr, bool first_after_populating))
    IL2CPP_REGISTER_METHODINFO(0x0473FA68, SpellUIShardListOverlay_OnNewItemHighlighted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009503D0, void, SetCompatibleEquipment, (app::SpellUIShardListOverlay * this_ptr, app::EquipmentType__Enum compatible_equipment))
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, SetInitiallySelectedItem, (app::SpellUIShardListOverlay * this_ptr, app::PlayerUberStateShards_Shard* item))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (app::SpellUIShardListOverlay * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x009503F0, void, HideImmediate, (app::SpellUIShardListOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00950430, void, Show, (app::SpellUIShardListOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00950610, void, ShowImmediate, (app::SpellUIShardListOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00950680, void, FixedUpdate, (app::SpellUIShardListOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009507B0, void, UpdateShardContext, (app::SpellUIShardListOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009509A0, void, PopulateAllShardsCanvas, (app::SpellUIShardListOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00950D80, void, ctor, (app::SpellUIShardListOverlay * this_ptr))
} // namespace app::classes::SpellUIShardListOverlay
