#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DashableSwitchSetupData.h>
#include <Modloader/app/structs/DashableSwitchSetupHolder.h>
#include <Modloader/app/structs/List_1_IIndexedItem_.h>

namespace app::classes::DashableSwitchSetupHolder {
    IL2CPP_REGISTER_METHOD(0x00DD3140, app::DashableSwitchSetupData*, get_DeactivatedState, (app::DashableSwitchSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD31E0, app::DashableSwitchSetupData*, get_ActivatedState, (app::DashableSwitchSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD3280, bool, get_IsAnyTransitionPlaying, (app::DashableSwitchSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD3420, void, CacheSetupStates, (app::DashableSwitchSetupHolder * this_ptr, app::List_1_IIndexedItem_* cache_to_populate))
    IL2CPP_REGISTER_METHOD(0x00DD3550, void, Perform, (app::DashableSwitchSetupHolder * this_ptr, app::DashableSwitchSetupData* state))
    IL2CPP_REGISTER_METHOD(0x00DD36C0, void, StopTimelines, (app::DashableSwitchSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD3830, void, ctor, (app::DashableSwitchSetupHolder * this_ptr))
} // namespace app::classes::DashableSwitchSetupHolder
