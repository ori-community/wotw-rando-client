
#include <Core/api/uber_states/uber_state_handlers.h>

#include <Modloader/modloader.h>

#include <Randomizer/conditions/condition_override.h>
#include <Randomizer/conditions/condition_uber_state.h>

namespace {
    core::api::uber_states::UberState built_spirit_well(UberStateGroup::GladesProjects, 16825);
    core::api::uber_states::UberState built_spirit_well_condition(42178, 3072);

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        randomizer::conditions::register_condition_intercept(
            randomizer::conditions::ConditionType::VisibleOnWorldMap,
            "swampIntroTop/artSetups/interactives/savePedestalSetup/savePedestalParent/savePedestal",
            [](auto, auto) { return std::optional<bool>(built_spirit_well.get()); }
        );

        // Intercept for condition on RuntimeWorldMapIcon
        randomizer::conditions::register_condition_uber_state_intercept(
            built_spirit_well_condition,
            [](auto) {
                return std::make_optional(built_spirit_well.get<bool>());
            }
        );
    });
} // namespace
