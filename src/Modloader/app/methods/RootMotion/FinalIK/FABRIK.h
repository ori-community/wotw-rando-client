#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FABRIK.h>
#include <Modloader/app/structs/IKSolver.h>

namespace app::classes::RootMotion::FinalIK::FABRIK {
    IL2CPP_REGISTER_METHOD(0x020537B0, void, OpenUserManual, app::FABRIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02053870, void, OpenScriptReference, app::FABRIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02053930, void, SupportGroup, app::FABRIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020539F0, void, ASThread, app::FABRIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IKSolver*, GetIKSolver, app::FABRIK* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02053AB0, void, ctor, app::FABRIK* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::FABRIK
