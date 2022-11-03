#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AutoRotate {
    IL2CPP_REGISTER_METHOD(0x0085CEE0, void, Awake, (app::AutoRotate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085D010, app::Quaternion, ZOnlyQuaternion, (app::AutoRotate * this_ptr, float z_angle))
    IL2CPP_REGISTER_METHOD(0x0085D0F0, void, FixedUpdate, (app::AutoRotate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085D630, bool, get_CanRotate, (app::AutoRotate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085D710, float, GetCurrentRotationSpeed, (app::AutoRotate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085D750, bool, get_IsSuspended, (app::AutoRotate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFE00, void, set_IsSuspended, (app::AutoRotate * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0085D760, void, Serialize, (app::AutoRotate * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0085D790, void, OnDrawGizmos, (app::AutoRotate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085DBF0, void, GetManagedEarlyZDynamicGraphicTargets, (app::AutoRotate * this_ptr, app::List_1_UnityEngine_GameObject_* targets))
    IL2CPP_REGISTER_METHOD(0x0085DCE0, void, ctor, (app::AutoRotate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085DD00, void, cctor, ())
} // namespace app::classes::AutoRotate
