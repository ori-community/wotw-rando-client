#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraController_1.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/NativeArray_1_System_Byte_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Bounds_.h>
#include <Modloader/app/structs/Plane__Array.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CameraController {
    IL2CPP_REGISTER_METHOD(0x003FBE50, bool, get_FrustumLocked, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016848B0, void, set_FrustumLocked, (app::CameraController_1 * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00EE3AD0, app::Vector3, get_CameraPosition, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016849A0, void, OnEnable, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01684E70, void, OnDisable, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016850C0, void, LockFrustumForDebug, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01685210, void, UnlockFrustum, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01685220, void, OnEnterFrustumLock, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01685360, void, OnGameReset, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006260E0, app::Vector3, get_Position, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016853F0, app::Quaternion, get_Rotation, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01685480, bool, InsideFrustum, (app::CameraController_1 * this_ptr, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x01685510, void, InsideFrustumBatched, (app::CameraController_1 * this_ptr, app::NativeArray_1_UnityEngine_Bounds_ bounds, int32_t bounds_count, app::NativeArray_1_System_Byte_ inside_results))
    IL2CPP_REGISTER_METHOD(0x01685620, app::Plane__Array*, get_FrustrumPlanes, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01685640, void, SetForcePlaneUpdate, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01685650, void, UpdateFrustrumPlanes, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01685D40, void, FixedUpdate, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01685D70, void, Update, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01685DE0, void, UpdateCamera, (app::CameraController_1 * this_ptr, bool force_update))
    IL2CPP_REGISTER_METHOD(0x016861F0, void, UpdateSpeed, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01686580, void, OnDrawGizmos, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01686680, void, Awake, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01686830, void, OnGUI, (app::CameraController_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01686F30, void, ctor, (app::CameraController_1 * this_ptr))
} // namespace app::classes::CameraController
