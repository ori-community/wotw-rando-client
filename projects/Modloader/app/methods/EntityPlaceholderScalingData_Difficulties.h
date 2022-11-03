#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::EntityPlaceholderScalingData_Difficulties {
    IL2CPP_REGISTER_METHOD(0x00C9DFE0, app::EntityPlaceholderScalingData_EntityScalingValues*, GetDifficultyMulti, (app::EntityPlaceholderScalingData_Difficulties * this_ptr, int32_t difficulty))
    IL2CPP_REGISTER_METHOD(0x00C9E1E0, void, ctor, (app::EntityPlaceholderScalingData_Difficulties * this_ptr))
} // namespace app::classes::EntityPlaceholderScalingData_Difficulties
