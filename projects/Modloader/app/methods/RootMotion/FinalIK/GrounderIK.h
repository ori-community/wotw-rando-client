#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::GrounderIK {
    IL2CPP_REGISTER_METHOD(0x02069C80, void, OpenUserManual, (app::GrounderIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02069D40, void, OpenScriptReference, (app::GrounderIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02069E00, void, ResetPosition, (app::GrounderIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02069E20, bool, IsReadyToInitiate, (app::GrounderIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02069FF0, void, OnDisable, (app::GrounderIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206A190, void, Update, (app::GrounderIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206A640, void, Initiate, (app::GrounderIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206AE30, void, OnSolverUpdate, (app::GrounderIK * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476EC10, GrounderIK_OnSolverUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0206B290, void, SetLegIK, (app::GrounderIK * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0206B4E0, void, OnPostSolverUpdate, (app::GrounderIK * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472FE28, GrounderIK_OnPostSolverUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0206B810, void, OnDestroy, (app::GrounderIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206BBC0, void, ctor, (app::GrounderIK * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::GrounderIK
