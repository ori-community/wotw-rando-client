#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/uber_state.h>
#include <Modloader/app/methods/PetrifiedOwlBossEntity.h>
#include <Modloader/interception_macros.h>

#include <Modloader/modloader.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>

namespace {
    using namespace app::classes;

    auto& keep_health_bar_state = randomizer::uber_states::state<"randoConfig", "keepShriekHealthBarDuringEscape">();

    IL2CPP_INTERCEPT(bool, PetrifiedOwlBossEntity, ShouldShowHealthBar, app::PetrifiedOwlBossEntity* this_ptr) {
        if (!keep_health_bar_state.get()) {
            return next::PetrifiedOwlBossEntity::ShouldShowHealthBar(this_ptr);
        }

        if (this_ptr->fields._._.VitalState != app::Entity_EntityVitalState__Enum::Alive) {
            return false;
        }

        // m_shouldIncrementState is true when you actually cannot deal damage to Shriek
        return !this_ptr->fields.m_shouldIncrementState;
    }
} // namespace
