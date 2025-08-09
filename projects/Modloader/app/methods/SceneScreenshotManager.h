#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_SceneScreenshotManager_.h>
#include <Modloader/app/structs/Action_1_System_Collections_Generic_List_1_.h>
#include <Modloader/app/structs/SceneScreenshotManager.h>

namespace app::classes::SceneScreenshotManager {
    IL2CPP_REGISTER_METHOD(0x00BBC8E0, void, add_OnAfterCreate, app::Action_1_SceneScreenshotManager_* value)
    IL2CPP_REGISTER_METHOD(0x00BBCA20, void, remove_OnAfterCreate, app::Action_1_SceneScreenshotManager_* value)
    IL2CPP_REGISTER_METHOD(0x00BBCB60, void, add_OnBeforeDelete, app::Action_1_SceneScreenshotManager_* value)
    IL2CPP_REGISTER_METHOD(0x00BBCCA0, void, remove_OnBeforeDelete, app::Action_1_SceneScreenshotManager_* value)
    IL2CPP_REGISTER_METHOD(0x00BBCDE0, void, add_OnScreenshotsUpdated, app::Action_1_System_Collections_Generic_List_1_* value)
    IL2CPP_REGISTER_METHOD(0x00BBCF20, void, remove_OnScreenshotsUpdated, app::Action_1_System_Collections_Generic_List_1_* value)
    IL2CPP_REGISTER_METHOD(0x00BBD060, void, ctor, app::SceneScreenshotManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BBD2A0, void, cctor, )
} // namespace app::classes::SceneScreenshotManager
