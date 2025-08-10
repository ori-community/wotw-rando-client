#include <Randomizer/constants.h>

#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/MeleeComboMoveHammerStomp.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>

using namespace modloader;
using namespace modloader::win::console;

namespace {
    core::api::uber_states::UberState stomp_into_water_state(UberStateGroup::RandoConfig, STOMP_INTO_WATER_ID);

    IL2CPP_INTERCEPT(void, MeleeComboMoveHammerStomp, OnHitWater, app::MeleeComboMoveHammerStomp * this_ptr) {
        auto should_extend_stomp =
            this_ptr->fields.m_currentState == app::MeleeComboMoveHammerStomp_State__Enum::Fall &&
            stomp_into_water_state.get<bool>();

        next::MeleeComboMoveHammerStomp::OnHitWater(this_ptr);

        if (should_extend_stomp) {
            auto sein = core::api::game::player::sein();
            sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed.y = -this_ptr->fields.Speed * 1.1f; // Why *1.1? Because it's more fun.
        }
    }
} // namespace
