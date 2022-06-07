#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WotwUberStateWwiseStateManager {
    IL2CPP_REGISTER_METHOD(0x00590130, void, CopyDataFromMap, (app::WotwUberStateWwiseStateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005904C0, void, GenerateResetState, (app::WotwUberStateWwiseStateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005907F0, void, ResetWwiseStates, (app::WotwUberStateWwiseStateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00590CD0, void, PopulateAffectedStates, (app::WotwUberStateWwiseStateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005918A0, void, UpdateAbilitiesCallback, (app::WotwUberStateWwiseStateManager * this_ptr, app::AbilityType__Enum type, bool has_ability))
    IL2CPP_REGISTER_METHODINFO(0x04706138, WotwUberStateWwiseStateManager_UpdateAbilitiesCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00591BB0, void, UpdateWwiseStates, (app::WotwUberStateWwiseStateManager * this_ptr, app::List_1_System_UInt32_ * states_set_this_update))
    IL2CPP_REGISTER_METHOD(0x00591F10, void, OnDestroy, (app::WotwUberStateWwiseStateManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00592160, void, ctor, (app::WotwUberStateWwiseStateManager * this_ptr))
}
