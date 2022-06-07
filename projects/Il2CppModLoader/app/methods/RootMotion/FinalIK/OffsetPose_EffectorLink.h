#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::OffsetPose_EffectorLink {
    IL2CPP_REGISTER_METHOD(0x02A19460, void, Apply, (app::OffsetPose_EffectorLink * this_ptr, app::IKSolverFullBodyBiped * solver, float weight, app::Quaternion rotation))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OffsetPose_EffectorLink * this_ptr))
}
