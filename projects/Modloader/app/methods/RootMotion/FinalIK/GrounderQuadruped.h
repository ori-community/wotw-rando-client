#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::GrounderQuadruped {
    IL2CPP_REGISTER_METHOD(0x0206BC80, void, OpenUserManual, (app::GrounderQuadruped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206BD40, void, OpenScriptReference, (app::GrounderQuadruped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206BE00, void, ResetPosition, (app::GrounderQuadruped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206BE40, bool, IsReadyToInitiate, (app::GrounderQuadruped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206BFE0, bool, IsReadyToInitiateLegs, (app::GrounderQuadruped * this_ptr, app::IK__Array* ik_components))
    IL2CPP_REGISTER_METHOD(0x0206C150, void, OnDisable, (app::GrounderQuadruped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206C1E0, void, Update, (app::GrounderQuadruped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206C2D0, void, Initiate, (app::GrounderQuadruped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206CA60, app::Transform__Array*, InitiateFeet, (app::GrounderQuadruped * this_ptr, app::IK__Array* ik_components, app::GrounderQuadruped_Foot__Array** f, int32_t index_offset))
    IL2CPP_REGISTER_METHOD(0x0206D1B0, void, LateUpdate, (app::GrounderQuadruped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206D330, void, RootRotation, (app::GrounderQuadruped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206DB70, void, OnSolverUpdate, (app::GrounderQuadruped * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472A3D0, GrounderQuadruped_OnSolverUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0206EE60, void, UpdateForefeetRoot, (app::GrounderQuadruped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206F340, void, SetFootIK, (app::GrounderQuadruped * this_ptr, app::GrounderQuadruped_Foot foot, float max_offset))
    IL2CPP_REGISTER_METHOD(0x0206F5E0, void, OnPostSolverUpdate, (app::GrounderQuadruped * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047803B8, GrounderQuadruped_OnPostSolverUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0206FAD0, void, OnDestroy, (app::GrounderQuadruped * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0206FB10, void, DestroyLegs, (app::GrounderQuadruped * this_ptr, app::IK__Array* ik_components))
    IL2CPP_REGISTER_METHOD(0x0206FEB0, void, ctor, (app::GrounderQuadruped * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::GrounderQuadruped
