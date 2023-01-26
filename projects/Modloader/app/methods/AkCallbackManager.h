#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/AKRESULT__Enum.h>
#include <Modloader/app/structs/AkCallbackManager_BGMCallback.h>
#include <Modloader/app/structs/AkCallbackManager_InitializationSettings.h>
#include <Modloader/app/structs/AkCallbackManager_MonitoringCallback.h>
#include <Modloader/app/structs/AkMonitorErrorLevel__Enum.h>

namespace app::classes::AkCallbackManager {
    IL2CPP_REGISTER_METHOD(0x026D0330, bool, get_IsLoggingEnabled, ())
    IL2CPP_REGISTER_METHOD(0x026D03D0, void, set_IsLoggingEnabled, (bool value))
    IL2CPP_REGISTER_METHOD(0x026D0480, void, RemoveEventCallback, (uint32_t in_playing_i_d))
    IL2CPP_REGISTER_METHOD(0x026D09A0, void, RemoveEventCallbackCookie, (app::Object * in_cookie))
    IL2CPP_REGISTER_METHOD(0x026D0E40, void, RemoveBankCallback, (app::Object * in_cookie))
    IL2CPP_REGISTER_METHOD(0x026D12E0, void, SetLastAddedPlayingID, (uint32_t in_playing_i_d))
    IL2CPP_REGISTER_METHOD(0x026D1400, app::AKRESULT__Enum, Init, (app::AkCallbackManager_InitializationSettings * settings))
    IL2CPP_REGISTER_METHOD(0x026D16C0, void, Term, ())
    IL2CPP_REGISTER_METHOD(0x026D18D0, void, SetMonitoringCallback, (app::AkMonitorErrorLevel__Enum in__level, app::AkCallbackManager_MonitoringCallback* in__c_b))
    IL2CPP_REGISTER_METHOD(0x026D1A80, void, SetBGMCallback, (app::AkCallbackManager_BGMCallback * in__c_b, app::Object* in_cookie))
    IL2CPP_REGISTER_METHOD(0x026D1C10, int32_t, PostCallbacks, ())
    IL2CPP_REGISTER_METHOD(0x026D2C60, void, cctor, ())
} // namespace app::classes::AkCallbackManager
