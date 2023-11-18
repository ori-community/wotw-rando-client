#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WorldMapUI.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/GameMapSavePedestal.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_QuestIconUI_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/QuestIconUI.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RuntimeQuest.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SceneSettingsComponent.h>
#include <Modloader/app/structs/SliceRenderSettings.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WorldMapOverworldArea.h>

namespace app::classes::WorldMapUI {
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_Activated, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585320, void, set_Activated, (app::WorldMapUI * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00585330, bool, get_InCinematicMode, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585470, bool, get_IsReady, ())
    IL2CPP_REGISTER_METHOD(0x00585540, bool, get_UseCameraSettings, ())
    IL2CPP_REGISTER_METHOD(0x00585660, app::SceneSettingsComponent*, get_SceneSettings, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585750, app::GameObject*, get_SceneRootObject, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005857D0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00585890, void, OnEnable, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005858A0, void, OnDisable, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005858B0, app::CameraSettings*, get_CameraSettings, ())
    IL2CPP_REGISTER_METHOD(0x00585BA0, app::SliceRenderSettings*, get_SliceRenderSettings, ())
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::Transform*, get_UiGroup, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585D70, void, Awake, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585E10, void, Init, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585FD0, void, OnDestroy, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00586280, void, Activate, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00586CF0, void, Deactivate, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00586FD0, void, HideLoadedScenes, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00587230, void, RevertHiddenScenes, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00587360, void, OnMenuItemChange, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00587580, float, get_ZoomTime, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00587620, bool, get_IsZooming, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00587640, app::AnimationCurve*, get_ScrollingSensitivityCurve, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005876E0, app::Vector3, WorldToProjectedPosition, (app::WorldMapUI * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00587820, app::Vector3, WorldToUIPosition, (app::WorldMapUI * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x005878A0, app::Vector3, get_AreaMapScrollPosition, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005879A0, app::Vector3, get_ClosePosition, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00587BC0, app::Vector3, get_FarPosition, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00587CE0, app::WorldMapOverworldArea*, get_CurrentArea, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00587D90, void, UpdateCameraPosition, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00587DD0, void, UpdateCageCameraPosition, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00588720, void, UpdateFreeCameraPosition, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005895A0, void, UpdateFreeFormSelection, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005897F0, void, FixedUpdate, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00589A30, void, UpdateSceneTransform, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00589DC0, void, UpdateMarkers, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00589E10, void, UpdatePlayerMarker, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058A160, void, UpdateCursor, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058A4B0, app::Vector3, ApplyIconLerp, (app::WorldMapUI * this_ptr, app::Vector2 world_map_position, app::Vector2 area_map_position, float normalized_value))
    IL2CPP_REGISTER_METHOD(0x0058A630, app::Vector3, WorldToScreenToUI, (app::WorldMapUI * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0058A870, void, ShowAreaSelection, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058A930, void, HideAreaSelection, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058A9F0, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x0058ABD0, void, OnFinishedLoading, (app::SceneRoot * scene_root))
    IL2CPP_REGISTER_METHOD(0x0058ADF0, void, CancelLoading, ())
    IL2CPP_REGISTER_METHOD(0x0058AEC0, bool, get_IsSuspended, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058AED0, void, set_IsSuspended, (app::WorldMapUI * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0058AEE0, app::SuspendableMask__Enum, get_Mask, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058AEF0, void, set_Mask, (app::WorldMapUI * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0058AFB0, void, OnInstantiate, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058B320, void, SubscribeForCinematicTriggers, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058B590, void, UnsubscribeForCinematicTriggers, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058B800, void, OnCinematicTriggerEnter, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058B800, void, EnterCinematicMode, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058B810, void, ExitCinematicMode, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058B820, app::Vector3, ClampToArea, (app::WorldMapUI * this_ptr, app::Rect rect, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x0058B960, void, CreateQuestIcons, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058BC90, app::QuestIconUI*, CreateIcon, (app::WorldMapUI * this_ptr, app::RuntimeQuest* quest, app::List_1_QuestIconUI_* icons))
    IL2CPP_REGISTER_METHOD(0x0058C2B0, void, UpdateQuestIcons, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058C550, void, CreatePedestalIcons, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058C710, void, CreateTeleporterIcon, (app::WorldMapUI * this_ptr, app::GameMapSavePedestal* pedestal, app::List_1_UnityEngine_Transform_* pedestals))
    IL2CPP_REGISTER_METHOD(0x0058C930, void, UpdateSavePedestalIcons, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058CC90, void, OnDrawGizmosSelected, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058CD40, void, ctor, (app::WorldMapUI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::WorldMapUI
