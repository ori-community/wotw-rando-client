#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerSettingsPerScene.h>

namespace app::classes::PlayerSettingsPerScene {
    IL2CPP_REGISTER_METHOD(
        0x01428A60,
        void,
        Lerp,
        app::PlayerSettingsPerScene* from,
        app::PlayerSettingsPerScene* to,
        app::PlayerSettingsPerScene** destination,
        float curve_value
    )
    IL2CPP_REGISTER_METHOD(0x01428B70, app::PlayerSettingsPerScene*, Clone, app::PlayerSettingsPerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01428CD0, void, Copy, app::PlayerSettingsPerScene* this_ptr, app::PlayerSettingsPerScene* player_settings_per_scene)
    IL2CPP_REGISTER_METHOD(0x01428CD0, void, CopyFrom, app::PlayerSettingsPerScene* this_ptr, app::PlayerSettingsPerScene* settings_player_settings_per_scene)
    IL2CPP_REGISTER_METHOD(0x004FBE40, void, ctor, app::PlayerSettingsPerScene* this_ptr)
} // namespace app::classes::PlayerSettingsPerScene
