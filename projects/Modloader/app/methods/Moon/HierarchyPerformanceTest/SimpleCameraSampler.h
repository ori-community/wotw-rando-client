#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::HierarchyPerformanceTest::SimpleCameraSampler {
    IL2CPP_REGISTER_METHOD(0x014AAE40, void, ctor, (app::SimpleCameraSampler * this_ptr, app::SceneMetaData* scene_meta, app::Camera* camera))
    IL2CPP_REGISTER_METHOD(0x01349560, app::Rect, get_Bounds, (app::SimpleCameraSampler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::List_1_UnityEngine_Rect_*, get_SceneRects, (app::SimpleCameraSampler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Camera*, get_Camera, (app::SimpleCameraSampler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014AB3B0, app::List_1_UnityEngine_Vector3_*, CalculateSamplePoints, (app::SimpleCameraSampler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014AB700, app::List_1_SceneMetaData_*, GetScenesForDependant, (app::SimpleCameraSampler * this_ptr, app::SceneMetaData* dependant))
} // namespace app::classes::Moon::HierarchyPerformanceTest::SimpleCameraSampler
