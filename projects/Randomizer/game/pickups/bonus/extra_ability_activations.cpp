#include <Randomizer/macros.h>
#include <Core/uber_states/uber_state_interface.h>

#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/SeinDoubleJump.h>
#include <Modloader/app/methods/SeinDashNew.h>
#include <Modloader/app/methods/SeinLogicCycle.h>

namespace {
    uber_states::UberState jumps(UberStateGroup::RandoUpgrade, 35);
    uber_states::UberState dashes(UberStateGroup::RandoUpgrade, 36);

    IL2CPP_INTERCEPT(SeinDoubleJump, int32_t, get_ExtraJumpsAvailable, ()) {
        return jumps.get<int>() + next::SeinDoubleJump::get_ExtraJumpsAvailable();
    }

    int dashes_used = 0;
    IL2CPP_INTERCEPT(SeinDashNew, void, TryPerformDash_2, (app::SeinDashNew * this_ptr, int32_t direction, bool is_forward)) {
        next::SeinDashNew::TryPerformDash_2(this_ptr, direction, is_forward);
        if (this_ptr->fields.m_isDashing && !this_ptr->fields.m_allowDash)
            ++dashes_used;
    }

    IL2CPP_INTERCEPT(SeinDashNew, void, UpdateAllowDashFlag, (app::SeinDashNew * this_ptr)) {
        this_ptr->fields.m_allowDash = false;
        next::SeinDashNew::UpdateAllowDashFlag(this_ptr);
        if (this_ptr->fields.m_allowDash)
            dashes_used = 0;
        else
            this_ptr->fields.m_allowDash = dashes_used <= dashes.get<int>();
    }

    IL2CPP_INTERCEPT(SeinDashNew, void, OnResetAirLimits, (app::SeinDashNew * this_ptr)) {
    next::SeinDashNew::OnResetAirLimits(this_ptr);
        dashes_used = 0;
    }

    IL2CPP_INTERCEPT(SeinDashNew, void, ResetDash, (app::SeinDashNew * this_ptr, bool reset_cooldown)) {
        next::SeinDashNew::ResetDash(this_ptr, reset_cooldown);
        dashes_used = 0;
    }

    // For some reason this doesn't use the ResetDash function but sets the member fields directly.
    IL2CPP_INTERCEPT(SeinLogicCycle, void, ResetMovementAbilities, (app::SeinLogicCycle * this_ptr)) {
        next::SeinLogicCycle::ResetMovementAbilities(this_ptr);
        dashes_used = 0;
    }
} // namespace
