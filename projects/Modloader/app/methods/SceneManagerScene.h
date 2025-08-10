#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/SceneManagerScene.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SceneState__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SceneManagerScene {
    IL2CPP_REGISTER_METHOD(
        0x00BA9A60,
        void,
        ctor_1,
        app::SceneManagerScene* this_ptr,
        app::SceneRoot* scene_root,
        app::RuntimeSceneMetaData* scene_meta_data,
        app::SceneState__Enum inital_state
    )
    IL2CPP_REGISTER_METHOD(0x00BA9BC0, void, ctor_2, app::SceneManagerScene* this_ptr, app::SceneRoot* scene_root, app::RuntimeSceneMetaData* scene_meta_data)
    IL2CPP_REGISTER_METHOD(0x00BA9D10, void, ctor_3, app::SceneManagerScene* this_ptr, app::RuntimeSceneMetaData* meta_data)
    IL2CPP_REGISTER_METHOD(0x00BA9E70, bool, get_IsLoadingComplete, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA9ED0, app::SceneState__Enum, get_CurrentState, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_ShouldBeReady, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_ShouldBeReady, app::SceneManagerScene* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0060CCA0, bool, get_ShouldBeVisible, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BA9F00, void, set_ShouldBeVisible, app::SceneManagerScene* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00B11420, bool, get_ShouldBeEnabled, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B11430, void, set_ShouldBeEnabled, app::SceneManagerScene* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_DistanceToPositionOnLastEnable, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A34D0, void, set_DistanceToPositionOnLastEnable, app::SceneManagerScene* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00B1EA60, app::Vector3, get_CameraTargetOnLastEnabled, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B1EA50, void, set_CameraTargetOnLastEnabled, app::SceneManagerScene* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0091E0B0, float, get_DistanceToPositionOnLastLoad, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00724130, void, set_DistanceToPositionOnLastLoad, app::SceneManagerScene* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, SetSceneRoot, app::SceneManagerScene* this_ptr, app::SceneRoot* root)
    IL2CPP_REGISTER_METHOD(0x00BA9F10, void, ForceChangeState, app::SceneManagerScene* this_ptr, app::SceneState__Enum state)
    IL2CPP_REGISTER_METHOD(0x00BAA000, void, ChangeState, app::SceneManagerScene* this_ptr, app::SceneState__Enum state)
    IL2CPP_REGISTER_METHOD(0x00BA9E70, bool, get_IsLoaded, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAA2E0, bool, get_IsLoading, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAA340, bool, get_IsVisible, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAA3A0, bool, get_IsEnabled, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAA3D0, bool, get_IsTitleScreen, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAA4D0, bool, get_DebugOutput, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAA570, void, DebugLog, app::SceneManagerScene* this_ptr, app::String* format, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAA610, void, EnableScene, app::SceneManagerScene* this_ptr, bool async)
    IL2CPP_REGISTER_METHOD(0x00BAA7F0, void, DisableScene, app::SceneManagerScene* this_ptr, bool async)
    IL2CPP_REGISTER_METHOD(0x00BAA9B0, void, StartLoading, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAA9C0, void, LoadingCompleted, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAA9F0, void, CancelLoading, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAAA50, void, PrepareToDisable, app::SceneManagerScene* this_ptr, float unload_time)
    IL2CPP_REGISTER_METHOD(0x00BAAA80, void, EnableDisabledSceneTimesliced, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAAC70, void, EnableDisabledScene, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAAD50, void, PreEnableScene, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAAEB0, void, PostEnableScene, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAB060, void, PostDisableScene, app::SceneManagerScene* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BAB230, void, _DisableScene_b__65_0, app::SceneManagerScene* this_ptr, bool result)
    IL2CPP_REGISTER_METHOD(0x00BAB240, void, _EnableDisabledSceneTimesliced_b__70_0, app::SceneManagerScene* this_ptr, bool result)
} // namespace app::classes::SceneManagerScene
