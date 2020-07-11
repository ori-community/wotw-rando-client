#include <interception_macros.h>
#include <dev/dev_commands.h>
#include <uber_states/state_applier.h>

namespace
{
    IL2CPP_INTERCEPT(, SeinAbilityCondition, bool, Validate, (app::SeinAbilityCondition* this_ptr, app::IContext* context)) {
        if (this_ptr->fields.Ability == app::AbilityType__Enum_Sword)
            return true;
        else
            return SeinAbilityCondition_Validate(this_ptr, context);
    }

    IL2CPP_INTERCEPT(, HasAbilityCondition, bool, Validate, (app::HasAbilityCondition* this_ptr, app::IContext* context)) {
        if (this_ptr->fields.AbilityType == app::AbilityType__Enum_Sword)
            return true;
        else
            return HasAbilityCondition_Validate(this_ptr, context);
    }

    IL2CPP_BINDING(, HasAbilityUberStateCondition, app::AbilityType__Enum, get_AbilityType, (app::HasAbilityUberStateCondition* this_ptr));
    IL2CPP_INTERCEPT(, HasAbilityUberStateCondition, bool, get_HasAbility, (app::HasAbilityUberStateCondition* this_ptr)) {
        if (HasAbilityUberStateCondition_get_AbilityType(this_ptr) == app::AbilityType__Enum_Sword)
            return true;
        else
            return HasAbilityUberStateCondition_get_HasAbility(this_ptr);
    }

    IL2CPP_INTERCEPT(, HasAbilityUberStateCondition, bool, Validate, (app::HasAbilityUberStateCondition* this_ptr)) {
        if (HasAbilityUberStateCondition_get_AbilityType(this_ptr) == app::AbilityType__Enum_Sword)
            return true;
        else
            return HasAbilityUberStateCondition_Validate(this_ptr);
    }

    void initialize_day_night_logic()
    {
       // night -> day
        /*uber_states::register_applier_redirect(-1926205078, -598230906);
        uber_states::register_applier_redirect(1819061226, -1052258879);
        uber_states::register_applier_redirect(-1605692968, -1815347985);
        uber_states::register_applier_redirect(-949591271, -1834135337);
        uber_states::register_applier_redirect(-76384365, 1340727368);
        uber_states::register_applier_redirect(1361521887, -1375966924);
        uber_states::register_applier_redirect(-1643391836, 288338807);
        uber_states::register_applier_redirect(1819061226, -1052258879);
        uber_states::register_applier_redirect(787945376, 1001861749);
        uber_states::register_applier_redirect(1361521887, -1375966924);*/

        // Cutscene rain
        uber_states::register_applier_redirect(-480342150, 907153171);

        // howl: notDefeated -> defeated
        uber_states::register_applier_redirect(1234021711, 620462779);
    }

    IL2CPP_INTERCEPT(, ActivationBasedOnCondition, void, Awake, (app::ActivationBasedOnCondition* this_ptr)) {
        ActivationBasedOnCondition_Awake(this_ptr);
    }

    IL2CPP_INTERCEPT(, SwampNightDayTransition, bool, DayTimeCondition, (app::SwampNightDayTransition* this_ptr)) {
        return true;
    }

    bool override_has_ability = false;
    IL2CPP_INTERCEPT(, SwampNightDayTransition, void, UpdateStateBasedOnCondition, (app::SwampNightDayTransition* this_ptr)) {
        override_has_ability = true;
        SwampNightDayTransition_UpdateStateBasedOnCondition(this_ptr);
        override_has_ability = false;
    }

    IL2CPP_INTERCEPT(, PlayerAbilities, bool, HasAbility, (app::PlayerAbilities* this_ptr, app::AbilityType__Enum ability)) {
        if (override_has_ability && ability == app::AbilityType__Enum_Sword)
            return true;
        else
            return PlayerAbilities_HasAbility(this_ptr, ability);
    }

    CALL_ON_INIT(initialize_day_night_logic);
}
