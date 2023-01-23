#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_.h>
#include <Modloader/app/structs/Scene.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::UnityEngine::Events::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ {
    IL2CPP_REGISTER_METHOD(0x02AC8090, void, Invoke, (app::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ * this_ptr, app::Scene arg0, app::Scene arg1))
    IL2CPP_REGISTER_METHODINFO(0x0476D140, UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0475A110, UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AC83F0, app::IAsyncResult*, BeginInvoke, (app::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ * this_ptr, app::Scene arg0, app::Scene arg1, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Events::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
