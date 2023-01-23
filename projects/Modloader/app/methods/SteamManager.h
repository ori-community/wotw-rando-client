#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SteamManager.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::SteamManager {
    IL2CPP_REGISTER_METHOD(0x009BF2B0, app::SteamManager*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x009BF470, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x009BF550, bool, get_Initialized, ())
    IL2CPP_REGISTER_METHOD(0x009BF570, void, SteamAPIDebugTextHook, (int32_t n_severity, app::StringBuilder* pch_debug_text))
    IL2CPP_REGISTER_METHOD(0x009BF610, void, Awake, (app::SteamManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478ABE0, SteamManager_Awake__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009BFA30, void, OnEnable, (app::SteamManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009BFB00, void, OnDestroy, (app::SteamManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009BFBE0, void, Update, (app::SteamManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SteamManager * this_ptr))
} // namespace app::classes::SteamManager
