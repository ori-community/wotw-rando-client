#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FABRIKRoot.h>
#include <Modloader/app/structs/IKSolver.h>

namespace app::classes::RootMotion::FinalIK::FABRIKRoot {
    IL2CPP_REGISTER_METHOD(0x02054770, void, OpenUserManual, app::FABRIKRoot* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02054830, void, OpenScriptReference, app::FABRIKRoot* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020548F0, void, SupportGroup, app::FABRIKRoot* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020549B0, void, ASThread, app::FABRIKRoot* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::IKSolver*, GetIKSolver, app::FABRIKRoot* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02054A70, void, ctor, app::FABRIKRoot* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::FABRIKRoot
