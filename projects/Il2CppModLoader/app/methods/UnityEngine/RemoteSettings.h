#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::RemoteSettings {
    IL2CPP_REGISTER_METHOD(0x031C2120, void, RemoteSettingsUpdated, (bool was_last_updated_from_server))
    IL2CPP_REGISTER_METHOD(0x031C21B0, void, RemoteSettingsBeforeFetchFromServer, ())
    IL2CPP_REGISTER_METHOD(0x031C2240, void, RemoteSettingsUpdateCompleted, (bool was_last_updated_from_server, bool settings_changed, int32_t response))
} // namespace app::classes::UnityEngine::RemoteSettings
