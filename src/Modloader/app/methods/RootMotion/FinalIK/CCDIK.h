#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CCDIK.h>
#include <Modloader/app/structs/IKSolver.h>

namespace app::classes::RootMotion::FinalIK::CCDIK {
    IL2CPP_REGISTER_METHOD(0x020517C0, void, OpenUserManual, app::CCDIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02051880, void, OpenScriptReference, app::CCDIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02051940, void, SupportGroup, app::CCDIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02051A00, void, ASThread, app::CCDIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IKSolver*, GetIKSolver, app::CCDIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02051AC0, void, ctor, app::CCDIK* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::CCDIK
