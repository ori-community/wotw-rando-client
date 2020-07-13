#include <macros.h>
#include <interception_macros.h>
#include <il2cpp_helpers.h>
#include <dev/dev_commands.h>
#include <uber_states/state_applier.h>

namespace
{
    bool is_day = false;
    bool disable_has_ability_overwrite = false;
    IL2CPP_BINDING(UnityEngine, GameObject, app::Transform*, get_transform, (app::GameObject* this_ptr));
    IL2CPP_BINDING(UnityEngine, Transform, void, SetParent, (app::Transform* this_ptr, app::Transform* parent, bool world_position_stays));

    IL2CPP_INTERCEPT(, CleverMenuItemSelectionManager, app::CleverMenuItem*, get_CleverMenuItemUnderCursor, (app::CleverMenuItemSelectionManager* this_ptr)) {
        disable_has_ability_overwrite = true;
        auto ret = CleverMenuItemSelectionManager::get_CleverMenuItemUnderCursor(this_ptr);
        disable_has_ability_overwrite = false;
        return ret;
    }

    IL2CPP_INTERCEPT(, SeinAbilityCondition, bool, Validate, (app::SeinAbilityCondition* this_ptr, app::IContext* context)) {
        if (this_ptr->fields.Ability == app::AbilityType__Enum_Sword)
            return is_day;
        else
            return SeinAbilityCondition::Validate(this_ptr, context);
    }

    IL2CPP_INTERCEPT(, HasAbilityCondition, bool, Validate, (app::HasAbilityCondition* this_ptr, app::IContext* context)) {
        if (!disable_has_ability_overwrite && this_ptr->fields.AbilityType == app::AbilityType__Enum_Sword)
            return is_day;
        else
            return HasAbilityCondition::Validate(this_ptr, context);
    }

    IL2CPP_BINDING(, HasAbilityUberStateCondition, app::AbilityType__Enum, get_AbilityType, (app::HasAbilityUberStateCondition* this_ptr));
    IL2CPP_INTERCEPT(, HasAbilityUberStateCondition, bool, get_HasAbility, (app::HasAbilityUberStateCondition* this_ptr)) {
        if (HasAbilityUberStateCondition::get_AbilityType(this_ptr) == app::AbilityType__Enum_Sword)
            return is_day;
        else
            return HasAbilityUberStateCondition::get_HasAbility(this_ptr);
    }

    IL2CPP_INTERCEPT(, HasAbilityUberStateCondition, bool, Validate, (app::HasAbilityUberStateCondition* this_ptr)) {
        if (HasAbilityUberStateCondition::get_AbilityType(this_ptr) == app::AbilityType__Enum_Sword)
        {
            auto booleans = this_ptr->fields._.Data->fields.Booleans;
            return booleans->fields._items->vector[0] == is_day;
        }
        else
            return HasAbilityUberStateCondition::Validate(this_ptr);
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
        uber_states::register_applier_intercept({ -480342150, 907153171 }, [](auto, auto, auto) -> int32_t {
            return is_day ? 907153171 : -480342150;
        });

        // Remove regen tree water and move day water around (288338807 : day, -1643391836 : night).
        uber_states::register_applier_intercept({ 288338807, -1643391836 }, [](app::NewSetupStateController* this_ptr, int32_t state, auto) -> int32_t {
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
                            Transform::SetParent(child_transform, day_transform, true);
                        }
                    }

                    water_in_day = true;
                }
            }
            return state;
        });

        // Move howl between modifiers depending on if its day or night time. (-1375966924 : day, 1361521887 : night)
        uber_states::register_applier_intercept({ -1375966924, 1361521887 }, [](app::NewSetupStateController* this_ptr, int32_t state, auto) -> int32_t {
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

        // howl: notDefeated -> defeated
        //uber_states::register_applier_redirect(1234021711, 620462779);
    }

    IL2CPP_INTERCEPT(, SwampNightDayTransition, bool, DayTimeCondition, (app::SwampNightDayTransition* this_ptr)) {
        return is_day;
    }

    bool override_has_ability = false;
    IL2CPP_INTERCEPT(, SwampNightDayTransition, void, UpdateStateBasedOnCondition, (app::SwampNightDayTransition* this_ptr)) {
        override_has_ability = true;
        SwampNightDayTransition::UpdateStateBasedOnCondition(this_ptr);
        override_has_ability = false;
    }

    IL2CPP_INTERCEPT(, PlayerAbilities, bool, HasAbility, (app::PlayerAbilities* this_ptr, app::AbilityType__Enum ability)) {
        if (override_has_ability && ability == app::AbilityType__Enum_Sword)
            return is_day;
        else
            return PlayerAbilities::HasAbility(this_ptr, ability);
    }

    CALL_ON_INIT(initialize_day_night_logic);
}

INJECT_C_DLLEXPORT void set_ori_time(bool day) {
    is_day = day;
}
