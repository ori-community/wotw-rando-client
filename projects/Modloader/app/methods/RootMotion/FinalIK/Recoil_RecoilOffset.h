#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Recoil_RecoilOffset.h>
#include <Modloader/app/structs/IKSolverFullBodyBiped.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::RootMotion::FinalIK::Recoil_RecoilOffset {
    IL2CPP_REGISTER_METHOD(0x02A1F3C0, void, Start, (app::Recoil_RecoilOffset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A1F4E0, void, Apply, (app::Recoil_RecoilOffset * this_ptr, app::IKSolverFullBodyBiped* solver, app::Quaternion rotation, float master_weight, float length, float time_left))
    IL2CPP_REGISTER_METHOD(0x02A1F8F0, void, ctor, (app::Recoil_RecoilOffset * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::Recoil_RecoilOffset
