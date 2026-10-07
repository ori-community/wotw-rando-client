#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/uber_states/core_uber_states.h>
#include <Modloader/modloader.h>
#include <Randomizer/conditions/condition_override.h>
#include <Randomizer/conditions/condition_uber_state.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    auto& built_spirit_well = randomizer::uber_states::state<"gladesProjects", "spiritWellBuilt">();
    auto& built_spirit_well_condition = core::uber_states::state<"hubUberStateGroup", "hasCompletedBuilderProjectSpiritWell">();

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().on<modloader::events::GameReady>([](auto) {
        randomizer::conditions::register_condition_intercept(
            randomizer::conditions::ConditionType::VisibleOnWorldMap,
            "swampIntroTop/artSetups/interactives/savePedestalSetup/savePedestalParent/savePedestal",
            [](auto, auto) { return std::optional<bool>(built_spirit_well.get()); }
        );

        // Intercept for condition on RuntimeWorldMapIcon
        randomizer::conditions::register_condition_uber_state_intercept(
            built_spirit_well_condition,
            [](auto) {
                return std::make_optional(built_spirit_well.get());
            }
        );
    });
} // namespace
