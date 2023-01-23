#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OriHeadIk.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/MoonAnimator.h>

namespace app::classes::Moon::OriHeadIk {
    IL2CPP_REGISTER_METHOD(0x00C30950, bool, get_CanApplyIk, (app::OriHeadIk * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C30E10, void, Start, (app::OriHeadIk * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C31050, void, SubmitLookTarget, (app::OriHeadIk * this_ptr, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x00C31110, void, OnAddedToAnimator, (app::OriHeadIk * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x00C31390, void, Process, (app::OriHeadIk * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00C31B70, void, OnDrawGizmosSelected, (app::OriHeadIk * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C31F10, void, ctor, (app::OriHeadIk * this_ptr))
} // namespace app::classes::Moon::OriHeadIk
