#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Scene.h>
#include <Modloader/app/structs/UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_.h>

namespace app::classes::UnityEngine::Events::UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02AC7C60,
        void,
        Invoke,
        app::UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_* this_ptr,
        app::Scene arg0,
        app::Int32Enum__Enum arg1
    )
    IL2CPP_REGISTER_METHOD(
        0x02AC7FC0,
        app::IAsyncResult*,
        BeginInvoke,
        app::UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_* this_ptr,
        app::Scene arg0,
        app::Int32Enum__Enum arg1,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00611B40,
        void,
        EndInvoke,
        app::UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::UnityEngine::Events::UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_
