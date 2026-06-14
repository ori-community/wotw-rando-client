#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeathWispsManager.h>
#include <Modloader/app/structs/SeinDeathsManager.h>

namespace app::classes::DeathWispsManager {
    IL2CPP_REGISTER_METHOD(0x00DDFBB0, app::SeinDeathsManager*, get_DeathsManager, app::DeathWispsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDFC30, void, Awake, app::DeathWispsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDFDD0, void, OnDestroy, app::DeathWispsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDFF70, void, OnGameReset, app::DeathWispsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDFF80, void, Refresh, )
    IL2CPP_REGISTER_METHOD(0x00DE0060, void, FixedUpdate, app::DeathWispsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DE02B0, void, UpdateWisps, app::DeathWispsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DE0950, void, ctor, app::DeathWispsManager* this_ptr)
} // namespace app::classes::DeathWispsManager
