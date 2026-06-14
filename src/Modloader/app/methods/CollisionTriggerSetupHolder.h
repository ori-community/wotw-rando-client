#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CollisionTriggerSetupData.h>
#include <Modloader/app/structs/CollisionTriggerSetupHolder.h>
#include <Modloader/app/structs/List_1_IIndexedItem_.h>

namespace app::classes::CollisionTriggerSetupHolder {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UseMapping, app::CollisionTriggerSetupHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D29E0, app::CollisionTriggerSetupData*, get_NewState, app::CollisionTriggerSetupHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D2A90, void, CacheSetupStates, app::CollisionTriggerSetupHolder* this_ptr, app::List_1_IIndexedItem_* cache_to_populate)
    IL2CPP_REGISTER_METHOD(0x012D2B70, void, StopTimelines, app::CollisionTriggerSetupHolder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012D2C70, void, Perform, app::CollisionTriggerSetupHolder* this_ptr, app::CollisionTriggerSetupData* state)
    IL2CPP_REGISTER_METHOD(0x012D2E30, void, ctor, app::CollisionTriggerSetupHolder* this_ptr)
} // namespace app::classes::CollisionTriggerSetupHolder
