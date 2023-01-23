#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkPlatformInitSettings.h>
#include <Modloader/app/structs/AkThreadProperties.h>
#include <Modloader/app/structs/AkAudioAPI__Enum.h>

namespace app::classes::AkPlatformInitSettings {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkPlatformInitSettings * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x01888810, void*, getCPtr, (app::AkPlatformInitSettings * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkPlatformInitSettings * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x018888A0, void, Finalize, (app::AkPlatformInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01888920, void, Dispose, (app::AkPlatformInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01888B30, void, set_threadLEngine, (app::AkPlatformInitSettings * this_ptr, app::AkThreadProperties* value))
    IL2CPP_REGISTER_METHOD(0x01888C70, app::AkThreadProperties*, get_threadLEngine, (app::AkPlatformInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01888E80, void, set_threadOutputMgr, (app::AkPlatformInitSettings * this_ptr, app::AkThreadProperties* value))
    IL2CPP_REGISTER_METHOD(0x01888FC0, app::AkThreadProperties*, get_threadOutputMgr, (app::AkPlatformInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018891D0, void, set_threadBankManager, (app::AkPlatformInitSettings * this_ptr, app::AkThreadProperties* value))
    IL2CPP_REGISTER_METHOD(0x01889310, app::AkThreadProperties*, get_threadBankManager, (app::AkPlatformInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01889520, void, set_threadMonitor, (app::AkPlatformInitSettings * this_ptr, app::AkThreadProperties* value))
    IL2CPP_REGISTER_METHOD(0x01889660, app::AkThreadProperties*, get_threadMonitor, (app::AkPlatformInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01889870, void, set_uLEngineDefaultPoolSize, (app::AkPlatformInitSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x018899A0, uint32_t, get_uLEngineDefaultPoolSize, (app::AkPlatformInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01889AC0, void, set_fLEngineDefaultPoolRatioThreshold, (app::AkPlatformInitSettings * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01889BF0, float, get_fLEngineDefaultPoolRatioThreshold, (app::AkPlatformInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01889D10, void, set_uNumRefillsInVoice, (app::AkPlatformInitSettings * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x01889E40, uint16_t, get_uNumRefillsInVoice, (app::AkPlatformInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01889F60, void, set_uSampleRate, (app::AkPlatformInitSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x0188A090, uint32_t, get_uSampleRate, (app::AkPlatformInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188A1B0, void, set_eAudioAPI, (app::AkPlatformInitSettings * this_ptr, app::AkAudioAPI__Enum value))
    IL2CPP_REGISTER_METHOD(0x0188A2E0, app::AkAudioAPI__Enum, get_eAudioAPI, (app::AkPlatformInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188A400, void, set_bGlobalFocus, (app::AkPlatformInitSettings * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0188A530, bool, get_bGlobalFocus, (app::AkPlatformInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0188A660, void, ctor_2, (app::AkPlatformInitSettings * this_ptr))
} // namespace app::classes::AkPlatformInitSettings
