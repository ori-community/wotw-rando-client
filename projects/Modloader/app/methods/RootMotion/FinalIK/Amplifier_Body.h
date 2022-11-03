#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::Amplifier_Body {
    IL2CPP_REGISTER_METHOD(0x0204E460, void, Update, (app::Amplifier_Body * this_ptr, app::IKSolverFullBodyBiped* solver, float w, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0204EC50, app::Vector3, Multiply, (app::Vector3 v1, app::Vector3 v2))
    IL2CPP_REGISTER_METHOD(0x0204ECB0, void, ctor, (app::Amplifier_Body * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::Amplifier_Body
