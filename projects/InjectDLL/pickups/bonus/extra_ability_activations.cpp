#include <macros.h>
#include <interception_macros.h>

namespace
{
    int extra_jumps = 0;
    IL2CPP_INTERCEPT(, SeinDoubleJump, int32_t, get_ExtraJumpsAvailable, (app::SeinDoubleJump* this_ptr)) {
        return extra_jumps + SeinDoubleJump::get_ExtraJumpsAvailable(this_ptr);
    }

    int extra_dashes = 0;
    int dashes_used = 0;
    IL2CPP_INTERCEPT(, SeinDashNew, void, TryPerformDash, (app::SeinDashNew* this_ptr, int32_t direction, bool is_forward)) {
        SeinDashNew::TryPerformDash(this_ptr, direction, is_forward);
        if (this_ptr->fields.m_isDashing)
            ++dashes_used;
    }

    IL2CPP_INTERCEPT(, SeinDashNew, void, UpdateAllowDashFlag, (app::SeinDashNew* this_ptr)) {
        this_ptr->fields.m_allowDash = false;
        SeinDashNew::UpdateAllowDashFlag(this_ptr);
        if (this_ptr->fields.m_allowDash)
            dashes_used = 0;
        else
            this_ptr->fields.m_allowDash = dashes_used <= extra_dashes;
    }

    IL2CPP_INTERCEPT(, SeinDashNew, void, OnResetAirLimits, (app::SeinDashNew* this_ptr)) {
        SeinDashNew::OnResetAirLimits(this_ptr);
        dashes_used = 0;
    }

    IL2CPP_INTERCEPT(, SeinDashNew, void, ResetDash, (app::SeinDashNew* this_ptr, bool reset_cooldown)) {
        SeinDashNew::ResetDash(this_ptr, reset_cooldown);
        dashes_used = 0;
    }
}

INJECT_C_DLLEXPORT void set_extra_jumps(int value)
{
    extra_jumps = value;
}

INJECT_C_DLLEXPORT void set_extra_dashes(int value)
{
    extra_dashes = value;
}
