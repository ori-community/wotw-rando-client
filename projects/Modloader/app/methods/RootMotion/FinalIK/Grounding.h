#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::Grounding {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Grounding_Leg__Array*, get_legs, (app::Grounding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_legs, (app::Grounding * this_ptr, app::Grounding_Leg__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::Grounding_Pelvis*, get_pelvis, (app::Grounding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_pelvis, (app::Grounding * this_ptr, app::Grounding_Pelvis* value))
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_isGrounded, (app::Grounding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_isGrounded, (app::Grounding * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::Transform*, get_root, (app::Grounding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_root, (app::Grounding * this_ptr, app::Transform* value))
    IL2CPP_REGISTER_METHOD(0x02070160, app::RaycastHit, get_rootHit, (app::Grounding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02070190, void, set_rootHit, (app::Grounding * this_ptr, app::RaycastHit value))
    IL2CPP_REGISTER_METHOD(0x020701C0, bool, get_rootGrounded, (app::Grounding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020701E0, app::RaycastHit, GetRootHit, (app::Grounding * this_ptr, float max_distance_mlp))
    IL2CPP_REGISTER_METHOD(0x02070850, bool, IsValid, (app::Grounding * this_ptr, app::String** error_message))
    IL2CPP_REGISTER_METHOD(0x02070960, void, Initiate, (app::Grounding * this_ptr, app::Transform* root, app::Transform__Array* feet))
    IL2CPP_REGISTER_METHOD(0x02071020, void, Update, (app::Grounding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020712E0, app::Vector3, GetLegsPlaneNormal, (app::Grounding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02071630, void, Reset, (app::Grounding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020716C0, void, LogWarning, (app::Grounding * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x020716E0, app::Vector3, get_up, (app::Grounding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020717D0, float, GetVerticalOffset, (app::Grounding * this_ptr, app::Vector3 p1, app::Vector3 p2))
    IL2CPP_REGISTER_METHOD(0x020719D0, app::Vector3, Flatten, (app::Grounding * this_ptr, app::Vector3 v))
    IL2CPP_REGISTER_METHOD(0x02071B60, bool, get_useRootRotation, (app::Grounding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02071C80, void, ctor, (app::Grounding * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::Grounding
