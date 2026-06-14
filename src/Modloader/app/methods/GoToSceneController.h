#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/GoToSceneController.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/ScenesManager.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GoToSceneController {
    IL2CPP_REGISTER_METHOD(0x007FE740, app::ScenesManager*, get_ScenesManager, app::GoToSceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007FE7C0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x007FE840, bool, CheckStartInScene, app::MoonGuid* guid)
    IL2CPP_REGISTER_METHOD(0x007FEA10, void, Awake, app::GoToSceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007FEAA0, void, OnDestroy, app::GoToSceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x007FEB80,
        void,
        GoToScene_1,
        app::GoToSceneController* this_ptr,
        app::MoonGuid* scene_guid,
        app::Vector3 position,
        app::String* scene_name,
        app::Action* on_complete,
        bool create_checkpoint,
        bool async
    )
    IL2CPP_REGISTER_METHOD(0x007FECF0, void, FinishGoingToPositionImmediately, app::GoToSceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007FEEB0, void, OnScenesEnabled, app::GoToSceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007FEED0, void, CompleteGoingToAScene, app::GoToSceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007FF220, void, OnInstantLoadScenesControllerCompletedLoading, app::GoToSceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007FF390, void, OnScenesManagerFixedUpdate, app::GoToSceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x007FF5C0,
        void,
        GoToScene_2,
        app::GoToSceneController* this_ptr,
        app::SceneMetaData* scene_meta_data,
        app::Action* on_complete,
        bool create_checkpoint
    )
    IL2CPP_REGISTER_METHOD(
        0x007FF670,
        void,
        GoToScene_3,
        app::GoToSceneController* this_ptr,
        app::RuntimeSceneMetaData* scene_meta_data,
        app::Action* on_complete,
        bool create_checkpoint
    )
    IL2CPP_REGISTER_METHOD(
        0x007FF7B0,
        void,
        GoToSceneAsync_1,
        app::GoToSceneController* this_ptr,
        app::SceneMetaData* scene_meta_data,
        app::Action* on_complete,
        bool create_checkpoint
    )
    IL2CPP_REGISTER_METHOD(
        0x007FF860,
        void,
        GoToSceneAsync_2,
        app::GoToSceneController* this_ptr,
        app::RuntimeSceneMetaData* scene_meta_data,
        app::Action* on_complete,
        bool create_checkpoint
    )
    IL2CPP_REGISTER_METHOD(
        0x007FF9A0,
        void,
        GoToReplayScene,
        app::GoToSceneController* this_ptr,
        app::RuntimeSceneMetaData* scene_meta_data,
        app::Action* on_complete,
        bool create_checkpoint,
        app::Vector3 position
    )
    IL2CPP_REGISTER_METHOD(
        0x007FFA00,
        void,
        GoToExitReplayScene,
        app::GoToSceneController* this_ptr,
        app::RuntimeSceneMetaData* scene_meta_data,
        app::Action* on_complete,
        bool create_checkpoint
    )
    IL2CPP_REGISTER_METHOD(0x007FFB90, void, GoToSceneImmediately_1, app::GoToSceneController* this_ptr, app::SceneMetaData* scene, app::Action* on_complete)
    IL2CPP_REGISTER_METHOD(
        0x007FFBD0,
        void,
        GoToSceneImmediately_2,
        app::GoToSceneController* this_ptr,
        app::MoonGuid* scene_guid,
        app::Action* on_complete,
        app::Vector3 position
    )
    IL2CPP_REGISTER_METHOD(
        0x007FFBF0,
        void,
        GoToSceneImmediately_3,
        app::GoToSceneController* this_ptr,
        app::RuntimeSceneMetaData* scene,
        app::Action* on_complete
    )
    IL2CPP_REGISTER_METHOD(0x007FFD00, void, GoToScene_4, app::GoToSceneController* this_ptr, app::String* path)
    IL2CPP_REGISTER_METHOD(0x007FFE70, bool, get_ShouldOpenSaveSlot, app::GoToSceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF2B0, int32_t, get_LastSelectedSaveSlot, app::GoToSceneController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF2C0, void, set_LastSelectedSaveSlot, app::GoToSceneController* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x007FFE80, void, ctor, app::GoToSceneController* this_ptr)
} // namespace app::classes::GoToSceneController
