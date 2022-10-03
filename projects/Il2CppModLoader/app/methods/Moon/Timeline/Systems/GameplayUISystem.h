#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::Systems::GameplayUISystem {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UpdateType__Enum, get_UpdateType, (app::GameplayUISystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D08B10, bool, get_DefaultState, (app::GameplayUISystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D08BB0, bool, get_ShowUI, (app::GameplayUISystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DisableAutomaticHidingTime, (app::GameplayUISystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_DisableAutomaticHidingTime, (app::GameplayUISystem * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00D08C70, void, IncreaseReferenceCount, (app::GameplayUISystem * this_ptr, bool enable))
    IL2CPP_REGISTER_METHOD(0x00D08C80, void, OnUpdate, (app::GameplayUISystem * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00D09190, void, ResetCouters, (app::GameplayUISystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D091A0, void, ctor, (app::GameplayUISystem * this_ptr))
} // namespace app::classes::Moon::Timeline::Systems::GameplayUISystem
