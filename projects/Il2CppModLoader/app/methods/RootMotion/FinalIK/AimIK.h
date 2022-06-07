#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::AimIK {
    IL2CPP_REGISTER_METHOD(0x0204D730, void, OpenUserManual, (app::AimIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204D7F0, void, OpenScriptReference, (app::AimIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204D8B0, void, OpenSetupTutorial, (app::AimIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204D970, void, SupportGroup, (app::AimIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204DA30, void, ASThread, (app::AimIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IKSolver *, GetIKSolver, (app::AimIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204DAF0, void, ctor, (app::AimIK * this_ptr))
}
