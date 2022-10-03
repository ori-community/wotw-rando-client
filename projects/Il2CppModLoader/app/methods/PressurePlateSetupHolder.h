#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PressurePlateSetupHolder {
    IL2CPP_REGISTER_METHOD(0x00C73190, app::PressurePlateSetupData*, get_NotPressed, (app::PressurePlateSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C73230, app::PressurePlateSetupData*, get_Pressed, (app::PressurePlateSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C732D0, void, CacheSetupStates, (app::PressurePlateSetupHolder * this_ptr, app::List_1_IIndexedItem_* cache_to_populate))
    IL2CPP_REGISTER_METHOD(0x00C73400, void, Perform, (app::PressurePlateSetupHolder * this_ptr, app::PressurePlateSetupData* state))
    IL2CPP_REGISTER_METHOD(0x00C73570, void, Apply, (app::PressurePlateSetupHolder * this_ptr, app::PressurePlateSetupData* setup_data, app::Transform* transform))
    IL2CPP_REGISTER_METHOD(0x00C735E0, void, StopTimelines, (app::PressurePlateSetupHolder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C73750, void, ctor, (app::PressurePlateSetupHolder * this_ptr))
} // namespace app::classes::PressurePlateSetupHolder
