#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::GeometryUtility {
    IL2CPP_REGISTER_METHOD(0x02528E00, app::Plane__Array*, CalculateFrustumPlanes_1, (app::Camera * camera))
    IL2CPP_REGISTER_METHOD(0x02528EA0, void, CalculateFrustumPlanes_2, (app::Camera * camera, app::Plane__Array* planes))
    IL2CPP_REGISTER_METHOD(0x02529180, void, CalculateFrustumPlanes_3, (app::Matrix4x4 world_to_projection_matrix, app::Plane__Array* planes))
    IL2CPP_REGISTER_METHODINFO(0x0477B5B8, GeometryUtility_CalculateFrustumPlanes_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025292F0, bool, TestPlanesAABB, (app::Plane__Array * planes, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x02529350, void, TestPlanesAABBBatched, (app::Plane__Array * planes, app::NativeArray_1_UnityEngine_Bounds_ bounds, int32_t bounds_count, app::NativeArray_1_System_Byte_ inside_reults))
    IL2CPP_REGISTER_METHOD(0x02529450, void, Internal_TestPlanesAABBBatched, (app::Plane__Array * planes, app::Void* bounds, int32_t bounds_count, app::Void* inside_reults))
    IL2CPP_REGISTER_METHOD(0x025294D0, void, Internal_ExtractPlanes, (app::Plane__Array * planes, app::Matrix4x4 world_to_projection_matrix))
    IL2CPP_REGISTER_METHOD(0x02529530, bool, TestPlanesAABB_Injected, (app::Plane__Array * planes, app::Bounds* bounds))
    IL2CPP_REGISTER_METHOD(0x02529590, void, Internal_ExtractPlanes_Injected, (app::Plane__Array * planes, app::Matrix4x4* world_to_projection_matrix))
} // namespace app::classes::UnityEngine::GeometryUtility
