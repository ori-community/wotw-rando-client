#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericDamageTrigger_DamageTriggerSetupData.h>
#include <Modloader/app/structs/GenericDamageTrigger_DamageTriggerSetupHolder.h>
#include <Modloader/app/structs/List_1_IIndexedItem_.h>

namespace app::classes::GenericDamageTrigger_DamageTriggerSetupHolder {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseMapping, app::GenericDamageTrigger_DamageTriggerSetupHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00E07780,
        app::GenericDamageTrigger_DamageTriggerSetupData*,
        get_NewState,
        app::GenericDamageTrigger_DamageTriggerSetupHolder* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x00E07830,
        void,
        CacheSetupStates,
        app::GenericDamageTrigger_DamageTriggerSetupHolder* this_ptr,
        app::List_1_IIndexedItem_* cache_to_populate
    )
    IL2CPP_REGISTER_METHOD(0x00E07910, void, StopTimelines, app::GenericDamageTrigger_DamageTriggerSetupHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00E07A10,
        void,
        Perform,
        app::GenericDamageTrigger_DamageTriggerSetupHolder* this_ptr,
        app::GenericDamageTrigger_DamageTriggerSetupData* state
    )
    IL2CPP_REGISTER_METHOD(0x00E07BD0, void, ctor, app::GenericDamageTrigger_DamageTriggerSetupHolder* this_ptr)
} // namespace app::classes::GenericDamageTrigger_DamageTriggerSetupHolder
