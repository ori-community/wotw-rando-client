#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AreaMapUI.h>
#include <Modloader/app/structs/GameWorldArea_WorldMapIcon.h>
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/RuntimeWorldMapIcon.h>
#include <Modloader/app/structs/WorldMapIconType__Enum.h>

namespace app::classes::RuntimeWorldMapIcon {
    IL2CPP_REGISTER_METHOD(0x00C058E0, void, ctor, app::RuntimeWorldMapIcon* this_ptr, app::GameWorldArea_WorldMapIcon* icon, app::RuntimeGameWorldArea* area)
    IL2CPP_REGISTER_METHOD(0x00C05AD0, bool, IsVisible, app::RuntimeWorldMapIcon* this_ptr, app::AreaMapUI* area_map)
    IL2CPP_REGISTER_METHOD(0x00C05FB0, void, Show, app::RuntimeWorldMapIcon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C06AF0, bool, IsStateOrConditionMet, app::RuntimeWorldMapIcon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C06C20, void, Hide, app::RuntimeWorldMapIcon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C06D20, void, UpdateLabelState, app::RuntimeWorldMapIcon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C07020, bool, IsMapmakerPinPurchased, app::RuntimeWorldMapIcon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C073B0, bool, IsOfDiscoverableType, app::RuntimeWorldMapIcon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C073E0, bool, IsTeleportType, app::RuntimeWorldMapIcon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C073F0, bool, IsNPCType, app::RuntimeWorldMapIcon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C07410, void, SetAttentionMarker, app::RuntimeWorldMapIcon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C07540, bool, CanBeTeleportedTo, app::RuntimeWorldMapIcon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C07660, void, SetIconActiveMode, app::RuntimeWorldMapIcon* this_ptr, bool active)
    IL2CPP_REGISTER_METHOD(0x00C07760, void, SetIconSpecialMode, app::RuntimeWorldMapIcon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C07830, bool, IsIconActive, app::RuntimeWorldMapIcon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C07950, void, SetIcon, app::RuntimeWorldMapIcon* this_ptr, app::WorldMapIconType__Enum icon)
} // namespace app::classes::RuntimeWorldMapIcon
