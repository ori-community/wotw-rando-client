#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoadSceneMode__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Scene.h>
#include <Modloader/app/structs/UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_.h>

namespace app::classes::UnityEngine::Events::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_ {
    IL2CPP_REGISTER_METHOD(
        0x02AC7C60,
        void,
        Invoke,
        app::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_* this_ptr,
        app::Scene arg0,
        app::LoadSceneMode__Enum arg1
    )
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_* this_ptr,
        app::Object* object,
        void* method_1
    )
} // namespace app::classes::UnityEngine::Events::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_
