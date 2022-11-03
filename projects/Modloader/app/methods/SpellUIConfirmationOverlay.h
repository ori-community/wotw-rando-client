#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpellUIConfirmationOverlay {
    IL2CPP_REGISTER_METHOD(0x003FF8B0, app::SpellUIConfirmationOverlay_Context__Enum, get_CurrentContext, (app::SpellUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00945600, void, FixedUpdate, (app::SpellUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00945800, void, InitializeUpgradeShard, (app::SpellUIConfirmationOverlay * this_ptr, app::PlayerUberStateShards_Shard* shard))
    IL2CPP_REGISTER_METHOD(0x00945C70, void, InitializeAddShardSocket, (app::SpellUIConfirmationOverlay * this_ptr, int32_t xp_cost))
    IL2CPP_REGISTER_METHOD(0x00945DB0, void, InitializeMoveShard, (app::SpellUIConfirmationOverlay * this_ptr, app::PlayerUberStateInventory_InventoryItem* from_spell))
    IL2CPP_REGISTER_METHOD(0x00945E20, void, Clear, (app::SpellUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00945E40, void, Initialize, (app::SpellUIConfirmationOverlay * this_ptr, app::EquipmentType__Enum equipment_type, app::String* title, app::String* description))
    IL2CPP_REGISTER_METHOD(0x00946100, void, SetTitle, (app::SpellUIConfirmationOverlay * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x00946260, void, SetDescription, (app::SpellUIConfirmationOverlay * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (app::SpellUIConfirmationOverlay * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HideImmediate, (app::SpellUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009463C0, void, Show, (app::SpellUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowImmediate, (app::SpellUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00946590, void, ctor, (app::SpellUIConfirmationOverlay * this_ptr))
} // namespace app::classes::SpellUIConfirmationOverlay
