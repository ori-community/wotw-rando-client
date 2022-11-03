#include <constants.h>
#include <Core/api/game/player.h>
#include <Core/uber_states/uber_state_interface.h>

#include <Common/ext.h>
#include <Modloader/app/methods/MeleeComboMoveHammerStomp.h>
#include <Modloader/app/methods/Portal.h>
#include <Modloader/app/methods/SeinComboHandler.h>
#include <Modloader/app/methods/SeinController.h>
#include <Modloader/app/methods/SeinSwimming.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>

using namespace modloader;
using namespace modloader::win::console;

namespace {
    uber_states::UberState stomp_into_water_state(UberStateGroup::RandoConfig, STOMP_INTO_WATER_ID);

    IL2CPP_INTERCEPT(MeleeComboMoveHammerStomp, void, OnHitWater, (app::MeleeComboMoveHammerStomp * this_ptr)) {
        auto should_extend_stomp =
                this_ptr->fields.m_currentState == app::MeleeComboMoveHammerStomp_State__Enum::Fall &&
                stomp_into_water_state.get<bool>();

        next::MeleeComboMoveHammerStomp::OnHitWater(this_ptr);

        if (should_extend_stomp) {
            auto sein = game::player::sein();
            sein->fields.PlatformBehaviour->fields.PlatformMovement->fields._.m_localSpeed.y = -this_ptr->fields.Speed * 1.1f; // Why *1.1? Because it's more fun.
        }
    }
} // namespace
