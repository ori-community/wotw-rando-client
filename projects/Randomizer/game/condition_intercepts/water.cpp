#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/enums/uber_state.h>
#include <Core/property/reactivity.h>
#include <Randomizer/conditions/new_setup_state_override.h>
#include <Randomizer/macros.h>

#include <Modloader/app/methods/Sein/World/Events.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

using namespace modloader;
using namespace modloader::win;

namespace {
    bool water_damage_override = false;
    core::api::uber_states::UberState clean_water_state(UberStateGroup::RandoState, 2000);

    IL2CPP_INTERCEPT(Sein::World::Events, bool, get_WaterPurified, ()) { return !water_damage_override && clean_water_state.get<bool>(); }

    randomizer::conditions::applier_intercept create_applier_intercept(int32_t corrupted, int32_t clean) {
        return [corrupted, clean](auto, auto, auto, auto) -> int32_t { return clean_water_state.get<bool>() ? clean : corrupted; };
    }

    std::shared_ptr<const core::reactivity::ReactiveEffect> clean_water_state_updated_effect;

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        // Corrupted / Clean
        randomizer::conditions::register_new_setup_intercept(
            {
                "swampChargeShotIntroductionNew/dynamicSetups/waterStateController",
                "swampSpringIntroductionB/enemies/act2EnemiesSetups/act2EnemiesSetup",
                "springIntroCavernA/dynamicSetups/waterStateController",
                "swampIntroTop/dynamicSetups/waterStateController",
                "swampSpringIntroductionB/enemies/act2EnemiesSetups/act2EnemiesSetup",
                "swampNightcrawlerCavernE/dynamicSetups/waterStateController",
                "swampNightcrawlerCavernD/dynamicSetups/waterStateController (1)",
                "swampNightCrawlerDoubleJumpSecretRoom/dynamicSetups/waterStateControlle",
                "willOfTheWispsLagoonConnection/dynamicSetups/waterStateController",
                "kwoloksCavernThroneRoom/dynamicSetups/waterStateController",
                "silentWoodlandsKwoloksCanal/artSetups/waterStateController",
                "kwoloksCavernUpperMainRoom/art/flattened/hugeCell/waterStateController",
                "waterMillEntranceBottomRight/dynamicSettings/waterStateController",
                "waterMillEntrance/dynamicSettings/waterStateController",
                "waterMillEntranceBottomLeft/dynamicSettings/waterStateController",
                "wellspringEntranceSecretRoom/dynamicSettings /waterStateController",
                "railsIntroductionG/dynamicSetups/waterStateController",
                "railsIntroductionB/dynamicSetups/waterStateController",
                "waterMillBGetLeash/dynamicSetups/waterStateController",
                "waterMillEntranceTop/dynamicSettings",
                "waterMillBEntrance/dynamicSetups/waterStateController",
                "waterMillBCorridorB/dynamicSetups/waterStateController",
                "waterMillBRotatingRoom/dynamicStates/waterStateController",
                "waterMillBLasersBNew/dynamicSetups/waterStateController",
                "kwoloksHollowGetDash/dynamicSettings /waterStateController",
                "kwoloksCavernH/dynamicSettings /waterStateController",
            },
            {569716315, 2044614461},
            create_applier_intercept(569716315, 2044614461)
        );
        // notClean  / Clean
        randomizer::conditions::register_new_setup_intercept(
            {
                "swampIntroBottom/*setups/waterStateController",
                "lumaSwampTransitionA/dynamicSetups/waterStateController",
                "swampWalljumpChallengeB/dynamicSetups/waterStateController",
                "kwoloksCavernO/dynamicSetups/waterStateController",
            },
            {135459242, 2010339656},
            create_applier_intercept(135459242, 2010339656)
        );
        // corrupted / clean
        randomizer::conditions::register_new_setup_intercept(
            {"lumaPoolsP/dynamicSetups/waterStateController"}, {742737118, 669048353}, create_applier_intercept(742737118, 669048353)
        );
        // corrupted / clean
        randomizer::conditions::register_new_setup_intercept(
            {"wellspringGladesHubBackground/dynamicSetups/waterStateController"}, {739518878, -1861424606}, create_applier_intercept(739518878, -1861424606)
        );
        // Corrupted / Clean
        randomizer::conditions::register_new_setup_intercept(
            {"wellspringGladesHub/dynamicSetups/waterStateController", "wellspringGladesHubB/dynamicSetups/waterStateController"},
            {2054782292, -357160486},
            create_applier_intercept(2054782292, -357160486)
        );
        // Corrupted / Clean
        randomizer::conditions::register_new_setup_intercept(
            {"waterMillCEntrance/dynamicSetups/waterSetup"}, {1639966459, 127921689}, create_applier_intercept(1639966459, 127921689)
        );
        // Corrupted / Clean
        randomizer::conditions::register_new_setup_intercept(
            {"wotwSaveRoomC__clone0__clone1/dynamicSetups/waterSetup"}, {-1876259767, -1976832348}, create_applier_intercept(-1876259767, -1976832348)
        );
        // Corrupted / Clean
        randomizer::conditions::register_new_setup_intercept(
            {"waterMillPool__clone0/dynamicSetups/waterSetup"}, {-1947088109, 385303388}, create_applier_intercept(-1947088109, 385303388)
        );
        // Poisoned / Clean
        randomizer::conditions::register_new_setup_intercept(
            {"kwoloksCavernE/setups/poisonWaterToggle"}, {378117992, -760384866}, create_applier_intercept(378117992, -760384866)
        );
        // corrupted / clean
        randomizer::conditions::register_new_setup_intercept(
            {"kwoloksCavernF/dynamicSetups/waterStateController"}, {-144265033, 685358568}, create_applier_intercept(-144265033, 685358568)
        );
        // corrupted / clean
        randomizer::conditions::register_new_setup_intercept(
            {"kwoloksCavernBackgroundA/dynamicSetups/waterStateController"}, {-882028644, -1833484193}, create_applier_intercept(-882028644, -1833484193)
        );
        // corrupted / clean
        randomizer::conditions::register_new_setup_intercept(
            {"kwoloksCavernB/dynamicSetups/waterStateController"}, {-1848734555, 30971136}, create_applier_intercept(-1848734555, 30971136)
        );
        // Corrupted / Clean
        randomizer::conditions::register_new_setup_intercept(
            {"kwoloksCavernStomperSideRoom/dynamicSetups/waterStateController"}, {1762013712, 816885685}, create_applier_intercept(1762013712, 816885685)
        );

        //-> -1629508673 : NotStarted
        //-> -1353113975 : Started
        //-> -2075520848 : Finished
        randomizer::conditions::register_new_setup_intercept(
            {"waterMillEscapeABBackground/escapeSetups"},
            {-1629508673, -1353113975, -2075520848},
            [](auto, auto, auto state, auto) -> int32_t {
                water_damage_override = static_cast<bool>(state == -1353113975);
                return state;
            }
        );

        clean_water_state_updated_effect = core::reactivity::watch_effect().effect({clean_water_state}).after([] {
            core::api::uber_states::apply_all();
        }).finalize();
    });
} // namespace
