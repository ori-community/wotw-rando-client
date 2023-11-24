#include <conditions/new_setup_state_override.h>
#include <constants.h>

#include <Core/api/uber_states/uber_state_handlers.h>

#include <Modloader/modloader.h>

namespace {
    core::api::uber_states::UberState grom_spirit_well_built(UberStateGroup::GromShop, 16825);
    core::api::uber_states::UberState grom_houses_a_built(UberStateGroup::GromShop, 51230);
    core::api::uber_states::UberState grom_houses_b_built(UberStateGroup::GromShop, 23607);
    core::api::uber_states::UberState grom_houses_c_built(UberStateGroup::GromShop, 40448);
    core::api::uber_states::UberState grom_remove_thorns_built(UberStateGroup::GromShop, 18751);
    core::api::uber_states::UberState grom_open_cave_built(UberStateGroup::GromShop, 16586);
    core::api::uber_states::UberState grom_beautify_built(UberStateGroup::GromShop, 15068);

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
        [](auto state, auto) {
            core::api::uber_states::UberState(42178, state.state.state()).apply();
        }
    );

    void create_build_intercept(core::api::uber_states::UberState state, const std::string& path) {
        std::string actual_path = path;
        randomizer::conditions::register_new_setup_intercept(
            { path },
            { -151413539, 1018051603, -236466678 },
            [state, actual_path](auto, auto, auto original_state, auto) -> int32_t {
                modloader::info("test", actual_path);
                if (state.get<bool>()) {
                    return -236466678;
                }

                return original_state == -236466678 ? 1018051603 : original_state;
            }
        );
    }

    [[maybe_unused]] auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        create_build_intercept(grom_spirit_well_built, "wellspringGladesHubSetups/interactives/builderProjects/spiritWellSetup");
        create_build_intercept(grom_houses_a_built, "wellspringGladesHubSetups/interactives/builderProjects/mokiHutsSetup");
        create_build_intercept(grom_houses_b_built, "wellspringGladesHubSetups/interactives/builderProjects/mokiHutsBSetup");
        create_build_intercept(grom_houses_c_built, "wellspringGladesHubSetups/interactives/builderProjects/mokiHutsCSetup");
        create_build_intercept(grom_remove_thorns_built, "wellspringGladesHubSetups/interactives/builderProjects/removeThornsSetup");
        create_build_intercept(grom_open_cave_built, "wellspringGladesHubSetups/interactives/builderProjects/caveEntranceSetup");
        create_build_intercept(grom_beautify_built, "wellspringGladesHubSetups/interactives/builderProjects/beautifySetup");

        randomizer::conditions::register_new_setup_intercept(
            { "wellspringGladesHubSetups/interactives/builderProjects/spiritWell" },
            { -1683158848, 1457677579 },
            [](auto, auto, auto original_state, auto) -> int32_t {
                return grom_spirit_well_built.get<bool>() ? 1457677579 : -1683158848;
            }
        );

        randomizer::conditions::register_new_setup_intercept(
            { "swampIntroTop/artSetups/interactives/savePedestalSetup" },
            { 763396887, 800721598, -1090989360 },
            [](auto, auto, auto original_state, auto) -> int32_t {
                return grom_spirit_well_built.get<bool>() ? -1090989360 : 800721598;
            }
        );
    });
} // namespace
