#include <macros.h>
#include <interop/csharp_bridge.h>
#include <randomizer/conditions/new_setup_state_override.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace
{
    bool water_cheat_purified = false;
    bool water_damage_override = false;
    STATIC_IL2CPP_INTERCEPT(Sein.World, Events, bool, get_WaterPurified, ()) {
        return !water_damage_override && (csharp_bridge::water_cleansed() || water_cheat_purified);
    }

    void toggle_clear_water(std::string const& command, std::vector<console::CommandParam> const& params)
    {
        water_cheat_purified = !water_cheat_purified;
    }

    void initialize_water()
    {
        std::function<randomizer::conditions::applier_intercept(int32_t, int32_t)> ai_create = [](int32_t corrupted, int32_t clean) -> randomizer::conditions::applier_intercept {
            return [corrupted, clean](auto, auto, auto, auto) -> int32_t {
                return (csharp_bridge::water_cleansed() || water_cheat_purified) ? clean : corrupted;
            };
        };

        // Corrupted / Clean
        randomizer::conditions::register_new_setup_intercept({
                "swampChargeShotIntroductionNew/dynamicSetups/waterStateController",
                "swampSpringIntroductionB/enemies/act2EnemiesSetups/act2EnemiesSetup",
                "springIntroCavernA/dynamicSetups/waterStateController",
                "swampIntroTop/dynamicSetups/waterStateController",
                "swampSpringIntroductionB/enemies/act2EnemiesSetups/act2EnemiesSetup",
                "swampNightcrawlerCavernE/dynamicSetups/waterStateController",
                "swampNightcrawlerCavernD/dynamicSetups/waterStateController (1)",
                "swampNightCrawlerDoubleJumpSecretRoom/dynamicSetups/waterStateControlle",
            }, { 569716315, 2044614461 }, ai_create(569716315, 2044614461));
        // notClean  / Clean
        randomizer::conditions::register_new_setup_intercept({ "swampIntroBottom/*setups/waterStateController" },
            { 135459242, 2010339656 }, ai_create(135459242, 2010339656));
        // corrupted / clean
        randomizer::conditions::register_new_setup_intercept({ "" }, { 742737118, 669048353 }, ai_create(742737118, 669048353));
        // corrupted / clean
        randomizer::conditions::register_new_setup_intercept({ "" }, { 739518878, -1861424606 }, ai_create(739518878, -1861424606));
        // Corrupted / Clean
        randomizer::conditions::register_new_setup_intercept({ "" }, { 2054782292, -357160486 }, ai_create(2054782292, -357160486));
        // Corrupted / Clean
        randomizer::conditions::register_new_setup_intercept({ "" }, { 1639966459, 127921689 }, ai_create(1639966459, 127921689));
        // Corrupted / Clean
        randomizer::conditions::register_new_setup_intercept({ "" }, { -1876259767, -1976832348 }, ai_create(-1876259767, -1976832348));
        // Corrupted / Clean
        randomizer::conditions::register_new_setup_intercept({ "" }, { -1947088109, 385303388 }, ai_create(-1947088109, 385303388));
        // Poisoned / Clean
        randomizer::conditions::register_new_setup_intercept({ "kwoloksCavernE/setups/poisonWaterToggle" },
            { 378117992, -760384866 }, ai_create(378117992, -760384866));
        // corrupted / clean
        randomizer::conditions::register_new_setup_intercept({ "" }, { -144265033, 685358568 }, ai_create(-144265033, 685358568));
        // corrupted / clean
        randomizer::conditions::register_new_setup_intercept({ "kwoloksCavernBackgroundA/dynamicSetups/waterStateController" },
            { -882028644, -1833484193 }, ai_create(-882028644, -1833484193));
        // corrupted / clean
        randomizer::conditions::register_new_setup_intercept({ "kwoloksCavernB/dynamicSetups/waterStateController" },
            { -1848734555, 30971136 }, ai_create(-1848734555, 30971136));
        // Corrupted / Clean
        randomizer::conditions::register_new_setup_intercept({ "" }, { 1762013712, 816885685 }, ai_create(1762013712, 816885685));

        //-> -1629508673 : NotStarted
        //-> -1353113975 : Started
        //-> -2075520848 : Finished
        randomizer::conditions::register_new_setup_intercept({ "" }, { -1629508673, -1353113975, -2075520848 },
            [](auto, auto, auto state, auto) -> int32_t {
                if (state == -1353113975)
                    water_damage_override = true;
                else
                    water_damage_override = false;

                return state;
            }
        );

        console::register_command({ "cheat", "toggle_clear_water" }, toggle_clear_water);
    }

    CALL_ON_INIT(initialize_water);
}