#include <macros.h>
#include <game/player.h>
#include <interop/csharp_bridge.h>
#include <randomizer/conditions/new_setup_state_override.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

bool disable_has_ability_overwrite = false;

namespace
{
    int time_override = 2;
    bool is_day()
    {
        bool day_time = time_override == 1;
        if (time_override == 2)
            day_time = csharp_bridge::is_day_time();

        return day_time;
    }

    IL2CPP_BINDING(UnityEngine, GameObject, app::Transform*, get_transform, (app::GameObject* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, void, SetParent, (app::Transform* this_ptr, app::Transform* parent, bool world_position_stays));

    // Fix for Lupo in Marsh not selling map.
    NESTED_IL2CPP_INTERCEPT(, QuestNodeSetup, QuestInteraction, bool, get_Eligible, (app::QuestNodeSetup_QuestInteraction* this_ptr)) {
        time_override = 1;
        auto ret = QuestNodeSetup::QuestInteraction::get_Eligible(this_ptr);
        time_override = 2;
        return ret;
    }

    bool can_resolve(app::SetupStateModifier* item)
    {
        return item->fields.Target != nullptr &&
            il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "get_HasAReference")->fields &&
            il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "CanResolve", nullptr)->fields;
    }

    void find_day_night(app::List_1_SetupStateModifier___Fields& modifiers, app::GameObject*& day, app::GameObject*& night)
    {
        for (auto i = 0; i < modifiers._size && (day == nullptr || night == nullptr); ++i)
        {
            auto item = modifiers._items->vector[i];
            // #nightTime
            if (item->fields.ModifierGUID == 0x39b90803 && can_resolve(item))
                night = il2cpp::invoke<app::GameObject>(item->fields.Target, "Resolve", nullptr);

            // #dayTime
            if (item->fields.ModifierGUID == 0xb4c1c837 && can_resolve(item))
                day = il2cpp::invoke<app::GameObject>(item->fields.Target, "Resolve", nullptr);
        }
    }

    int32_t move_water(app::NewSetupStateController* this_ptr, std::string const&, int32_t state, int32_t)
    {
        if (uber_states::get_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, 4))
            return state;

        state = is_day() ? 288338807 : -1643391836;
        auto& modifiers = this_ptr->fields.StateHolder->fields.Modifiers->fields;
        app::GameObject* day = nullptr;
        app::GameObject* night = nullptr;
        find_day_night(modifiers, day, night);
        if (day != nullptr && night != nullptr)
        {
            auto water_in_day = false;
            auto children = il2cpp::unity::get_children(day);
            for (auto child : children)
            {
                auto name = il2cpp::unity::get_object_name(child);
                if (name == "waterCorrupted" ||
                    name == "waterClean" ||
                    name == "waterfalls" ||
                    name == "foregroundBottom")
                {
                    water_in_day = true;
                    break;
                }
            }

            if (water_in_day && state == -1643391836)
            {
                // Remove undesired objects from night.
                children = il2cpp::unity::get_children(night);
                for (auto child : children)
                {
                    auto name = il2cpp::unity::get_object_name(child);
                    if (name != "radialGlow" &&
                        name != "glows" &&
                        name != "fogs" &&
                        name != "masks" &&
                        name != "soundNightState")
                        il2cpp::unity::destroy_object(child);
                }

                // Move desired from day.
                auto night_transform = GameObject::get_transform(night);
                children = il2cpp::unity::get_children(day);
                for (auto child : children)
                {
                    auto name = il2cpp::unity::get_object_name(child);
                    if (name == "waterCorrupted" ||
                        name == "waterClean" ||
                        name == "waterfalls" ||
                        name == "foregroundBottom")
                    {
                        auto child_transform = GameObject::get_transform(child);
                        Transform::SetParent(child_transform, night_transform, true);
                    }
                }

                water_in_day = false;
            }
            else if (!water_in_day && state == 288338807)
            {
                // Move desired from night.
                auto day_transform = GameObject::get_transform(day);
                children = il2cpp::unity::get_children(night);
                for (auto child : children)
                {
                    auto name = il2cpp::unity::get_object_name(child);
                    if (name == "waterCorrupted" ||
                        name == "waterClean" ||
                        name == "waterfalls" ||
                        name == "foregroundBottom")
                    {
                        auto child_transform = GameObject::get_transform(child);
                        Transform::SetParent(child_transform, day_transform, true);
                    }
                }

                water_in_day = true;
            }
        }

        return state;
    }

    int32_t should_howl_exist(app::NewSetupStateController*, std::string const&, int32_t, int32_t)
    {
        return csharp_bridge::does_howl_exist() ? 1234021711 : 620462779;
    }

    int32_t move_howl(app::NewSetupStateController* this_ptr, std::string const&, int32_t state, int32_t)
    {
        state = is_day() ? -1375966924 : 1361521887;
        auto setup = il2cpp::unity::get_game_object(il2cpp::unity::get_parent(il2cpp::unity::get_transform(this_ptr)));
        auto moki = il2cpp::unity::find_child(setup, { std::string_view("#day"), "mokiNpcSetup" });
        if (il2cpp::unity::is_valid(moki))
        {
            il2cpp::unity::set_parent(moki, setup);
            il2cpp::unity::set_active(moki, true);
        }

        auto howl = il2cpp::unity::find_child(setup, { std::string_view("#night"), "nightcrawlerChase" });
        if (il2cpp::unity::is_valid(howl))
        {
            il2cpp::unity::set_parent(howl, setup);
            il2cpp::unity::set_active(howl, true);
        }

        return state;
    }

    void initialize_day_night_logic()
    {
        randomizer::conditions::register_new_setup_intercept({ "swampTorchIntroductionA/*setups/*timesOfDay" }, { -1052258879, 1819061226 }, [](auto, auto, auto, auto) -> int32_t {
            return is_day() ? -1052258879 : 1819061226;
        });

        randomizer::conditions::register_new_setup_intercept({ "swampIntroBottom/artSetups/dayNightSetup" }, { -1815347985, -1605692968 }, [](auto, auto, auto, auto) -> int32_t {
            return is_day() ? -1815347985 : -1605692968;
        });

        randomizer::conditions::register_new_setup_intercept({
                "swampIntroTop/timelines/timesOfDayTransition",
                "shoreSearchShot/art/timesOfDayTransition",
            }, { -598230906, -1926205078 }, [](auto, auto, auto, auto) -> int32_t { return is_day() ? -598230906 : -1926205078; }
        );

        randomizer::conditions::register_new_setup_intercept({ "willOfTheWispsLagoonConnection/artSetups/timesOfDayTransition" }, { 1340727368, -76384365 }, [](auto, auto, auto, auto) -> int32_t {
            return is_day() ? 1340727368 : -76384365;
        });

        randomizer::conditions::register_new_setup_intercept({
                "swampWalljumpChallengeA/*setups/*timesOfDay",
                "doubleJumpEscalationB__clone0/*timesOfDay"
            }, { -1834135337, -949591271 }, [](auto, auto, auto, auto) -> int32_t { return is_day() ? -1834135337 : -949591271; }
        );
        

        randomizer::conditions::register_new_setup_intercept({ "swampNightcrawlerBshortcut/*setups/timesOfDayTransition" }, { 1001861749, 787945376 }, [](auto, auto, auto, auto) -> int32_t {
            return is_day() ? 1001861749 : 787945376;
        });
        
        // Sword Cutscene rain
        randomizer::conditions::register_new_setup_intercept({ "swampGetSpiritBlade/timesOfDayController" }, { -480342150, 907153171 }, [](auto, auto, auto, auto) -> int32_t {
            return is_day() ? 907153171 : -480342150;
        });

        // Remove regen tree water and move day water around (288338807 : day, -1643391836 : night).
        randomizer::conditions::register_new_setup_intercept({ "swampSaveRoomA/timesOfDayTransition" },
            { 288338807, -1643391836 }, move_water);

        // Move howl between modifiers depending on if its day or night time. (-1375966924 : day, 1361521887 : night)
        randomizer::conditions::register_new_setup_intercept({ "swampNightcrawlerA/artSetups/timesOfDayTransition" },
            { -1375966924, 1361521887 }, move_howl);

        // howl: (1234021711 : notDefeated, 620462779 : defeated)
        randomizer::conditions::register_new_setup_intercept({ "swampNightcrawlerA/artSetups/nightcrawlerChase/nightcrawlerStateController", },
            { 1234021711 }, should_howl_exist);
    }

    IL2CPP_INTERCEPT(, SwampNightDayTransition, bool, DayTimeCondition, (app::SwampNightDayTransition* this_ptr)) {
        return is_day();
    }

    bool override_has_ability = false;
    IL2CPP_INTERCEPT(, SwampNightDayTransition, void, UpdateStateBasedOnCondition, (app::SwampNightDayTransition* this_ptr)) {
        modloader::ScopedSetter setter(override_has_ability, true);
        SwampNightDayTransition::UpdateStateBasedOnCondition(this_ptr);
    }

    IL2CPP_INTERCEPT(, PlayerAbilities, bool, HasAbility, (app::PlayerAbilities* this_ptr, app::AbilityType__Enum ability)) {
        if (override_has_ability)
            return is_day();
    
        return PlayerAbilities::HasAbility(this_ptr, ability);
    }

    CALL_ON_INIT(initialize_day_night_logic);
}
