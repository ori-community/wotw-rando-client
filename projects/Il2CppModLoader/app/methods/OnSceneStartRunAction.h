#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::OnSceneStartRunAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::OnSceneStartRunAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611DA0, void, Awake, (app::OnSceneStartRunAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611F30, void, OnDestroy, (app::OnSceneStartRunAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006120D0, void, OnSceneStartLateAfterSerialize, (app::OnSceneStartRunAction * this_ptr, app::SceneRoot * root))
    IL2CPP_REGISTER_METHODINFO(0x0472BB58, OnSceneStartRunAction_OnSceneStartLateAfterSerialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00612390, void, Serialize, (app::OnSceneStartRunAction * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::OnSceneStartRunAction * this_ptr))
}
