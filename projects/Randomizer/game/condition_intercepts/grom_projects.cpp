
#include <Core/api/uber_states/uber_state_handlers.h>

#include <Modloader/modloader.h>

#include <Randomizer/conditions/new_setup_state_override.h>
#include <Randomizer/conditions/condition_uber_state.h>

namespace {
    core::api::uber_states::UberState grom_spirit_well_built(UberStateGroup::GladesProjects, 16825);
    core::api::uber_states::UberState grom_houses_a_built(UberStateGroup::GladesProjects, 51230);
    core::api::uber_states::UberState grom_houses_b_built(UberStateGroup::GladesProjects, 23607);
    core::api::uber_states::UberState grom_houses_c_built(UberStateGroup::GladesProjects, 40448);
    core::api::uber_states::UberState grom_remove_thorns_built(UberStateGroup::GladesProjects, 18751);
    core::api::uber_states::UberState grom_open_cave_built(UberStateGroup::GladesProjects, 16586);
    core::api::uber_states::UberState grom_beautify_built(UberStateGroup::GladesProjects, 15068);

    auto uber_state_notify = core::api::uber_states::single_notification_bus().register_handlers(
        std::vector<std::tuple<core::api::uber_states::UberState>> {
            grom_spirit_well_built,
            grom_houses_a_built,
            grom_houses_b_built,
            grom_houses_c_built,
            grom_remove_thorns_built,
            grom_open_cave_built,
            grom_beautify_built,
        },
        [](auto event, auto) {
            core::api::uber_states::UberState(42178, event.state.state()).apply();
        }
    );

    void create_build_intercept(core::api::uber_states::UberState state, const std::string& path) {
        randomizer::conditions::register_new_setup_intercept(
            { path },
            { -151413539, 1018051603, -236466678 },
            [state](auto, auto, auto original_state) -> int32_t {
                if (state.get<bool>()) {
                    return -236466678;
                }

                return original_state == -236466678 ? 1018051603 : original_state;
            }
        );
    }

    void create_door_intercept(core::api::uber_states::UberState state, const int enabled, const int disabled, const std::string& path) {
        randomizer::conditions::register_new_setup_intercept(
            { path },
            { enabled, disabled },
            [state, enabled, disabled](auto, auto, auto) -> int32_t {
                return state.get<bool>() ? enabled : disabled;
            }
        );
    }

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        create_build_intercept(grom_spirit_well_built, "wellspringGladesHubSetups/interactives/builderProjects/spiritWellSetup");
        create_build_intercept(grom_houses_a_built, "wellspringGladesHubSetups/interactives/builderProjects/mokiHutsSetup");
        create_build_intercept(grom_houses_b_built, "wellspringGladesHubSetups/interactives/builderProjects/mokiHutsBSetup");
        create_build_intercept(grom_houses_c_built, "wellspringGladesHubSetups/interactives/builderProjects/mokiHutsCSetup");
        create_build_intercept(grom_remove_thorns_built, "wellspringGladesHubSetups/interactives/builderProjects/removeThornsSetup");
        create_build_intercept(grom_open_cave_built, "wellspringGladesHubSetups/interactives/builderProjects/caveEntranceSetup");
        create_build_intercept(grom_beautify_built, "wellspringGladesHubSetups/interactives/builderProjects/beautifySetup");

        create_door_intercept(grom_houses_a_built, 1123222511, -2139705815, "wellspringGladesHub/interactives/doorSetups/hutDoorsSetup");
        create_door_intercept(grom_houses_b_built, -411183768, -1559429889, "wellspringGladesHubB/interactives/hutDoorSetup");
        create_door_intercept(grom_houses_c_built, 1123222511, -2139705815, "wellspringGladesHub/interactives/doorSetups/hutDoorsSetupC");
        create_door_intercept(grom_open_cave_built, -1148551599, 2133784501, "wellspringGladesHub/interactives/doorSetups/caveDoorSetup");

        randomizer::conditions::register_new_setup_intercept(
            { "wellspringGladesHubSetups/interactives/builderProjects/spiritWell" },
            { -1683158848, 1457677579 },
            [](auto, auto, auto) -> int32_t {
                return grom_spirit_well_built.get<bool>() ? 1457677579 : -1683158848;
            }
        );

        randomizer::conditions::register_new_setup_intercept(
            { "swampIntroTop/artSetups/interactives/savePedestalSetup" },
            { 763396887, 800721598, -1090989360 },
            [](auto, auto, auto) -> int32_t {
                return grom_spirit_well_built.get<bool>() ? -1090989360 : 800721598;
            }
        );

        randomizer::conditions::register_condition_uber_state_intercept(
            core::api::uber_states::UberState(14019, 11894),
            [](auto) {
                return std::make_optional(grom_houses_a_built.get<bool>());
            }
        );
    });
} // namespace
