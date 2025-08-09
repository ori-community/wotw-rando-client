#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/OnSceneStartRunAction.h>
#include <Modloader/app/structs/SceneRoot.h>

namespace app::classes::OnSceneStartRunAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, app::OnSceneStartRunAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00611DA0, void, Awake, app::OnSceneStartRunAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00611F30, void, OnDestroy, app::OnSceneStartRunAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006120D0, void, OnSceneStartLateAfterSerialize, app::OnSceneStartRunAction* this_ptr, app::SceneRoot* root)
    IL2CPP_REGISTER_METHOD(0x00612390, void, Serialize, app::OnSceneStartRunAction* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::OnSceneStartRunAction* this_ptr)
} // namespace app::classes::OnSceneStartRunAction
