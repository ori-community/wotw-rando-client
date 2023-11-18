#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_EntityReactions_ReactionInterruptionSuspensionEntry_.h>
#include <Modloader/app/structs/Comparison_1_EntityReactions_ReactionInterruptionSuspensionEntry_.h>
#include <Modloader/app/structs/EntityReactions_ReactionInterruptionSuspensionEntry.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_EntityReactions_ReactionInterruptionSuspensionEntry_ {
    IL2CPP_REGISTER_METHOD(0x0162A010, void, ctor, (app::ComparisonComparer_1_EntityReactions_ReactionInterruptionSuspensionEntry_ * this_ptr, app::Comparison_1_EntityReactions_ReactionInterruptionSuspensionEntry_* comparison))
    IL2CPP_REGISTER_METHOD(0x0162A050, int32_t, Compare, (app::ComparisonComparer_1_EntityReactions_ReactionInterruptionSuspensionEntry_ * this_ptr, app::EntityReactions_ReactionInterruptionSuspensionEntry x, app::EntityReactions_ReactionInterruptionSuspensionEntry y))
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_EntityReactions_ReactionInterruptionSuspensionEntry_
