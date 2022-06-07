#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraPositionTracker {
    IL2CPP_REGISTER_METHOD(0x03119EA0, void, TrackCamera, (app::Camera * camera))
    IL2CPP_REGISTER_METHOD(0x0311A3B0, bool, GetTrackedCameraProps, (app::Camera * camera, app::Vector3 * camera_position, app::Matrix4x4 * view_proj_matrix))
    IL2CPP_REGISTER_METHOD(0x0311A540, void, TrackRegisteredAllCameras, ())
    IL2CPP_REGISTER_METHOD(0x0311A660, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0311A760, void, OnEnable, (app::CameraPositionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311A840, void, OnDisable, (app::CameraPositionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311A900, void, FixedUpdate, (app::CameraPositionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447380, void, LateUpdate, (app::CameraPositionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPostRender, (app::CameraPositionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CameraPositionTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0311A9C0, void, cctor, ())
}
