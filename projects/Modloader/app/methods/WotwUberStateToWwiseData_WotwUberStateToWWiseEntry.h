#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry {
    IL2CPP_REGISTER_METHOD(0x0058F9F0, bool, IsFulfilled, (app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058FF10, bool, IsPlayerAbilityRequirementFulfilled, (app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry * this_ptr, app::AbilityType__Enum type, bool has_ability))
    IL2CPP_REGISTER_METHOD(0x0058FF90, void, AddPlayerAbilityState, (app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry * this_ptr))
} // namespace app::classes::WotwUberStateToWwiseData_WotwUberStateToWWiseEntry
