#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Joint.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::Joint {
    IL2CPP_REGISTER_METHOD(0x030A2DB0, app::Rigidbody*, get_connectedBody, app::Joint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030A2E00, void, set_connectedBody, app::Joint* this_ptr, app::Rigidbody* value)
    IL2CPP_REGISTER_METHOD(0x030A2E60, app::Vector3, get_axis, app::Joint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030A2EE0, void, set_axis, app::Joint* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x030A2F40, app::Vector3, get_anchor, app::Joint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030A2FC0, void, set_anchor, app::Joint* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x030A3020, app::Vector3, get_connectedAnchor, app::Joint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030A30A0, void, set_connectedAnchor, app::Joint* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x030A3100, bool, get_autoConfigureConnectedAnchor, app::Joint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030A3150, void, set_autoConfigureConnectedAnchor, app::Joint* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x030A31B0, float, get_breakForce, app::Joint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030A3200, void, set_breakForce, app::Joint* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030A3260, float, get_breakTorque, app::Joint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030A32B0, void, set_breakTorque, app::Joint* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030A3310, bool, get_enableCollision, app::Joint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030A3360, void, set_enableCollision, app::Joint* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x030A33C0, bool, get_enablePreprocessing, app::Joint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030A3410, void, set_enablePreprocessing, app::Joint* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x030A3470, void, set_massScale, app::Joint* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x030A34D0, void, get_axis_Injected, app::Joint* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x030A3530, void, set_axis_Injected, app::Joint* this_ptr, app::Vector3* value)
    IL2CPP_REGISTER_METHOD(0x030A3590, void, get_anchor_Injected, app::Joint* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x030A35F0, void, set_anchor_Injected, app::Joint* this_ptr, app::Vector3* value)
    IL2CPP_REGISTER_METHOD(0x030A3650, void, get_connectedAnchor_Injected, app::Joint* this_ptr, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x030A36B0, void, set_connectedAnchor_Injected, app::Joint* this_ptr, app::Vector3* value)
} // namespace app::classes::UnityEngine::Joint
