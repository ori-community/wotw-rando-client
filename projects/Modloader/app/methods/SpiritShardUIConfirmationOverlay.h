#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritShardUIConfirmationOverlay_Context__Enum.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpiritShardUIConfirmationOverlay.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SpiritShardUIConfirmationOverlay {
    IL2CPP_REGISTER_METHOD(0x003FF610, app::SpiritShardUIConfirmationOverlay_Context__Enum, get_CurrentContext, (app::SpiritShardUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6B450, void, FixedUpdate, (app::SpiritShardUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6B680, void, InitializeUpgradeShard, (app::SpiritShardUIConfirmationOverlay * this_ptr, app::PlayerUberStateShards_Shard* shard))
    IL2CPP_REGISTER_METHOD(0x00D6B970, void, Clear, (app::SpiritShardUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6B990, void, Initialize, (app::SpiritShardUIConfirmationOverlay * this_ptr, app::EquipmentType__Enum equipment_type, app::String* title, app::String* description))
    IL2CPP_REGISTER_METHOD(0x00D6BC50, void, SetTitle, (app::SpiritShardUIConfirmationOverlay * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x00D6BDB0, void, SetDescription, (app::SpiritShardUIConfirmationOverlay * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (app::SpiritShardUIConfirmationOverlay * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, HideImmediate, (app::SpiritShardUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6BF10, void, Show, (app::SpiritShardUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowImmediate, (app::SpiritShardUIConfirmationOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D6C0E0, void, ctor, (app::SpiritShardUIConfirmationOverlay * this_ptr))
} // namespace app::classes::SpiritShardUIConfirmationOverlay
