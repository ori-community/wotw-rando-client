#include <macros.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/interception_macros.h>

namespace
{
    uber_states::UberState jumps(UberStateGroup::RandoUpgrade, 35);
    uber_states::UberState dashes(UberStateGroup::RandoUpgrade, 36);
    int extra_jumps = 0;

    IL2CPP_INTERCEPT(, SeinDoubleJump, int32_t, get_ExtraJumpsAvailable, (app::SeinDoubleJump* this_ptr)) {
        return jumps.get<int>() + get_ExtraJumpsAvailable(this_ptr);
    }

    int extra_dashes = 0;
    int dashes_used = 0;
    IL2CPP_INTERCEPT(, SeinDashNew, void, TryPerformDash, (app::SeinDashNew* this_ptr, int32_t direction, bool is_forward)) {
        TryPerformDash(this_ptr, direction, is_forward);
        if (this_ptr->fields.m_isDashing && !this_ptr->fields.m_allowDash)
            ++dashes_used;
    }

    IL2CPP_INTERCEPT(, SeinDashNew, void, UpdateAllowDashFlag, (app::SeinDashNew* this_ptr)) {
        this_ptr->fields.m_allowDash = false;
        UpdateAllowDashFlag(this_ptr);
        if (this_ptr->fields.m_allowDash)
            dashes_used = 0;
        else
            this_ptr->fields.m_allowDash = dashes_used <= dashes.get<int>();
    }

    IL2CPP_INTERCEPT(, SeinDashNew, void, OnResetAirLimits, (app::SeinDashNew* this_ptr)) {
        OnResetAirLimits(this_ptr);
        dashes_used = 0;
    }

    IL2CPP_INTERCEPT(, SeinDashNew, void, ResetDash, (app::SeinDashNew* this_ptr, bool reset_cooldown)) {
        ResetDash(this_ptr, reset_cooldown);
        dashes_used = 0;
    }

    // For some reason this doesn't use the ResetDash function but sets the member fields directly.
    IL2CPP_INTERCEPT(, SeinLogicCycle, void, ResetMovementAbilities, (app::SeinLogicCycle* this_ptr)) {
        ResetMovementAbilities(this_ptr);
        dashes_used = 0;
    }
}
