#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Game::PoleSetupHolder {
    IL2CPP_REGISTER_METHOD(0x01526DD0, app::PoleSetupData*, get_ReleasedState, (app::PoleSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01526E70, app::PoleSetupData*, get_PulledState, (app::PoleSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01526F10, void, CacheSetupStates, (app::PoleSetupHolder * this_ptr, app::List_1_IIndexedItem_* cache_to_populate))
    IL2CPP_REGISTER_METHOD(0x01527040, void, Perform, (app::PoleSetupHolder * this_ptr, app::PoleSetupData* state))
    IL2CPP_REGISTER_METHOD(0x015271B0, void, StopTimelines, (app::PoleSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01527320, void, ctor, (app::PoleSetupHolder * this_ptr))
} // namespace app::classes::Game::PoleSetupHolder
