#include <interop/csharp_bridge.h>
#include <randomizer/conditions/new_setup_state_override.h>
#include <randomizer/conditions/condition_override.h>
#include <Core/uber_states/uber_state_interface.h>

#include <Modloader/app/methods/PlayerAbilities.h>
#include <Modloader/app/methods/QuestNodeSetup_QuestInteraction.h>
#include <Modloader/app/methods/SwampNightDayTransition.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/structs/Boolean__Boxed.h>
#include <Modloader/common.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

bool disable_has_ability_overwrite = false;

using namespace app::classes;

namespace {
    bool force_day_time = false;
    uber_states::UberState day_night_state(UberStateGroup::RandoState, 401);
    uber_states::UberState force_drain_regen_tree_water_state(UberStateGroup::RandoState, 402);

    bool is_day() {
        if (force_day_time) {
            return true;
        }

        return day_night_state.get<bool>();
    }

    std::optional<bool> is_day_condition(std::string_view path, void* obj) {
        return is_day();
    }

    // Fix for Lupo in Marsh not selling map.
    IL2CPP_INTERCEPT(QuestNodeSetup_QuestInteraction, bool, get_Eligible, (app::QuestNodeSetup_QuestInteraction * this_ptr)) {
        force_day_time = true;
        auto ret = next::QuestNodeSetup_QuestInteraction::get_Eligible(this_ptr);
        force_day_time = false;
        return ret;
    }

    bool can_resolve(app::SetupStateModifier* item) {
        return item->fields.Target != nullptr &&
                il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "get_HasAReference")->fields &&
                il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "CanResolve", nullptr)->fields;
    }

    void find_day_night(app::List_1_SetupStateModifier___Fields& modifiers, app::GameObject*& day, app::GameObject*& night) {
        for (auto i = 0; i < modifiers._size && (day == nullptr || night == nullptr); ++i) {
            auto item = modifiers._items->vector[i];
            // #nightTime
            if (item->fields.ModifierGUID == 0x39b90803 && can_resolve(item))
                night = il2cpp::invoke<app::GameObject>(item->fields.Target, "Resolve", nullptr);

            // #dayTime
            if (item->fields.ModifierGUID == 0xb4c1c837 && can_resolve(item))
                day = il2cpp::invoke<app::GameObject>(item->fields.Target, "Resolve", nullptr);
        }
    }

    int32_t move_water(app::NewSetupStateController* this_ptr, std::string const&, int32_t state, int32_t) {
        if (!force_drain_regen_tree_water_state.get<bool>())
            return state;

        state = is_day() ? 288338807 : -1643391836;
        auto& modifiers = this_ptr->fields.StateHolder->fields.Modifiers->fields;
        app::GameObject* day = nullptr;
        app::GameObject* night = nullptr;
        find_day_night(modifiers, day, night);
        if (day != nullptr && night != nullptr) {
            auto water_in_day = false;
            auto children = il2cpp::unity::get_children(day);
            for (auto child : children) {
                auto name = il2cpp::unity::get_object_name(child);
                if (name == "waterCorrupted" ||
                    name == "waterClean" ||
                    name == "waterfalls" ||
                    name == "foregroundBottom") {
                    water_in_day = true;
                    break;
                }
            }

            if (water_in_day && state == -1643391836) {
                // Remove undesired objects from night.
                children = il2cpp::unity::get_children(night);
                for (auto child : children) {
                    auto name = il2cpp::unity::get_object_name(child);
                    if (name != "radialGlow" &&
                        name != "glows" &&
                        name != "fogs" &&
                        name != "masks" &&
                        name != "soundNightState")
                        il2cpp::unity::destroy_object(child);
                }

                // Move desired from day.
                auto night_transform = UnityEngine::GameObject::get_transform(night);
                children = il2cpp::unity::get_children(day);
                for (auto child : children) {
                    auto name = il2cpp::unity::get_object_name(child);
                    if (name == "waterCorrupted" ||
                        name == "waterClean" ||
                        name == "waterfalls" ||
                        name == "foregroundBottom") {
                        auto child_transform = UnityEngine::GameObject::get_transform(child);
                        UnityEngine::Transform::SetParent_2(child_transform, night_transform, true);
                    }
                }

                water_in_day = false;
            } else if (!water_in_day && state == 288338807) {
                // Move desired from night.
                auto day_transform = UnityEngine::GameObject::get_transform(day);
                children = il2cpp::unity::get_children(night);
                for (auto child : children) {
                    auto name = il2cpp::unity::get_object_name(child);
                    if (name == "waterCorrupted" ||
                        name == "waterClean" ||
                        name == "waterfalls" ||
                        name == "foregroundBottom") {
                        auto child_transform = UnityEngine::GameObject::get_transform(child);
                        UnityEngine::Transform::SetParent_2(child_transform, day_transform, true);
                    }
                }

                water_in_day = true;
            }
        }

        return state;
    }

    int32_t move_howl(app::NewSetupStateController* this_ptr, std::string const&, int32_t state, int32_t) {
        state = is_day() ? -1375966924 : 1361521887;
        auto setup = il2cpp::unity::get_game_object(il2cpp::unity::get_parent(il2cpp::unity::get_transform(this_ptr)));
        auto moki = il2cpp::unity::find_child(setup, { std::string_view("#day"), "mokiNpcSetup" });
        if (il2cpp::unity::is_valid(moki)) {
            il2cpp::unity::set_parent(moki, setup);
            il2cpp::unity::set_active(moki, true);
        }

        auto howl = il2cpp::unity::find_child(setup, { std::string_view("#night"), "nightcrawlerChase" });
        if (il2cpp::unity::is_valid(howl)) {
            il2cpp::unity::set_parent(howl, setup);
            il2cpp::unity::set_active(howl, true);
        }

        return state;
    }

    void initialize_day_night_logic() {
        randomizer::conditions::register_new_setup_intercept({ "swampTorchIntroductionA/*setups/*timesOfDay" }, { -1052258879, 1819061226 }, [](auto, auto, auto, auto) -> int32_t {
            return is_day() ? -1052258879 : 1819061226;
        });

        randomizer::conditions::register_new_setup_intercept({ "swampIntroBottom/artSetups/dayNightSetup" }, { -1815347985, -1605692968 }, [](auto, auto, auto, auto) -> int32_t {
            return is_day() ? -1815347985 : -1605692968;
        });

        randomizer::conditions::register_new_setup_intercept({
                                                                     "swampIntroTop/timelines/timesOfDayTransition",
                                                                     "shoreSearchShot/art/timesOfDayTransition",
                                                             },
                                                             { -598230906, -1926205078 },
                                                             [](auto, auto, auto, auto) -> int32_t {
                                                                 return is_day() ? -598230906 : -1926205078;
                                                             });

        randomizer::conditions::register_new_setup_intercept(
                { "willOfTheWispsLagoonConnection/artSetups/timesOfDayTransition" }, { 1340727368, -76384365 }, [](auto, auto, auto, auto) -> int32_t {
                    return is_day() ? 1340727368 : -76384365;
                }
        );

        randomizer::conditions::register_new_setup_intercept({
                                                                     "swampWalljumpChallengeA/*setups/*timesOfDay",
                                                                     "swampWalljumpChallengeB/*timesOfDay",
                                                                     "doubleJumpEscalationB__clone0/*timesOfDay",
                                                             },
                                                             { -1834135337, -949591271 },
                                                             [](auto, auto, auto, auto) -> int32_t {
                                                                 return is_day() ? -1834135337 : -949591271;
                                                             });

        randomizer::conditions::register_new_setup_intercept(
                { "swampNightcrawlerBshortcut/*setups/timesOfDayTransition" }, { 1001861749, 787945376 }, [](auto, auto, auto, auto) -> int32_t {
                    return is_day() ? 1001861749 : 787945376;
                }
        );

        // Sword Cutscene rain
        randomizer::conditions::register_new_setup_intercept(
                { "swampGetSpiritBlade/timesOfDayController", "swampGetSpiritBlade/timesOfDayTransition" },
                { -480342150, 907153171 },
                [](auto, auto, auto, auto) -> int32_t {
                    return is_day() ? 907153171 : -480342150;
                }
        );

        // Remove regen tree water and move day water around (288338807 : day, -1643391836 : night).
        randomizer::conditions::register_new_setup_intercept({ "swampSaveRoomA/timesOfDayTransition" }, { 288338807, -1643391836 }, move_water);

        // Move howl between modifiers depending on if its day or night time. (-1375966924 : day, 1361521887 : night)
        randomizer::conditions::register_new_setup_intercept({ "swampNightcrawlerA/artSetups/timesOfDayTransition" }, { -1375966924, 1361521887 }, move_howl);

        randomizer::conditions::register_condition_intercept("swampNightcrawlerCavernD/enemies/enemyActivator", &is_day_condition);
        randomizer::conditions::register_condition_intercept("swampNightcrawlerCavernA/interactives/enemies/enemyActivator", &is_day_condition);
        randomizer::conditions::register_condition_intercept("swampNightcrawlerA/enemies/enemyActivator", &is_day_condition);
        randomizer::conditions::register_condition_intercept("swampTorchIntroductionA/enemies/activateAfterSword/enemyActivator", &is_day_condition);
        randomizer::conditions::register_condition_intercept("swampTorchIntroductionA/enemies/deactivateAfterSword/enemyActivator", &is_day_condition);
        randomizer::conditions::register_condition_intercept("swampWalljumpChallengeA/enemies/activateAfterSword/enemyActivator", &is_day_condition);
        randomizer::conditions::register_condition_intercept("swampWalljumpChallengeA/enemies/deactivateAfterSword/enemyActivator", &is_day_condition);
        randomizer::conditions::register_condition_intercept("swampWalljumpChallengeB/enemies/activateAfterSword/enemyActivator", &is_day_condition);
        randomizer::conditions::register_condition_intercept("swampWalljumpChallengeB/enemies/deactivateAfterSword/enemyActivator", &is_day_condition);
        randomizer::conditions::register_condition_intercept("swampIntroBottom/interactives/enemies/enemyActivator", &is_day_condition);
        randomizer::conditions::register_condition_intercept("swampIntroTop/enemies/activateBasedOnCondition/enemyActivator", &is_day_condition);
        randomizer::conditions::register_condition_intercept("willOfTheWispsLagoonConnection/enemies/activateAfterSword/enemyActivator", &is_day_condition);
        randomizer::conditions::register_condition_intercept("willOfTheWispsLagoonConnection/enemies/deactivateAfterSword/enemyActivator", &is_day_condition);

        uber_states::register_value_notify([](auto state, auto previous_value) {
            if (state == day_night_state || state == force_drain_regen_tree_water_state) {
                randomizer::conditions::apply_all_states();
            }
        });
    }

    IL2CPP_INTERCEPT(SwampNightDayTransition, bool, DayTimeCondition, (app::SwampNightDayTransition * this_ptr)) {
        return is_day();
    }

    bool override_has_ability = false;
    IL2CPP_INTERCEPT(SwampNightDayTransition, void, UpdateStateBasedOnCondition, (app::SwampNightDayTransition * this_ptr)) {
        modloader::ScopedSetter setter(override_has_ability, true);
        next::SwampNightDayTransition::UpdateStateBasedOnCondition(this_ptr);
    }

    IL2CPP_INTERCEPT(PlayerAbilities, bool, HasAbility, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability)) {
        if (override_has_ability)
            return is_day();

        return next::PlayerAbilities::HasAbility(this_ptr, ability);
    }

    CALL_ON_INIT(initialize_day_night_logic);
} // namespace
