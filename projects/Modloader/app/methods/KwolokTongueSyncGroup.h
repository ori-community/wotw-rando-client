#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KwolokTongueSyncGroup {
    IL2CPP_REGISTER_METHOD(0x00EFB910, void, OnEnable, (app::KwolokTongueSyncGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFB920, void, OnDisable, (app::KwolokTongueSyncGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFB930, void, SubscribeToFrogs, (app::KwolokTongueSyncGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFBD50, void, UnsubscribeToFrogs, (app::KwolokTongueSyncGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFC190, void, FrogTurnOn, (app::KwolokTongueSyncGroup * this_ptr, app::KwolokTongueStatue* frog))
    IL2CPP_REGISTER_METHODINFO(0x047310D8, KwolokTongueSyncGroup_FrogTurnOn__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EFC380, void, FrogTurnOff, (app::KwolokTongueSyncGroup * this_ptr, app::KwolokTongueStatue* frog))
    IL2CPP_REGISTER_METHODINFO(0x04739B48, KwolokTongueSyncGroup_FrogTurnOff__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EFC570, bool, IsFrogInverted, (app::KwolokTongueSyncGroup * this_ptr, app::KwolokTongueStatue* frog))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::KwolokTongueSyncGroup * this_ptr))
} // namespace app::classes::KwolokTongueSyncGroup
