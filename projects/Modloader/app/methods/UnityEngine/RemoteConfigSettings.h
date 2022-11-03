#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::RemoteConfigSettings {
    IL2CPP_REGISTER_METHOD(0x031C1E10, void, Finalize, (app::RemoteConfigSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C1EA0, void, Destroy, (app::RemoteConfigSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C1F70, void, Dispose, (app::RemoteConfigSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C2020, void, Internal_Destroy, (void* ptr))
    IL2CPP_REGISTER_METHOD(0x031C2070, void, RemoteConfigSettingsUpdated, (app::RemoteConfigSettings * rcs, bool was_last_updated_from_server))
} // namespace app::classes::UnityEngine::RemoteConfigSettings
