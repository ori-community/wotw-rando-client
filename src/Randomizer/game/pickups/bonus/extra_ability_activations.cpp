#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/SeinDashNew.h>
#include <Modloader/app/methods/SeinDoubleJump.h>
#include <Modloader/app/methods/SeinLogicCycle.h>
#include <Modloader/app/methods/SeinChargeJump.h>
#include <Modloader/interception_macros.h>

namespace {
    core::api::uber_states::UberState extra_jumps(UberStateGroup::RandoUpgrade, 35);
    core::api::uber_states::UberState extra_dashes(UberStateGroup::RandoUpgrade, 36);
    core::api::uber_states::UberState extra_launches(UberStateGroup::RandoUpgrade, 39);

    IL2CPP_INTERCEPT(int32_t, SeinDoubleJump, get_ExtraJumpsAvailable) {
        return extra_jumps.get<int>() + next::SeinDoubleJump::get_ExtraJumpsAvailable();
    }

    int dashes_used = 0;
    int launches_used = 0;
    IL2CPP_INTERCEPT(void, SeinDashNew, TryPerformDash_2, app::SeinDashNew * this_ptr, int32_t direction, bool is_forward) {
        next::SeinDashNew::TryPerformDash_2(this_ptr, direction, is_forward);
        if (this_ptr->fields.m_isDashing && !this_ptr->fields.m_allowDash)
            ++dashes_used;
    }

    IL2CPP_INTERCEPT(void, SeinDashNew, UpdateAllowDashFlag, app::SeinDashNew * this_ptr) {
        this_ptr->fields.m_allowDash = false;
        next::SeinDashNew::UpdateAllowDashFlag(this_ptr);
        if (this_ptr->fields.m_allowDash)
            dashes_used = 0;
        else
            this_ptr->fields.m_allowDash = dashes_used <= extra_dashes.get<int>();
    }

    IL2CPP_INTERCEPT(void, SeinDashNew, OnResetAirLimits, app::SeinDashNew * this_ptr) {
        next::SeinDashNew::OnResetAirLimits(this_ptr);
        dashes_used = 0;
    }

    IL2CPP_INTERCEPT(void, SeinDashNew, ResetDash, app::SeinDashNew * this_ptr, bool reset_cooldown) {
        next::SeinDashNew::ResetDash(this_ptr, reset_cooldown);
        dashes_used = 0;
    }

    // For some reason this doesn't use the ResetDash function but sets the member fields directly.
    IL2CPP_INTERCEPT(void, SeinLogicCycle, ResetMovementAbilities, app::SeinLogicCycle * this_ptr) {
        next::SeinLogicCycle::ResetMovementAbilities(this_ptr);
        dashes_used = 0;
        launches_used = 0;
    }

    IL2CPP_INTERCEPT(void, SeinChargeJump, Land, app::SeinChargeJump * this_ptr) {
        next::SeinChargeJump::Land(this_ptr);
        launches_used = 0;
    }

    IL2CPP_INTERCEPT(bool, SeinChargeJump, get_CanCharge, app::SeinChargeJump * this_ptr) {
        if (this_ptr->fields._WasGroundedSinceLastExecution_k__BackingField) {
            launches_used = 0;
        }
        return next::SeinChargeJump::get_CanCharge(this_ptr) || launches_used <= extra_launches.get<int>();
    }

    IL2CPP_INTERCEPT(void, SeinChargeJump, OnEnterJumping, app::SeinChargeJump * this_ptr) {
        next::SeinChargeJump::OnEnterJumping(this_ptr);
        ++launches_used;
    }

    // reverse launch
    // IL2CPP_INTERCEPT(void, SeinChargeJump, Jump, app::SeinChargeJump * this_ptr, app::Vector2 direction) {
    //     direction.x *= -1;
    //     direction.y *= -1;
    //     next::SeinChargeJump::Jump(this_ptr, direction);
    // }

} // namespace
