#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::GrounderFBBIK {
    IL2CPP_REGISTER_METHOD(0x02068110, void, OpenTutorial, (app::GrounderFBBIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020681D0, void, OpenUserManual, (app::GrounderFBBIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02068290, void, OpenScriptReference, (app::GrounderFBBIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02068350, void, ResetPosition, (app::GrounderFBBIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02068420, bool, IsReadyToInitiate, (app::GrounderFBBIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02068500, void, Update, (app::GrounderFBBIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015DDDC0, void, FixedUpdate, (app::GrounderFBBIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015DDDC0, void, LateUpdate, (app::GrounderFBBIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020686A0, void, Initiate, (app::GrounderFBBIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02068B40, void, OnSolverUpdate, (app::GrounderFBBIK * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472A568, GrounderFBBIK_OnSolverUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02069390, void, SetLegIK, (app::GrounderFBBIK * this_ptr, app::IKEffector* effector, app::Grounding_Leg* leg))
    IL2CPP_REGISTER_METHOD(0x02069880, void, OnDrawGizmosSelected, (app::GrounderFBBIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020699D0, void, OnDestroy, (app::GrounderFBBIK * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02069BD0, void, ctor, (app::GrounderFBBIK * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::GrounderFBBIK
