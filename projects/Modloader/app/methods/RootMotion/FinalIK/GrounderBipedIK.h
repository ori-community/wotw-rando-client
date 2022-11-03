#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::GrounderBipedIK {
    IL2CPP_REGISTER_METHOD(0x02065EA0, void, OpenUserManual, (app::GrounderBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02065F60, void, OpenScriptReference, (app::GrounderBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02066020, void, ResetPosition, (app::GrounderBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020660F0, bool, IsReadyToInitiate, (app::GrounderBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02066210, void, Update, (app::GrounderBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020663E0, void, Initiate, (app::GrounderBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020669D0, void, OnDisable, (app::GrounderBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02066A50, void, OnSolverUpdate, (app::GrounderBipedIK * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470FDD8, GrounderBipedIK_OnSolverUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020677E0, void, SetLegIK, (app::GrounderBipedIK * this_ptr, app::IKSolverLimb* limb, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02067970, void, OnPostSolverUpdate, (app::GrounderBipedIK * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471DD98, GrounderBipedIK_OnPostSolverUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02067CF0, void, OnDestroy, (app::GrounderBipedIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02068050, void, ctor, (app::GrounderBipedIK * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::GrounderBipedIK
