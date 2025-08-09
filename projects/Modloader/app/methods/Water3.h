#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Water3.h>
#include <Modloader/app/structs/Water3_WaterMode__Enum.h>

namespace app::classes::Water3 {
    IL2CPP_REGISTER_METHOD(0x02D70900, void, Start, app::Water3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D70A10, app::Mesh*, GetMesh, app::Water3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D70B40, bool, IsUnderwater, app::Water3* this_ptr, app::Camera* cam)
    IL2CPP_REGISTER_METHOD(0x02D70D10, void, OnWillRenderObject, app::Water3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D71E30, void, OnDisable, app::Water3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D72240, app::Vector3, GetNormalAt, app::Water3* this_ptr, app::Vector3 pos, float scale)
    IL2CPP_REGISTER_METHOD(0x02D72500, app::Vector3, GetHeightOffsetAt, app::Water3* this_ptr, app::Vector3 pos)
    IL2CPP_REGISTER_METHOD(0x02D72F60, void, Update, app::Water3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D73A00, void, UpdateCameraModes, app::Water3* this_ptr, app::Camera* src, app::Camera* dest)
    IL2CPP_REGISTER_METHOD(0x02D74050, void, CreateWaterObjects, app::Water3* this_ptr, app::Camera* current_camera, app::Camera** reflection_camera)
    IL2CPP_REGISTER_METHOD(0x02D749A0, app::Water3_WaterMode__Enum, GetWaterMode, app::Water3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D749B0, app::Water3_WaterMode__Enum, FindHardwareWaterSupport, app::Water3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DBCEE0, float, sgn, float a)
    IL2CPP_REGISTER_METHOD(
        0x02D74B20,
        app::Vector4,
        CameraSpacePlane,
        app::Water3* this_ptr,
        app::Camera* cam,
        app::Vector3 pos,
        app::Vector3 normal,
        float side_sign
    )
    IL2CPP_REGISTER_METHOD(0x02D74FD0, void, CalculateObliqueMatrix, app::Matrix4x4* projection, app::Vector4 clip_plane)
    IL2CPP_REGISTER_METHOD(0x02D6FFF0, void, CalculateReflectionMatrix, app::Matrix4x4* reflection_mat, app::Vector4 plane)
    IL2CPP_REGISTER_METHOD(0x02D75590, void, ctor, app::Water3* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::Water3
