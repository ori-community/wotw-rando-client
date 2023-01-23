#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LeverSetupData.h>
#include <Modloader/app/structs/LeverSetupHolder.h>
#include <Modloader/app/structs/List_1_IIndexedItem_.h>

namespace app::classes::LeverSetupHolder {
    IL2CPP_REGISTER_METHOD(0x01137C50, app::LeverSetupData*, get_LeftState, (app::LeverSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01137CF0, app::LeverSetupData*, get_RightState, (app::LeverSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01137D90, void, CacheSetupStates, (app::LeverSetupHolder * this_ptr, app::List_1_IIndexedItem_* cache_to_populate))
    IL2CPP_REGISTER_METHOD(0x01137EC0, void, Perform, (app::LeverSetupHolder * this_ptr, app::LeverSetupData* state))
    IL2CPP_REGISTER_METHOD(0x01138010, void, ctor, (app::LeverSetupHolder * this_ptr))
} // namespace app::classes::LeverSetupHolder
