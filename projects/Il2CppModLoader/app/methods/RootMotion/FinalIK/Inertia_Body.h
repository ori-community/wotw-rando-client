#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::Inertia_Body {
    IL2CPP_REGISTER_METHOD(0x02A06890, void, Reset, (app::Inertia_Body * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A06A70, void, Update, (app::Inertia_Body * this_ptr, app::IKSolverFullBodyBiped * solver, float weight, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02A07120, void, ctor, (app::Inertia_Body * this_ptr))
}
