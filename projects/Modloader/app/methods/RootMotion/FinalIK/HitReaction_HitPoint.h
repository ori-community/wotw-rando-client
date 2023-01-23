#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HitReaction_HitPoint.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/IKSolverFullBodyBiped.h>

namespace app::classes::RootMotion::FinalIK::HitReaction_HitPoint {
    IL2CPP_REGISTER_METHOD(0x00E2F880, float, get_crossFader, (app::HitReaction_HitPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012219F0, void, set_crossFader, (app::HitReaction_HitPoint * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00C3DD50, float, get_timer, (app::HitReaction_HitPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3DD60, void, set_timer, (app::HitReaction_HitPoint * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x020763D0, app::Vector3, get_force, (app::HitReaction_HitPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020763F0, void, set_force, (app::HitReaction_HitPoint * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x0168C6F0, app::Vector3, get_point, (app::HitReaction_HitPoint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02071D10, void, set_point, (app::HitReaction_HitPoint * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x02076400, void, Hit, (app::HitReaction_HitPoint * this_ptr, app::Vector3 force, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x02076560, void, Apply, (app::HitReaction_HitPoint * this_ptr, app::IKSolverFullBodyBiped* solver, float weight))
    IL2CPP_REGISTER_METHOD(0x02076780, void, ctor, (app::HitReaction_HitPoint * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::HitReaction_HitPoint
