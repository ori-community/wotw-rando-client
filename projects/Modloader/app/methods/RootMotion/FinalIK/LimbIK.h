#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LimbIK.h>
#include <Modloader/app/structs/IKSolver.h>

namespace app::classes::RootMotion::FinalIK::LimbIK {
    IL2CPP_REGISTER_METHOD(0x02A17870, void, OpenUserManual, (app::LimbIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A17930, void, OpenScriptReference, (app::LimbIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A179F0, void, SupportGroup, (app::LimbIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A17AB0, void, ASThread, (app::LimbIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IKSolver*, GetIKSolver, (app::LimbIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A17B70, void, ctor, (app::LimbIK * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::LimbIK
