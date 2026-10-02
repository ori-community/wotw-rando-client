#include <Modloader/app/methods/WeaponMasterPlaceholder.h>
#include <Modloader/interception_macros.h>

#include <Core/api/uber_states/uber_state.h>
#include <Randomizer/conditions/new_setup_state_override.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    auto& spawn_opher_state = randomizer::uber_states::state<"randoState", "spawnOpherEverywhere">();
    auto& use_spawn_opher_state = randomizer::uber_states::state<"randoConfig", "useSpawnOpherEverywhereRandoState">();

    [[maybe_unused]]
    auto uber_state_notify = core::api::uber_states::on_uber_state_changed().register_handlers(
        std::vector<std::tuple<core::api::uber_states::UntypedUberId>> {
            spawn_opher_state.get_uber_id(),
            use_spawn_opher_state.get_uber_id(),
        },
        [](auto) {
            randomizer::conditions::apply_all_states();
        }
    );

    IL2CPP_INTERCEPT(bool, WeaponMasterPlaceholder, ShouldSpawn, app::WeaponMasterPlaceholder* this_ptr) {
        if (!use_spawn_opher_state.get()) {
            return next::WeaponMasterPlaceholder::ShouldSpawn(this_ptr);
        }

        return spawn_opher_state.get();
    }
} // namespace
