#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SceneState__Enum.h>
#include <Modloader/app/structs/SceneSettingsComponent.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SceneRoot__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Scene.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::SceneRoot {
    IL2CPP_REGISTER_METHOD(0x008519A0, bool, get_HighPriorityEnabling, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519B0, void, set_HighPriorityEnabling, (app::SceneRoot * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00BB1A70, bool, get_DebugOutput, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519C0, app::SceneState__Enum, get_State, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB1B10, void, ClearSerializedLists, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB1D20, void, OnValidate, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB2700, void, RebuildObjectsToTimeSliceAndObservers, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB2710, app::SceneSettingsComponent*, get_SceneSettings, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB27E0, bool, get_IsEnabling, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB27F0, bool, get_IsEnabled, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB2800, bool, get_IsDisabling, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB2810, bool, get_IsDisabled, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB2820, app::SceneRoot*, FindFromTransform, (app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x00BB2900, app::SceneRoot*, FindFromPosition, (app::Vector3 position, app::SceneRoot__Array* scene_roots))
    IL2CPP_REGISTER_METHODINFO(0x04741070, SceneRoot_FindFromPosition__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BB2B20, void, OnDestroy, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB2C60, void, MoonCleanup, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EditorAwake, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB2D80, void, Awake, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Start, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EditorStart, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB2EA0, void, EarlyStart, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB3050, void, LateStart, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761350, SceneRoot_LateStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BB3160, void, LoadSavedSceneData, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB3200, void, DebugLog, (app::SceneRoot * this_ptr, app::String* format, app::Object__Array* args))
    IL2CPP_REGISTER_METHOD(0x00BB32A0, void, InitUnloadTask, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB34B0, void, Unload, (app::SceneRoot * this_ptr, bool instant))
    IL2CPP_REGISTER_METHOD(0x00BB4280, void, _unloadScene, (app::SceneRoot * this_ptr, app::Scene scene, bool instant))
    IL2CPP_REGISTER_METHOD(0x00BB4910, app::IEnumerator*, UnloadSceneCoroutine, (app::SceneRoot * this_ptr, app::Scene scene))
    IL2CPP_REGISTER_METHOD(0x00BB4A70, void, OnLastGameObjectDestroyed, (app::SceneRoot * this_ptr, app::AsyncOperation_1* op))
    IL2CPP_REGISTER_METHOD(0x00BB4B00, void, OnLastResourceDestroyed, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB4B90, void, OnPreDisableScene, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB4BD0, void, NotifySceneRootPreDisableObservers, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB4D30, void, OnPostDisableScene, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB4D40, void, ChangeState, (app::SceneRoot * this_ptr, app::SceneState__Enum state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisablingEnter, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB4E90, void, OnDisabledEnter, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnablingEnter, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB4E90, void, OnEnabledEnter, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB4EA0, void, OnDisablingExit, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB4EA0, void, OnEnablingExit, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB4EE0, void, OnEnabledExit, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisabledExit, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB4EF0, void, InitActivationTask, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB50D0, void, DisableSceneImmediate, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB5360, void, DisableSceneTimeSliced, (app::SceneRoot * this_ptr, app::Action_1_Boolean_* on_disabling_completed))
    IL2CPP_REGISTER_METHOD(0x00BB5760, void, OnPreEnableScene, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB59D0, void, OnPostEnableScene, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB5FC0, void, EnableSceneImmediate, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB6290, void, EnableSceneTimeSliced, (app::SceneRoot * this_ptr, float time_budget, bool manual_enable, app::Action_1_Boolean_* on_enabling_completed, app::Action* on_pre_resume_completed))
    IL2CPP_REGISTER_METHOD(0x00BB6940, void, DisableTimeSlicedObjects, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsReady, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00413170, void, set_IsReady, (app::SceneRoot * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00BB6AB0, bool, get_IsVisible, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB6AC0, void, set_IsVisible, (app::SceneRoot * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00BB6AD0, void, SetIsVisible, (app::SceneRoot * this_ptr, bool is_visible))
    IL2CPP_REGISTER_METHOD(0x00BB6D40, void, SetIsReady, (app::SceneRoot * this_ptr, bool is_ready))
    IL2CPP_REGISTER_METHOD(0x00BB6EC0, void, RemoveStoredActiveObjectsFor, (app::SceneRoot * this_ptr, app::Transform* trans))
    IL2CPP_REGISTER_METHOD(0x00BB6ED0, void, RemoveStoredActiveObjects, (app::SceneRoot * this_ptr, app::Transform* trans))
    IL2CPP_REGISTER_METHOD(0x00BB7350, void, StoreActiveObjectsFor, (app::SceneRoot * this_ptr, app::Transform* trans))
    IL2CPP_REGISTER_METHOD(0x00BB7370, void, StoreActiveObjects, (app::SceneRoot * this_ptr, app::Transform* trans, bool set_moon_ready, bool parent_enabled))
    IL2CPP_REGISTER_METHOD(0x00BB7810, void, UpdateObservers, (app::SceneRoot * this_ptr, app::GameObject* game_object))
    IL2CPP_REGISTER_METHOD(0x00BB79F0, void, RefreshObjectsToTimeSliceEnableList, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB7C60, void, RegisterSceneRootEnabledAfterSerialize, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047276C8, SceneRoot_RegisterSceneRootEnabledAfterSerialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00BB7D00, void, EnableWithManualUnSuspend, (app::SceneRoot * this_ptr, app::Action_1_Boolean_* after_enable))
    IL2CPP_REGISTER_METHOD(0x00BB7DD0, void, ManuallyUnsuspend, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB7DE0, bool, CanRemoveObject, (app::SceneRoot * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x00BB80A0, void, ctor, (app::SceneRoot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BB8870, void, cctor, ())
} // namespace app::classes::SceneRoot
