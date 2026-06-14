#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Water.h>
#include <Modloader/app/structs/Water_WaterMode__Enum.h>

namespace app::classes::Water {
    IL2CPP_REGISTER_METHOD(0x02D6BE90, void, OnWillRenderObject, app::Water* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D6CD10, void, OnDisable, app::Water* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D6D200, void, Update, app::Water* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D6DB00, void, UpdateCameraModes, app::Water* this_ptr, app::Camera* src, app::Camera* dest)
    IL2CPP_REGISTER_METHOD(
        0x02D6E0C0,
        void,
        CreateWaterObjects,
        app::Water* this_ptr,
        app::Camera* current_camera,
        app::Camera** reflection_camera,
        app::Camera** refraction_camera
    )
    IL2CPP_REGISTER_METHOD(0x02D6F2D0, app::Water_WaterMode__Enum, GetWaterMode, app::Water* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D6F2E0, app::Water_WaterMode__Enum, FindHardwareWaterSupport, app::Water* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DBCEE0, float, sgn, float a)
    IL2CPP_REGISTER_METHOD(
        0x02D6F580,
        app::Vector4,
        CameraSpacePlane,
        app::Water* this_ptr,
        app::Camera* cam,
        app::Vector3 pos,
        app::Vector3 normal,
        float side_sign
    )
    IL2CPP_REGISTER_METHOD(0x02D6FA30, void, CalculateObliqueMatrix, app::Matrix4x4* projection, app::Vector4 clip_plane)
    IL2CPP_REGISTER_METHOD(0x02D6FFF0, void, CalculateReflectionMatrix, app::Matrix4x4* reflection_mat, app::Vector4 plane)
    IL2CPP_REGISTER_METHOD(0x02D706A0, void, ctor, app::Water* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::Water
