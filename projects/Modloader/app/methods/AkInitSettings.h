#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkInitSettings.h>
#include <Modloader/app/structs/AkFloorPlane__Enum.h>
#include <Modloader/app/structs/AkOutputSettings.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkInitSettings {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkInitSettings * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026E84A0, void*, getCPtr, (app::AkInitSettings * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkInitSettings * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026E8530, void, Finalize, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E85B0, void, Dispose, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E87C0, void, set_uMaxNumPaths, (app::AkInitSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026E88F0, uint32_t, get_uMaxNumPaths, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E8A10, void, set_uDefaultPoolSize, (app::AkInitSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026E8B40, uint32_t, get_uDefaultPoolSize, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E8C60, void, set_fDefaultPoolRatioThreshold, (app::AkInitSettings * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x026E8D90, float, get_fDefaultPoolRatioThreshold, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E8EB0, void, set_uCommandQueueSize, (app::AkInitSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026E8FE0, uint32_t, get_uCommandQueueSize, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E9100, void, set_uPrepareEventMemoryPoolID, (app::AkInitSettings * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x026E9230, int32_t, get_uPrepareEventMemoryPoolID, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E9350, void, set_bEnableGameSyncPreparation, (app::AkInitSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x026E9480, bool, get_bEnableGameSyncPreparation, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E95B0, void, set_uContinuousPlaybackLookAhead, (app::AkInitSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026E96E0, uint32_t, get_uContinuousPlaybackLookAhead, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E9800, void, set_uNumSamplesPerFrame, (app::AkInitSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026E9930, uint32_t, get_uNumSamplesPerFrame, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E9A50, void, set_uMonitorPoolSize, (app::AkInitSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026E9B80, uint32_t, get_uMonitorPoolSize, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E9CA0, void, set_uMonitorQueuePoolSize, (app::AkInitSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026E9DD0, uint32_t, get_uMonitorQueuePoolSize, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E9EF0, void, set_settingsMainOutput, (app::AkInitSettings * this_ptr, app::AkOutputSettings* value))
    IL2CPP_REGISTER_METHOD(0x026EA030, app::AkOutputSettings*, get_settingsMainOutput, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EA240, void, set_uMaxHardwareTimeoutMs, (app::AkInitSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026EA370, uint32_t, get_uMaxHardwareTimeoutMs, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EA490, void, set_bUseSoundBankMgrThread, (app::AkInitSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x026EA5C0, bool, get_bUseSoundBankMgrThread, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EA6F0, void, set_bUseLEngineThread, (app::AkInitSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x026EA820, bool, get_bUseLEngineThread, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EA950, void, set_szPluginDLLPath, (app::AkInitSettings * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x026EAA90, app::String*, get_szPluginDLLPath, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EABE0, void, set_eFloorPlane, (app::AkInitSettings * this_ptr, app::AkFloorPlane__Enum value))
    IL2CPP_REGISTER_METHOD(0x026EAD10, app::AkFloorPlane__Enum, get_eFloorPlane, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EAE30, void, set_fDebugOutOfRangeLimit, (app::AkInitSettings * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x026EAF60, float, get_fDebugOutOfRangeLimit, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EB080, void, set_bDebugOutOfRangeCheckEnabled, (app::AkInitSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x026EB1B0, bool, get_bDebugOutOfRangeCheckEnabled, (app::AkInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026EB2E0, void, ctor_2, (app::AkInitSettings * this_ptr))
} // namespace app::classes::AkInitSettings
