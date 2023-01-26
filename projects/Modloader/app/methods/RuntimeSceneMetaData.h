#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/Dictionary_2_MoonGuid_NearbySceneData_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RuntimeSceneMetaData_PositionTypes__Enum.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RuntimeSceneMetaData {
    IL2CPP_REGISTER_METHOD(0x0137B160, void, ctor_1, (app::RuntimeSceneMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137BD00, void, ctor_2, (app::RuntimeSceneMetaData * this_ptr, app::SceneMetaData* scene_meta_data))
    IL2CPP_REGISTER_METHOD(0x0137C570, app::Dictionary_2_MoonGuid_NearbySceneData_*, get_NearbyReachableScenes, (app::RuntimeSceneMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137C6F0, app::Rect, get_SceneBounds, (app::RuntimeSceneMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137C970, app::Rect, get_TotalBounds, (app::RuntimeSceneMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137C9B0, float, get_PaddingWidthExtension, ())
    IL2CPP_REGISTER_METHOD(0x0137CA40, app::Rect, Encapsulate, (app::RuntimeSceneMetaData * this_ptr, app::Rect original, app::Rect add))
    IL2CPP_REGISTER_METHOD(0x0137CBA0, void, DoTotal, (app::RuntimeSceneMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137D1B0, bool, IsInTotal_1, (app::RuntimeSceneMetaData * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0137D230, bool, IsInTotal_2, (app::RuntimeSceneMetaData * this_ptr, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x0137C970, app::Rect, GetRect, (app::RuntimeSceneMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137D2C0, app::Rect, ApplyWidthExtension, (app::RuntimeSceneMetaData * this_ptr, app::Rect rect, float r))
    IL2CPP_REGISTER_METHOD(0x0137D380, app::Rect, PositionToRect, (app::RuntimeSceneMetaData * this_ptr, app::Vector2 position))
    IL2CPP_REGISTER_METHOD(0x0137D3B0, bool, IsInsideSceneLoadingZone_1, (app::RuntimeSceneMetaData * this_ptr, app::Vector2 position))
    IL2CPP_REGISTER_METHOD(0x0137D3F0, bool, IsInsideScenePaddingBounds_1, (app::RuntimeSceneMetaData * this_ptr, app::Vector3 position, app::Rect current_scene_bounds))
    IL2CPP_REGISTER_METHOD(0x0137D500, void, InitializedIsInsideCaches, (app::RuntimeSceneMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137D5E0, void, ClearIsInsideCaches, (app::RuntimeSceneMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137D620, bool, IsInsideScenePaddingBounds_2, (app::RuntimeSceneMetaData * this_ptr, app::Vector3 position, app::RuntimeSceneMetaData_PositionTypes__Enum type))
    IL2CPP_REGISTER_METHOD(0x0137D8A0, bool, IsInsideSceneBounds_1, (app::RuntimeSceneMetaData * this_ptr, app::Vector3 position, app::RuntimeSceneMetaData_PositionTypes__Enum type))
    IL2CPP_REGISTER_METHOD(0x0137DB20, bool, IsInsideScenePaddingBounds_3, (app::RuntimeSceneMetaData * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0137DC00, bool, IsInsideSceneBounds_2, (app::RuntimeSceneMetaData * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0137DCE0, bool, IsInsideScenePaddingBoundsExpanded, (app::RuntimeSceneMetaData * this_ptr, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x0137DD80, bool, IsInsideSceneBounds_3, (app::RuntimeSceneMetaData * this_ptr, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x0137DEE0, bool, IsInsideSceneLoadingZone_2, (app::RuntimeSceneMetaData * this_ptr, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x0137E040, bool, IsInsideScenePaddingBounds_4, (app::RuntimeSceneMetaData * this_ptr, app::Rect rect, app::Rect current_scene_bounds))
    IL2CPP_REGISTER_METHOD(0x0137E330, bool, IsInsideScenePaddingBounds_5, (app::RuntimeSceneMetaData * this_ptr, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x0137E490, float, DistanceToBounds, (app::RuntimeSceneMetaData * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x0137E650, float, DistanceToPaddingBounds, (app::RuntimeSceneMetaData * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x0137E810, app::Rect, ClosestBounds, (app::RuntimeSceneMetaData * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x0137EB60, void, ClosestBoundsTwoPoints, (app::RuntimeSceneMetaData * this_ptr, app::Vector3 point1, app::Vector3 point2, app::Rect* result1, app::Rect* result2, float* dist1, float* dist2))
    IL2CPP_REGISTER_METHOD(0x0137F300, bool, get_CanBeLoaded, (app::RuntimeSceneMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137F3E0, bool, Equals_1, (app::RuntimeSceneMetaData * this_ptr, app::RuntimeSceneMetaData* other))
    IL2CPP_REGISTER_METHOD(0x0137F4D0, bool, IEquatable_RuntimeSceneMetaData__Equals, (app::RuntimeSceneMetaData * this_ptr, app::RuntimeSceneMetaData* other))
    IL2CPP_REGISTER_METHOD(0x0137F4E0, bool, Equals_2, (app::RuntimeSceneMetaData * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x0137F5E0, int32_t, GetHashCode_1, (app::RuntimeSceneMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0137F6C0, bool, Equals_3, (app::RuntimeSceneMetaData * this_ptr, app::RuntimeSceneMetaData* x, app::RuntimeSceneMetaData* y))
    IL2CPP_REGISTER_METHOD(0x0137F7E0, int32_t, GetHashCode_2, (app::RuntimeSceneMetaData * this_ptr, app::RuntimeSceneMetaData* obj))
    IL2CPP_REGISTER_METHOD(0x0137F8C0, bool, op_Equality, (app::RuntimeSceneMetaData * a, app::RuntimeSceneMetaData* b))
    IL2CPP_REGISTER_METHOD(0x0137F9C0, bool, op_Inequality, (app::RuntimeSceneMetaData * a, app::RuntimeSceneMetaData* b))
    inline bool operator==(app::RuntimeSceneMetaData& a, app::RuntimeSceneMetaData& b) {
        return op_Equality(&a, &b);
    }
    inline bool operator!=(app::RuntimeSceneMetaData& a, app::RuntimeSceneMetaData& b) {
        return op_Inequality(&a, &b);
    }
} // namespace app::classes::RuntimeSceneMetaData
