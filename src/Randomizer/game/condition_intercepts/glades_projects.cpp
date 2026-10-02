
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/uber_states/core_uber_states.h>

#include <Modloader/modloader.h>

#include <Randomizer/conditions/condition_uber_state.h>
#include <Randomizer/conditions/new_setup_state_override.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>

namespace {
    auto& grom_spirit_well_built = randomizer::uber_states::state<"gladesProjects", "spiritWellBuilt">();
    auto& grom_houses_a_built = randomizer::uber_states::state<"gladesProjects", "housesABuilt">();
    auto& grom_houses_b_built = randomizer::uber_states::state<"gladesProjects", "housesBBuilt">();
    auto& grom_houses_c_built = randomizer::uber_states::state<"gladesProjects", "housesCBuilt">();
    auto& grom_remove_thorns_built = randomizer::uber_states::state<"gladesProjects", "removeThornsBuilt">();
    auto& grom_open_cave_built = randomizer::uber_states::state<"gladesProjects", "openCaveBuilt">();
    auto& grom_beautify_built = randomizer::uber_states::state<"gladesProjects", "beautifyBuilt">();
    auto& tuley_lightcatchers_planted = randomizer::uber_states::state<"gladesProjects", "lightcatchersPlanted">();
    auto& tuley_sela_flowers_planed = randomizer::uber_states::state<"gladesProjects", "selaFlowersPlanted">();
    auto& tuley_blue_moon_planted = randomizer::uber_states::state<"gladesProjects", "blueMoonPlanted">();
    auto& tuley_sticky_grass_planted = randomizer::uber_states::state<"gladesProjects", "stickyGrassPlanted">();
    auto& tuley_spring_plants_planted = randomizer::uber_states::state<"gladesProjects", "springPlantsPlanted">();
    auto& tuley_last_tree_planted = randomizer::uber_states::state<"gladesProjects", "lastTreePlanted">();

    [[maybe_unused]]
    auto uber_state_notify = core::api::uber_states::on_uber_state_changed().register_handlers(
        std::vector<std::tuple<core::api::uber_states::UntypedUberId>> {
            grom_spirit_well_built,
            grom_houses_a_built,
            grom_houses_b_built,
            grom_houses_c_built,
            grom_remove_thorns_built,
            grom_open_cave_built,
            grom_beautify_built,
            tuley_lightcatchers_planted,
            tuley_sela_flowers_planed,
            tuley_blue_moon_planted,
            tuley_sticky_grass_planted,
            tuley_spring_plants_planted,
            tuley_last_tree_planted,
        },
        [](auto id) {
            core::api::uber_states::UntypedUberState(42178, id.member).apply();
        }
    );

    void create_project_intercept(core::api::uber_states::UberState<core::api::uber_states::UberStateType::SerializedBooleanUberState> state, const std::string& path) {
        randomizer::conditions::register_new_setup_intercept(
            { path },
            { -151413539, 1018051603, -236466678 },
            [state](auto, auto&, auto original_state) mutable -> int32_t {
                if (state.get()) {
                    return -236466678;
                }

                return original_state == -236466678 ? 1018051603 : original_state;
            }
        );
    }

    void create_door_intercept(core::api::uber_states::UberState<core::api::uber_states::UberStateType::SerializedBooleanUberState> state, const int enabled, const int disabled, const std::string& path) {
        randomizer::conditions::register_new_setup_intercept(
            { path },
            { enabled, disabled },
            [state, enabled, disabled](auto, auto&, auto) mutable -> int32_t {
                return state.get() ? enabled : disabled;
            }
        );
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        create_project_intercept(grom_spirit_well_built, "wellspringGladesHubSetups/interactives/builderProjects/spiritWellSetup");
        create_project_intercept(grom_houses_a_built, "wellspringGladesHubSetups/interactives/builderProjects/mokiHutsSetup");
        create_project_intercept(grom_houses_b_built, "wellspringGladesHubSetups/interactives/builderProjects/mokiHutsBSetup");
        create_project_intercept(grom_houses_c_built, "wellspringGladesHubSetups/interactives/builderProjects/mokiHutsCSetup");
        create_project_intercept(grom_remove_thorns_built, "wellspringGladesHubSetups/interactives/builderProjects/removeThornsSetup");
        create_project_intercept(grom_open_cave_built, "wellspringGladesHubSetups/interactives/builderProjects/caveEntranceSetup");
        create_project_intercept(grom_beautify_built, "wellspringGladesHubSetups/interactives/builderProjects/beautifySetup");

        create_project_intercept(tuley_lightcatchers_planted, "wellspringGladesHubSetups/interactives/gardenerProjects/bashSeedSetup");
        create_project_intercept(tuley_sela_flowers_planed, "wellspringGladesHubSetups/interactives/gardenerProjects/flowerSeedSetup");
        create_project_intercept(tuley_blue_moon_planted, "wellspringGladesHubSetups/interactives/gardenerProjects/grappleSeedSetup");
        create_project_intercept(tuley_sticky_grass_planted, "wellspringGladesHubSetups/interactives/gardenerProjects/grassSeedSetup");
        create_project_intercept(tuley_spring_plants_planted, "wellspringGladesHubSetups/interactives/gardenerProjects/springSeedSetup");
        create_project_intercept(tuley_last_tree_planted, "wellspringGladesHubSetups/interactives/gardenerProjects/treeSeedSetup");

        create_door_intercept(grom_houses_a_built, 1123222511, -2139705815, "wellspringGladesHub/interactives/doorSetups/hutDoorsSetup");
        create_door_intercept(grom_houses_b_built, -411183768, -1559429889, "wellspringGladesHubB/interactives/hutDoorSetup");
        create_door_intercept(grom_houses_c_built, 1123222511, -2139705815, "wellspringGladesHub/interactives/doorSetups/hutDoorsSetupC");
        create_door_intercept(grom_open_cave_built, -1148551599, 2133784501, "wellspringGladesHub/interactives/doorSetups/caveDoorSetup");

        randomizer::conditions::register_new_setup_intercept(
            { "wellspringGladesHubSetups/interactives/builderProjects/spiritWell" },
            { -1683158848, 1457677579 },
            [](auto, auto&, auto) -> int32_t {
                return grom_spirit_well_built.get() ? 1457677579 : -1683158848;
            }
        );

        randomizer::conditions::register_new_setup_intercept(
            { "swampIntroTop/artSetups/interactives/savePedestalSetup" },
            { 763396887, 800721598, -1090989360 },
            [](auto, auto&, auto) -> int32_t {
                return grom_spirit_well_built.get() ? -1090989360 : 800721598;
            }
        );

        randomizer::conditions::register_condition_uber_state_intercept(
            core::uber_states::state<"questUberStateGroup", "familyReunionHouseBuiltCondition">(),
            [](auto) {
                return std::make_optional(grom_houses_a_built.get());
            }
        );
    });
} // namespace
