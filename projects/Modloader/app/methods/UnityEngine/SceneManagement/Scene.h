#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::SceneManagement::Scene {
    IL2CPP_REGISTER_METHOD(0x02978E80, bool, IsValidInternal, (int32_t scene_handle))
    IL2CPP_REGISTER_METHOD(0x02978ED0, app::String*, GetPathInternal, (int32_t scene_handle))
    IL2CPP_REGISTER_METHOD(0x02978F20, app::String*, GetNameInternal, (int32_t scene_handle))
    IL2CPP_REGISTER_METHOD(0x02978F70, bool, GetIsLoadedInternal, (int32_t scene_handle))
    IL2CPP_REGISTER_METHOD(0x02978FC0, int32_t, GetBuildIndexInternal, (int32_t scene_handle))
    IL2CPP_REGISTER_METHOD(0x02979010, int32_t, GetRootCountInternal, (int32_t scene_handle))
    IL2CPP_REGISTER_METHOD(0x02979060, void, GetRootGameObjectsInternal, (int32_t scene_handle, app::Object* result_root_list))
    IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, get_handle, (app::Scene__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002185A0, bool, IsValid, (app::Scene__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002185F0, app::String*, get_path, (app::Scene__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00218640, app::String*, get_name, (app::Scene__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00218690, bool, get_isLoaded, (app::Scene__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002186E0, int32_t, get_buildIndex, (app::Scene__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00218730, int32_t, get_rootCount, (app::Scene__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00218780, app::GameObject__Array*, GetRootGameObjects_1, (app::Scene__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00218790, void, GetRootGameObjects_2, (app::Scene__Boxed * this_ptr, app::List_1_UnityEngine_GameObject_* root_game_objects))
    IL2CPP_REGISTER_METHODINFO(0x047558A0, Scene_GetRootGameObjects_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001EBC90, int32_t, GetHashCode, (app::Scene__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002187A0, bool, Equals, (app::Scene__Boxed * this_ptr, app::Object* other))
} // namespace app::classes::UnityEngine::SceneManagement::Scene
