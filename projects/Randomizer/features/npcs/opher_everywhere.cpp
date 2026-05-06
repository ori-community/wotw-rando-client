#include <Modloader/app/methods/WeaponMasterPlaceholder.h>
#include <Modloader/interception_macros.h>

#include <Core/enums/uber_state.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Randomizer/conditions/new_setup_state_override.h>


namespace {
    const auto SPAWN_OPHER = core::api::uber_states::UberState(UberStateGroup::RandoState, 301);
    const auto USE_SPAWN_OPHER_RANDO_STATE = core::api::uber_states::UberState(UberStateGroup::RandoConfig, 31);

    [[maybe_unused]]
    auto uber_state_notify = core::api::uber_states::single_notification_bus().register_handlers(
        std::vector<std::tuple<core::api::uber_states::UberState>> {
            SPAWN_OPHER,
            USE_SPAWN_OPHER_RANDO_STATE,
        },
        [](auto&, auto) {
            randomizer::conditions::apply_all_states();
        }
    );

    IL2CPP_INTERCEPT(bool, WeaponMasterPlaceholder, ShouldSpawn, app::WeaponMasterPlaceholder* this_ptr) {
        if (!USE_SPAWN_OPHER_RANDO_STATE.get<bool>()) {
            return next::WeaponMasterPlaceholder::ShouldSpawn(this_ptr);
        }

        return SPAWN_OPHER.get<bool>();
    }
} // namespace
