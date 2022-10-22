#include <constants.h>
#include <game/player.h>
#include <uber_states/uber_state_interface.h>

#include <Common/ext.h>
#include <Il2CppModLoader/app/methods/MeleeComboMoveHammerStomp.h>
#include <Il2CppModLoader/app/methods/Portal.h>
#include <Il2CppModLoader/app/methods/SeinComboHandler.h>
#include <Il2CppModLoader/app/methods/SeinController.h>
#include <Il2CppModLoader/app/methods/SeinSwimming.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/windows_api/console.h>

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
