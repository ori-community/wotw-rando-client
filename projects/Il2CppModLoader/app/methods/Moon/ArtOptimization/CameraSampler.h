#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::ArtOptimization::CameraSampler {
    IL2CPP_REGISTER_METHOD(0x01349100, void, ctor, (app::CameraSampler * this_ptr, app::SceneMetaData * scene_meta, app::Camera * camera))
    IL2CPP_REGISTER_METHOD(0x01349560, app::Rect, get_Bounds, (app::CameraSampler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::List_1_UnityEngine_Rect_ *, get_SceneRects, (app::CameraSampler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Camera *, get_Camera, (app::CameraSampler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01349570, app::List_1_UnityEngine_Vector3_ *, CalculateSamplePoints, (app::CameraSampler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013498E0, app::List_1_UnityEngine_Vector3_ *, CalculateSamplesForScene, (app::CameraSampler * this_ptr, app::Rect scene_bounds))
    IL2CPP_REGISTER_METHOD(0x01349D50, app::List_1_SceneMetaData_ *, GetScenesForDependant, (app::CameraSampler * this_ptr, app::SceneMetaData * dependant))
}
