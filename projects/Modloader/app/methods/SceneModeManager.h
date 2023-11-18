#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SceneModeManager_SceneModeOverride__Enum.h>
#include <Modloader/app/structs/List_1_SceneManagerScene_.h>
#include <Modloader/app/structs/SceneModeManager.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SceneModeManager {
    IL2CPP_REGISTER_METHOD(0x00BB0B90, app::SceneModeManager_SceneModeOverride__Enum, get_Mode, ())
    IL2CPP_REGISTER_METHOD(0x00BB0C30, void, set_Mode, (app::SceneModeManager_SceneModeOverride__Enum value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::SceneModeManager_SceneModeOverride__Enum, get_EditorPrefMode, ())
    IL2CPP_REGISTER_METHOD(0x00BB0CF0, void, UpdateMode, (app::SceneModeManager_SceneModeOverride__Enum mode, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x00BB0ED0, void, SetActiveGroupInAllScenesActive, (app::String * relative_path_to_set, bool active, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHOD(0x00BB1190, void, HandleScene, (app::SceneRoot * scene_root, app::String* relative_path_to_set, bool active))
    IL2CPP_REGISTER_METHOD(0x00BB1300, app::List_1_SceneManagerScene_*, GetAllSceneRoots, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SceneModeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::SceneModeManager
