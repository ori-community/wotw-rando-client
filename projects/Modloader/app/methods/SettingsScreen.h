#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingsScreen.h>

namespace app::classes::SettingsScreen {
    IL2CPP_REGISTER_METHOD(0x005A5280, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x005A5300, void, Awake, (app::SettingsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A5400, void, OnDestroy, (app::SettingsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A54E0, void, FixedUpdate, (app::SettingsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::SettingsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A56C0, void, OnDisable, (app::SettingsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A56D0, void, FlushSettings, (app::SettingsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A5890, void, SetDirty, (app::SettingsScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SettingsScreen * this_ptr))
} // namespace app::classes::SettingsScreen
