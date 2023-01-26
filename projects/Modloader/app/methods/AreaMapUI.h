#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/AreaMapCanvas.h>
#include <Modloader/app/structs/AreaMapDebugNavigation.h>
#include <Modloader/app/structs/AreaMapIconFilter__Enum.h>
#include <Modloader/app/structs/AreaMapIconManager.h>
#include <Modloader/app/structs/AreaMapNavigation.h>
#include <Modloader/app/structs/AreaMapUI.h>
#include <Modloader/app/structs/GameWorldArea.h>
#include <Modloader/app/structs/IconPlacementScaler.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::AreaMapUI {
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::GameObject*, get_PlayerPositionMarker, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCF0, void, set_PlayerPositionMarker, (app::AreaMapUI * this_ptr, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::GameObject*, get_SoulFlamePositionMarker, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_SoulFlamePositionMarker, (app::AreaMapUI * this_ptr, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::AreaMapDebugNavigation*, get_DebugNavigation, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD30, void, set_DebugNavigation, (app::AreaMapUI * this_ptr, app::AreaMapDebugNavigation* value))
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::AreaMapNavigation*, get_Navigation, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD50, void, set_Navigation, (app::AreaMapUI * this_ptr, app::AreaMapNavigation* value))
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::AreaMapIconManager*, get_IconManager, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_IconManager, (app::AreaMapUI * this_ptr, app::AreaMapIconManager* value))
    IL2CPP_REGISTER_METHOD(0x00660430, app::IconPlacementScaler*, get_IconScaler, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660440, void, set_IconScaler, (app::AreaMapUI * this_ptr, app::IconPlacementScaler* value))
    IL2CPP_REGISTER_METHOD(0x0083AEA0, app::AreaMapIconFilter__Enum, get_IconFilter, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083AEC0, void, set_IconFilter, (app::AreaMapUI * this_ptr, app::AreaMapIconFilter__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Transform*, get_FadeOutGroup, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083B000, void, Hide, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083B2A0, void, Show, (app::AreaMapUI * this_ptr, bool set_menu_audio_state))
    IL2CPP_REGISTER_METHOD(0x0083B440, void, AllowResetMaps, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083B450, void, ResetImmediatelyNextTime, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083B460, void, ResetMaps, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083B720, void, Awake, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083B7F0, void, OnDestroy, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083B8B0, app::AreaMapCanvas*, FindCanvas, (app::AreaMapUI * this_ptr, app::GameWorldArea* area))
    IL2CPP_REGISTER_METHOD(0x0083BAF0, void, Init, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083C080, void, UpdateTrail, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083C9D0, void, PlaceDot, (app::AreaMapUI * this_ptr, int32_t dot_index, int32_t time_since_creation, app::Vector2 point))
    IL2CPP_REGISTER_METHOD(0x0083CF30, void, FixedUpdate, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083D580, void, LateUpdate, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083D6C0, void, UpdateCurrentArea, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083D9D0, app::Vector3, get_PlayerMarkerWorldPosition, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083DC60, app::Vector3, get_SoulFlameMarkerWorldPosition, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083DE90, void, UpdateAllIconPositions, (app::AreaMapUI * this_ptr, bool force_update))
    IL2CPP_REGISTER_METHOD(0x0083DF30, void, UpdatePlayerPositionMarker, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083E210, void, UpdateSoulFlamePositionMarker, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083E520, void, CycleFilter, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083E560, app::MessageProvider*, GetFilterMessage, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083E5E0, void, OnIconFilterChange, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083E700, void, AddIcon, (app::AreaMapUI * this_ptr, app::GameObject* icon, app::Vector3 location, bool convert, bool is_teleportable))
    IL2CPP_REGISTER_METHOD(0x0083E8A0, bool, get_IsSuspended, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083E8B0, void, set_IsSuspended, (app::AreaMapUI * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0083E8C0, app::SuspendableMask__Enum, get_Mask, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083E8D0, void, set_Mask, (app::AreaMapUI * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0083E990, void, OnPostTimeSlicedEnable, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083EA60, void, OnInstantiate, (app::AreaMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083EDB0, void, ctor, (app::AreaMapUI * this_ptr))
} // namespace app::classes::AreaMapUI
