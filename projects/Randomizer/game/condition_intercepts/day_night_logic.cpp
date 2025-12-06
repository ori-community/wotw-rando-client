#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/property/reactivity.h>
#include <Randomizer/conditions/condition_override.h>
#include <Randomizer/conditions/new_setup_state_override.h>

#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/LightCanvasStateController.h>
#include <Modloader/app/methods/PlayerAbilities.h>
#include <Modloader/app/methods/PostStateDefinition.h>
#include <Modloader/app/methods/QuestNodeSetup_QuestInteraction.h>
#include <Modloader/app/methods/SwampNightDayTransition.h>
#include <Modloader/app/methods/TurbulenceStateDefinition.h>
#include <Modloader/app/methods/System/Collections/Generic/List_1_SetupStateModifier_.h>
#include <Modloader/app/structs/Boolean__Boxed.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/types/LightCanvasStateController.h>
#include <Modloader/app/types/PostStateDefinition.h>
#include <Modloader/app/types/TurbulenceStateDefinition.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

bool disable_has_ability_overwrite = false;

using namespace app::classes;

namespace {
    bool force_day_time = false;

    const auto RAIN_LIFTED_IN_MARSH = core::api::uber_states::UberState(UberStateGroup::RandoState, 401);
    const auto REGEN_TREE_DRAINED = core::api::uber_states::UberState(UberStateGroup::RandoState, 402);
    const auto USE_RAIN_LIFTED_IN_MARSH_RANDO_STATE = core::api::uber_states::UberState(UberStateGroup::RandoConfig, 34);
    const auto USE_REGEN_TREE_DRAINED_RANDO_STATE = core::api::uber_states::UberState(UberStateGroup::RandoConfig, 35);

    bool is_day() {
        if (force_day_time) {
            return true;
        }

        return RAIN_LIFTED_IN_MARSH.get<bool>();
    }

    std::optional<bool> is_day_condition(std::string_view, void*) {
        if (!USE_RAIN_LIFTED_IN_MARSH_RANDO_STATE.get<bool>()) {
            return std::nullopt;
        }

        return is_day();
    }

    randomizer::conditions::applier_intercept_fn make_day_night_applier_intercept_fn(int day_state, int night_state) {
        return [=](auto, auto, auto original_state) {
            if (!USE_RAIN_LIFTED_IN_MARSH_RANDO_STATE.get<bool>()) {
                return original_state;
            }

            return is_day() ? day_state : night_state;
        };
    }

    // Fix for Lupo in Marsh not selling map.
    IL2CPP_INTERCEPT(bool, QuestNodeSetup_QuestInteraction, get_Eligible, app::QuestNodeSetup_QuestInteraction * this_ptr) {
        force_day_time = true;
        auto ret = next::QuestNodeSetup_QuestInteraction::get_Eligible(this_ptr);
        force_day_time = false;
        return ret;
    }

    bool can_resolve(const app::SetupStateModifier* item) {
        return item->fields.Target != nullptr && il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "get_HasAReference")->fields &&
            il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "CanResolve", 0)->fields;
    }

    void find_day_night(const app::List_1_SetupStateModifier___Fields& modifiers, app::GameObject*& day, app::GameObject*& night) {
        for (auto i = 0; i < modifiers._size && (day == nullptr || night == nullptr); ++i) {
            const auto item = modifiers._items->vector[i];
            // #nightTime
            if (item->fields.ModifierGUID == 0x39b90803 && can_resolve(item)) {
                night = il2cpp::invoke<app::GameObject>(item->fields.Target, "Resolve", 0);
            }

            // #dayTime
            if (item->fields.ModifierGUID == 0xb4c1c837 && can_resolve(item)) {
                day = il2cpp::invoke<app::GameObject>(item->fields.Target, "Resolve", 0);
            }
        }
    }

    int32_t regen_tree(app::NewSetupStateController* controller, std::string const&, int32_t original_state) {
        if (!USE_REGEN_TREE_DRAINED_RANDO_STATE.get<bool>()) {
            return original_state;
        }

        const auto base_object = core::api::scenes::get_game_object("swampSaveRoomA/artSetups");
        const auto day = il2cpp::unity::find_child(base_object, "#dayTime");
        const auto night = il2cpp::unity::find_child(base_object, "#nightTime");

        const std::array day_objects{
            il2cpp::unity::find_child(day, "soundDayState"),
            il2cpp::unity::find_child(day, "fogs"),
            il2cpp::unity::find_child(day, "glows"),
            il2cpp::unity::find_child(day, "lightRay"),
            il2cpp::unity::find_child(day, "masks (1)"),
            il2cpp::unity::find_child(day, "particles"),
            il2cpp::unity::find_child(day, "radialGlow (1)"),
            il2cpp::unity::find_child(day, "sharedWoodThornsE"),
            il2cpp::unity::find_children(day, "swampBackgroundRockA")[0],
            il2cpp::unity::find_children(day, "swampBackgroundRockA")[1],
            il2cpp::unity::find_children(day, "swampBackgroundRockE")[0],
            il2cpp::unity::find_children(day, "swampBackgroundRockE")[1],
            il2cpp::unity::find_child(day, "swampGrassBs"),
        };

        const std::array night_objects{
            il2cpp::unity::find_child(night, "soundNightState"),
            il2cpp::unity::find_child(night, "fogs"),
            il2cpp::unity::find_child(night, "glows"),
            il2cpp::unity::find_child(night, "masks"),
            il2cpp::unity::find_child(night, "radialGlow"),
        };

        const std::array wet_objects{
            il2cpp::unity::find_child(night, "earlyZMesh_#nightTime"),
            il2cpp::unity::find_child(night, "cleanedWaterInkwater"),
            il2cpp::unity::find_child(night, "drippingWater"),
            il2cpp::unity::find_child(night, "rippleAnimator"),
            il2cpp::unity::find_child(night, "sharedWaterDuckweedB"),
            il2cpp::unity::find_child(night, "waterDistortions"),
            il2cpp::unity::find_child(night, "waterfalls"),
            il2cpp::unity::find_child(night, "waterPlants"),
            il2cpp::unity::find_child(night, "waterZone (2)"),
        };

        const std::array dry_objects{
            il2cpp::unity::find_child(day, "earlyZMesh_#dayTime"),
            il2cpp::unity::find_child(day, "foregroundBottom"),
            il2cpp::unity::find_child(day, "waterClean"),
            il2cpp::unity::find_child(day, "waterfalls"),
        };

        using entry_t = app::GameObject* const;
        auto const& enable_day_night = is_day() ? std::span<entry_t>(day_objects) : std::span<entry_t>(night_objects);
        auto const& disable_day_night = !is_day() ? std::span<entry_t>(day_objects) : std::span<entry_t>(night_objects);
        auto const& enable_water_or_dry = REGEN_TREE_DRAINED.get<bool>() ? std::span<entry_t>(dry_objects) : std::span<entry_t>(wet_objects);
        auto const& disable_water_or_dry = !REGEN_TREE_DRAINED.get<bool>() ? std::span<entry_t>(dry_objects) : std::span<entry_t>(wet_objects);
        for (const auto game_object: enable_day_night) {
            il2cpp::unity::set_active(game_object, true);
        }

        for (const auto game_object: disable_day_night) {
            il2cpp::unity::set_active(game_object, false);
        }

        for (const auto game_object: enable_water_or_dry) {
            il2cpp::unity::set_active(game_object, true);
        }

        for (const auto game_object: disable_water_or_dry) {
            il2cpp::unity::set_active(game_object, false);
        }

        auto platform_group = il2cpp::unity::find_child(night, "platformGroup");
        if (!il2cpp::unity::is_valid(platform_group)) {
            platform_group = il2cpp::create_object<app::GameObject>(types::GameObject::get_class());
            UnityEngine::GameObject::ctor_1(platform_group, il2cpp::string_new("platformGroup"));
            il2cpp::unity::set_parent(platform_group, night, true);

            const auto platform_a = core::api::scenes::get_game_object("swampSaveRoomA/artSetups/#nightTime/swampFloatingPlatformA");
            const auto platform_b = core::api::scenes::get_game_object("swampSaveRoomA/artSetups/#nightTime/swampFloatingPlatformB");
            il2cpp::unity::set_parent(platform_a, platform_group);
            il2cpp::unity::set_parent(platform_b, platform_group);
        }

        il2cpp::unity::set_active(platform_group, !REGEN_TREE_DRAINED.get<bool>());

        const auto log = core::api::scenes::get_game_object("swampSaveRoomA/physics/movingBranch/log/logcore");
        const auto leaves_day = core::api::scenes::get_game_object("swampSaveRoomA/artSetups/spiritTablet/art/leavesDay");
        const auto leaves_night = core::api::scenes::get_game_object("swampSaveRoomA/artSetups/spiritTablet/art/leavesNight");

        il2cpp::unity::set_active(log, REGEN_TREE_DRAINED.get<bool>());
        il2cpp::unity::set_active(leaves_day, is_day());
        il2cpp::unity::set_active(leaves_night, !is_day());

        constexpr auto day_state = 288338807;
        constexpr auto night_state = -1643391836;
        const auto post = core::api::scenes::get_game_object("swampSaveRoomA/timesOfDayTransition/postController");
        const auto turbulence = core::api::scenes::get_game_object("swampSaveRoomA/timesOfDayTransition/turbulenceController");
        const auto art = core::api::scenes::get_game_object("swampSaveRoomA/art");

        const auto post_state_definition = il2cpp::unity::get_component<app::PostStateDefinition>(post, types::PostStateDefinition::get_class());
        PostStateDefinition::ApplyKnownState(post_state_definition, is_day() ? day_state : night_state, app::UberStateApplyContext__Enum::FullStateApply);

        const auto turbulence_state_definition = il2cpp::unity::get_component<app::TurbulenceStateDefinition>(
            turbulence, types::TurbulenceStateDefinition::get_class()
        );
        TurbulenceStateDefinition::ApplyKnownState(
            turbulence_state_definition, is_day() ? day_state : night_state, app::UberStateApplyContext__Enum::FullStateApply
        );

        const auto light_canvas = il2cpp::unity::get_component<app::LightCanvasStateController>(art, types::LightCanvasStateController::get_class());
        LightCanvasStateController::ApplyKnownState(light_canvas, is_day() ? day_state : night_state, app::UberStateApplyContext__Enum::FullStateApply);

        il2cpp::unity::set_active(day, true);
        il2cpp::unity::set_active(night, true);

        return 0;
    }

    std::optional<il2cpp::WeakGCRef<app::GameObject>> mokk_the_brave_setup_ref = std::nullopt;
    core::reactivity::ReactiveEffect::ptr_t mokk_the_brave_effect = nullptr;

    void update_mokk_the_brave_presence() {
        if (!mokk_the_brave_setup_ref.has_value() || !mokk_the_brave_setup_ref->is_valid()) {
            mokk_the_brave_setup_ref = std::nullopt;
            return;
        }

        core::api::uber_states::UberState howl_escape_started(21786, 30656);
        core::api::uber_states::UberState howl_escape_done(21786, 40322);

        il2cpp::unity::set_active(
            **mokk_the_brave_setup_ref,
            !howl_escape_started.get<bool>() || howl_escape_done.get<bool>()
        );
    }

    int32_t always_spawn_howl(app::NewSetupStateController* this_ptr, std::string const&, int32_t original_state) {
        const auto state = is_day() ? -1375966924 : 1361521887;
        const auto setup = il2cpp::unity::get_game_object(il2cpp::unity::get_parent(il2cpp::unity::get_transform(this_ptr)));

        const auto howl = il2cpp::unity::find_child(setup, {std::string_view("#night"), "nightcrawlerChase"});
        if (il2cpp::unity::is_valid(howl)) {
            il2cpp::unity::set_parent(howl, setup);
            il2cpp::unity::set_active(howl, true);
        }

        update_mokk_the_brave_presence();

        return state;
    }

    auto uber_state_notify = core::api::uber_states::notification_bus().register_handler([](auto params) {
        if (params.state == RAIN_LIFTED_IN_MARSH || params.state == REGEN_TREE_DRAINED) {
            randomizer::conditions::apply_all_states();
        }
    });

    IL2CPP_INTERCEPT(bool, SwampNightDayTransition, DayTimeCondition, app::SwampNightDayTransition * this_ptr) { return is_day(); }

    bool override_has_ability = false;
    IL2CPP_INTERCEPT(void, SwampNightDayTransition, UpdateStateBasedOnCondition, app::SwampNightDayTransition * this_ptr) {
        modloader::ScopedSetter setter(override_has_ability, true);
        next::SwampNightDayTransition::UpdateStateBasedOnCondition(this_ptr);
    }

    IL2CPP_INTERCEPT_WITH_ORDER(10, bool, PlayerAbilities, HasAbility, app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability) {
        return override_has_ability ? is_day() : next::PlayerAbilities::HasAbility(this_ptr, ability);
    }

    auto on_swamp_nightcrawler_a_loaded = core::api::scenes::single_event_bus().register_handler("swampNightcrawlerA", [](core::api::scenes::SceneLoadEventMetadata* metadata, auto) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        // Move Mokk the Brave out of the #day GameObject
        const auto mokk_the_brave_go = il2cpp::unity::find_child(
            metadata->scene->fields.SceneRoot,
            std::vector<std::string>{
                "artSetups",
                "#day",
                "mokiNpcSetup",
            }
        );

        il2cpp::unity::set_parent(mokk_the_brave_go, metadata->scene->fields.SceneRoot);

        mokk_the_brave_setup_ref = il2cpp::WeakGCRef(mokk_the_brave_go);

        mokk_the_brave_effect = core::reactivity::watch_effect([] {
            update_mokk_the_brave_presence();
        });
    });

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        using namespace randomizer::conditions;
        register_new_setup_intercept({"swampTorchIntroductionA/*setups/*timesOfDay"}, {-1052258879, 1819061226}, make_day_night_applier_intercept_fn(-1052258879, 1819061226));

        register_new_setup_intercept({"swampIntroBottom/artSetups/dayNightSetup"}, {-1815347985, -1605692968}, make_day_night_applier_intercept_fn(-1815347985, -1605692968));

        register_new_setup_intercept(
            {
                "swampIntroTop/timelines/timesOfDayTransition",
                "shoreSearchShot/art/timesOfDayTransition",
            },
            {-598230906, -1926205078},
            make_day_night_applier_intercept_fn(-598230906, -1926205078)
        );

        register_new_setup_intercept(
            {"willOfTheWispsLagoonConnection/artSetups/timesOfDayTransition"},
            {1340727368, -76384365},
            make_day_night_applier_intercept_fn(1340727368, -76384365)
        );

        register_new_setup_intercept(
            {
                "swampWalljumpChallengeA/*setups/*timesOfDay",
                "swampWalljumpChallengeB/*timesOfDay",
                "doubleJumpEscalationB__clone0/*timesOfDay",
            },
            {-1834135337, -949591271},
            make_day_night_applier_intercept_fn(-1834135337, -949591271)
        );

        register_new_setup_intercept(
            {"swampNightcrawlerBshortcut/*setups/timesOfDayTransition"},
            {1001861749, 787945376},
            make_day_night_applier_intercept_fn(1001861749, 787945376)
        );

        // Sword Cutscene rain
        register_new_setup_intercept(
            {"swampGetSpiritBlade/timesOfDayController", "swampGetSpiritBlade/timesOfDayTransition"},
            {-480342150, 907153171},
            make_day_night_applier_intercept_fn(907153171, -480342150)
        );

        // Remove regen tree water and move day water around (288338807 : day, -1643391836 : night).
        register_new_setup_intercept({"swampSaveRoomA/timesOfDayTransition"}, {288338807, -1643391836}, regen_tree);

        // Move howl between modifiers depending on if its day or nighttime. (-1375966924 : day, 1361521887 : night)
        register_new_setup_intercept({"swampNightcrawlerA/artSetups/timesOfDayTransition"}, {-1375966924, 1361521887}, always_spawn_howl);

        register_condition_intercept(ConditionType::SeinAbilityCondition, "swampNightcrawlerCavernD/enemies/enemyActivator", &is_day_condition);
        register_condition_intercept(ConditionType::SeinAbilityCondition, "swampNightcrawlerCavernA/interactives/enemies/enemyActivator", &is_day_condition);
        register_condition_intercept(ConditionType::SeinAbilityCondition, "swampNightcrawlerA/enemies/enemyActivator", &is_day_condition);
        register_condition_intercept(
            ConditionType::SeinAbilityCondition, "swampTorchIntroductionA/enemies/activateAfterSword/enemyActivator", &is_day_condition
        );
        register_condition_intercept(
            ConditionType::SeinAbilityCondition, "swampTorchIntroductionA/enemies/deactivateAfterSword/enemyActivator", &is_day_condition
        );
        register_condition_intercept(
            ConditionType::SeinAbilityCondition, "swampWalljumpChallengeA/enemies/activateAfterSword/enemyActivator", &is_day_condition
        );
        register_condition_intercept(
            ConditionType::SeinAbilityCondition, "swampWalljumpChallengeA/enemies/deactivateAfterSword/enemyActivator", &is_day_condition
        );
        register_condition_intercept(
            ConditionType::SeinAbilityCondition, "swampWalljumpChallengeB/enemies/activateAfterSword/enemyActivator", &is_day_condition
        );
        register_condition_intercept(
            ConditionType::SeinAbilityCondition, "swampWalljumpChallengeB/enemies/deactivateAfterSword/enemyActivator", &is_day_condition
        );
        register_condition_intercept(ConditionType::SeinAbilityCondition, "swampIntroBottom/interactives/enemies/enemyActivator", &is_day_condition);
        register_condition_intercept(ConditionType::SeinAbilityCondition, "swampIntroTop/enemies/activateBasedOnCondition/enemyActivator", &is_day_condition);
        register_condition_intercept(
            ConditionType::SeinAbilityCondition, "willOfTheWispsLagoonConnection/enemies/activateAfterSword/enemyActivator", &is_day_condition
        );
        register_condition_intercept(
            ConditionType::SeinAbilityCondition, "willOfTheWispsLagoonConnection/enemies/deactivateAfterSword/enemyActivator", &is_day_condition
        );
    });
} // namespace
