#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DoorSetupHolder {
    IL2CPP_REGISTER_METHOD(0x00BDB0E0, app::DoorSetupData *, get_ClosedState, (app::DoorSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDB180, app::DoorSetupData *, get_OpenedState, (app::DoorSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDB220, void, CacheSetupStates, (app::DoorSetupHolder * this_ptr, app::List_1_IIndexedItem_ * cache_to_populate))
    IL2CPP_REGISTER_METHOD(0x00BDB350, void, Apply, (app::DoorSetupHolder * this_ptr, app::DoorSetupData * setup_data, app::Transform * door_transform, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00BDB420, void, Perform, (app::DoorSetupHolder * this_ptr, app::DoorSetupData * state))
    IL2CPP_REGISTER_METHOD(0x00BDB510, void, StopTimelines, (app::DoorSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BDB680, void, ctor, (app::DoorSetupHolder * this_ptr))
}
