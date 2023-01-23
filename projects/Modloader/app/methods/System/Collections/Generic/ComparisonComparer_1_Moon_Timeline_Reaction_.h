#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ComparisonComparer_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/Comparison_1_Moon_Timeline_Reaction_.h>
#include <Modloader/app/structs/Reaction.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_Timeline_Reaction_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_Moon_Timeline_Reaction_ * this_ptr, app::Comparison_1_Moon_Timeline_Reaction_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A210, int32_t, Compare, (app::ComparisonComparer_1_Moon_Timeline_Reaction_ * this_ptr, app::Reaction x, app::Reaction y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_Moon_Timeline_Reaction_
