#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttackableSwitchSetupData.h>
#include <Modloader/app/structs/AttackableSwitchSetupHolder.h>
#include <Modloader/app/structs/List_1_IIndexedItem_.h>

namespace app::classes::AttackableSwitchSetupHolder {
    IL2CPP_REGISTER_METHOD(0x00855D30, app::AttackableSwitchSetupData*, get_DeactivatedState, app::AttackableSwitchSetupHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00855DD0, app::AttackableSwitchSetupData*, get_ActivatedState, app::AttackableSwitchSetupHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00855E70, void, CacheSetupStates, app::AttackableSwitchSetupHolder* this_ptr, app::List_1_IIndexedItem_* cache_to_populate)
    IL2CPP_REGISTER_METHOD(0x00855FA0, void, Perform, app::AttackableSwitchSetupHolder* this_ptr, app::AttackableSwitchSetupData* state)
    IL2CPP_REGISTER_METHOD(0x00856130, void, StopTimelines, app::AttackableSwitchSetupHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008562A0, void, ctor, app::AttackableSwitchSetupHolder* this_ptr)
} // namespace app::classes::AttackableSwitchSetupHolder
