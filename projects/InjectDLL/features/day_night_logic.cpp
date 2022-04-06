#include <macros.h>
#include <game/player.h>
#include <interop/csharp_bridge.h>
#include <uber_states/state_applier.h>
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
        if (time_override == 2)
            return csharp_bridge::is_day_time();
        else
            return time_override == 1;
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

    // Fix for weapon wheel.
    //IL2CPP_INTERCEPT(, CleverMenuItemSelectionManager, app::CleverMenuItem*, get_CleverMenuItemUnderCursor, (app::CleverMenuItemSelectionManager* this_ptr)) {
    //    disable_has_ability_overwrite = true;
    //    auto ret = CleverMenuItemSelectionManager::get_CleverMenuItemUnderCursor(this_ptr);
    //    disable_has_ability_overwrite = false;
    //    return ret;
    //}

    // This is stupid and bad code but who cares nowdays.
    app::HasAbilityCondition* sword_wheel_condition = nullptr;
    IL2CPP_INTERCEPT(, CleverMenuItem, bool, get_IsVisible, (app::CleverMenuItem* this_ptr)) {
        auto* condition = this_ptr->fields.Visible;
        if (condition != nullptr && il2cpp::is_assignable(condition, "", "HasAbilityCondition"))
        {
            auto c = reinterpret_cast<app::HasAbilityCondition*>(condition);
            if (c->fields.AbilityType == app::AbilityType__Enum_Sword)
                sword_wheel_condition = c;
        }

        return CleverMenuItem::get_IsVisible(this_ptr);
    }

    
    IL2CPP_INTERCEPT(, SeinAbilityCondition, bool, Validate, (app::SeinAbilityCondition* this_ptr, app::IContext* context)) {
        if (!disable_has_ability_overwrite && this_ptr->fields.Ability == app::AbilityType__Enum_Sword)
            return is_day();

        return game::player::has_ability(this_ptr->fields.Ability);
    }

    IL2CPP_INTERCEPT(, HasAbilityCondition, bool, Validate, (app::HasAbilityCondition* this_ptr, app::IContext* context)) {
        if (sword_wheel_condition != this_ptr && !disable_has_ability_overwrite && this_ptr->fields.AbilityType == app::AbilityType__Enum_Sword)
            return is_day();

        return game::player::has_ability(this_ptr->fields.AbilityType);
    }

    IL2CPP_BINDING(, HasAbilityUberStateCondition, app::AbilityType__Enum, get_AbilityType, (app::HasAbilityUberStateCondition* this_ptr));
    IL2CPP_INTERCEPT(, HasAbilityUberStateCondition, bool, get_HasAbility, (app::HasAbilityUberStateCondition* this_ptr)) {
        if (!disable_has_ability_overwrite && HasAbilityUberStateCondition::get_AbilityType(this_ptr) == app::AbilityType__Enum_Sword)
            return is_day();

        return game::player::has_ability(HasAbilityUberStateCondition::get_AbilityType(this_ptr));
    }

    IL2CPP_INTERCEPT(, HasAbilityUberStateCondition, bool, Validate, (app::HasAbilityUberStateCondition* this_ptr)) {
        const auto booleans = this_ptr->fields._.Data->fields.Booleans;
        const auto comparator = booleans->fields._items->vector[0];
        if (!disable_has_ability_overwrite && HasAbilityUberStateCondition::get_AbilityType(this_ptr) == app::AbilityType__Enum_Sword)
            return comparator == is_day();

        return comparator == game::player::has_ability(HasAbilityUberStateCondition::get_AbilityType(this_ptr));
    }

    void find_day_night(app::List_1_SetupStateModifier___Fields& modifiers, app::GameObject*& day, app::GameObject*& night)
    {
        for (auto i = 0; i < modifiers._size; ++i)
        {
            auto item = modifiers._items->vector[i];
            // #nightTime
            if (item->fields.ModifierGUID == 0x39b90803)
            {
                if (item->fields.Target != nullptr &&
                    il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "get_HasAReference")->fields &&
                    il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "CanResolve", nullptr)->fields)
                    night = il2cpp::invoke<app::GameObject>(item->fields.Target, "Resolve", nullptr);

                if (day != nullptr)
                    break;
            }

            // #dayTime
            if (item->fields.ModifierGUID == 0xb4c1c837)
            {
                if (item->fields.Target != nullptr &&
                    il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "get_HasAReference")->fields &&
                    il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "CanResolve", nullptr)->fields)
                    day = il2cpp::invoke<app::GameObject>(item->fields.Target, "Resolve", nullptr);

                if (night != nullptr)
                    break;
            }
        }
    }

    void initialize_day_night_logic()
    {
        // Cutscene rain
        uber_states::register_applier_intercept({ {"", -480342150}, {"", 907153171} }, [](auto, auto, auto, auto) -> int32_t {
            return is_day() ? 907153171 : -480342150;
        });

        // Remove regen tree water and move day water around (288338807 : day, -1643391836 : night).
        uber_states::register_applier_intercept({ { "", 288338807 }, { "", -1643391836 } }, [](auto this_ptr, auto, auto state, auto) -> int32_t {
            if (uber_states::get_uber_state_value(uber_states::constants::RANDO_CONFIG_GROUP_ID, 4))
                return state;

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
        });

        // Move howl between modifiers depending on if its day or night time. (-1375966924 : day, 1361521887 : night)
        uber_states::register_applier_intercept({ { "", -1375966924 }, { "", 1361521887 } }, [](auto this_ptr, auto, auto state, auto) -> int32_t {
            // #day
            auto move_to_id = 0x787c7226;
            // #night
            auto move_from_id = 0x7abccb8b;
            if (state == 1361521887)
            {
                auto temp = move_to_id;
                move_to_id = move_from_id;
                move_from_id = temp;
            }

            auto modifiers = this_ptr->fields.StateHolder->fields.Modifiers->fields;
            app::GameObject* move_to = nullptr;
            app::GameObject* crawler = nullptr;
            bool found = false;
            for (auto i = 0; i < modifiers._size; ++i)
            {
                auto item = modifiers._items->vector[i];
                if (item->fields.ModifierGUID == move_to_id)
                {
                    if (item->fields.Target != nullptr &&
                        il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "get_HasAReference")->fields &&
                        il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "CanResolve", nullptr)->fields)
                    {
                        auto target = il2cpp::invoke<app::GameObject>(item->fields.Target, "Resolve", nullptr);
                        auto children = il2cpp::unity::get_children(target);
                        for (auto child : children)
                        {
                            auto name = il2cpp::unity::get_object_name(child);
                            if (name == "nightcrawlerChase")
                            {
                                found = true;
                                break;
                            }
                        }

                        move_to = target;
                    }

                    if (crawler != nullptr)
                        break;
                }
                else if (item->fields.ModifierGUID == move_from_id)
                {
                    if (item->fields.Target != nullptr &&
                        il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "get_HasAReference")->fields &&
                        il2cpp::invoke<app::Boolean__Boxed>(item->fields.Target, "CanResolve", nullptr)->fields)
                    {
                        auto target = il2cpp::invoke<app::GameObject>(item->fields.Target, "Resolve", nullptr);
                        auto children = il2cpp::unity::get_children(target);
                        for (auto child : children)
                        {
                            auto name = il2cpp::unity::get_object_name(child);
                            if (name == "nightcrawlerChase")
                            {
                                crawler = child;
                                break;
                            }
                        }
                    }
                }
            }

            if (!found && crawler != nullptr && move_to != nullptr)
            {
                auto crawler_transform = GameObject::get_transform(crawler);
                auto move_to_transform = GameObject::get_transform(move_to);
                Transform::SetParent(crawler_transform, move_to_transform, true);
            }

            return state;
        });

        // howl: (1234021711 : notDefeated, 620462779 : defeated)
        uber_states::register_applier_intercept({ "", 1234021711 }, [](auto this_ptr, auto, auto, auto) -> int32_t {
            if (csharp_bridge::does_howl_exist())
                return 1234021711;
            else
                return 620462779;
        });
    }

    IL2CPP_INTERCEPT(, SwampNightDayTransition, bool, DayTimeCondition, (app::SwampNightDayTransition* this_ptr)) {
        return is_day();
    }

    bool override_has_ability = false;
    IL2CPP_INTERCEPT(, SwampNightDayTransition, void, UpdateStateBasedOnCondition, (app::SwampNightDayTransition* this_ptr)) {
        override_has_ability = true;
        SwampNightDayTransition::UpdateStateBasedOnCondition(this_ptr);
        override_has_ability = false;
    }

    IL2CPP_INTERCEPT(, PlayerAbilities, bool, HasAbility, (app::PlayerAbilities* this_ptr, app::AbilityType__Enum ability)) {
        if (override_has_ability && ability == app::AbilityType__Enum_Sword)
            return is_day();

        return PlayerAbilities::HasAbility(this_ptr, ability);
    }

    CALL_ON_INIT(initialize_day_night_logic);
}
