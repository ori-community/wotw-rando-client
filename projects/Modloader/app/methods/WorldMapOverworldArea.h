#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WorldMapOverworldArea {
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::CleverMenuItem*, get_CleverMenu, (app::WorldMapOverworldArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_CleverMenu, (app::WorldMapOverworldArea * this_ptr, app::CleverMenuItem* value))
    IL2CPP_REGISTER_METHOD(0x00583EC0, void, Awake, (app::WorldMapOverworldArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00583FB0, bool, get_IsDiscovered, (app::WorldMapOverworldArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00583FD0, app::Vector3, get_ScrollPosition, (app::WorldMapOverworldArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005840B0, void, OnEnable, (app::WorldMapOverworldArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00584220, void, UpdateBounds, (app::WorldMapOverworldArea * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00584620, bool, ContainsPointUiSpace, (app::WorldMapOverworldArea * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x005846A0, bool, ContainsPointWorldSpace, (app::WorldMapOverworldArea * this_ptr, app::Vector3 world_point))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WorldMapOverworldArea * this_ptr))
} // namespace app::classes::WorldMapOverworldArea
