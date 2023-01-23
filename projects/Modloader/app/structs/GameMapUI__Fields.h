#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapUI__Fields_DEFINED)
#include <Modloader/app/structs/GameMapUI_HintsSettings.h>
#include <Modloader/app/structs/GameMapUI_WorldMapStates__Enum.h>
#include <Modloader/app/structs/MenuScreen__Fields.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_GameMapUI_HintsSettings_DEFINED) && defined(IL2CPP_STRUCT_MenuTabBackground__Enum_DEFINED) && defined(IL2CPP_STRUCT_GameMapUI_WorldMapStates__Enum_DEFINED)
#define IL2CPP_STRUCT_GameMapUI__Fields_DEFINED
struct MessageBox;
struct LegacyTimelineSequence;
struct ConditionUberState;
struct MessageProvider;
struct GameObject;
struct GameMapPins;
struct AreaMapUI;
struct GameMapShowObjective;
struct GameMapObjectiveIcons;
struct GameMapSavePedestals;
struct MoonTimeline;
struct EventTriggerAnimator;
struct QuestIconsUI;
struct QuestsUI;
struct Texture2D;
struct Transform;
struct List_1_RuntimeWorldMapIcon_;
struct ForceRefreshAnimatorContext;
struct RuntimeGameWorldArea;
struct GameMapUI__Fields {
    struct MenuScreen__Fields _;
    struct MessageBox* AreaText;
    struct MessageBox* AreaCompletion;
    struct LegacyTimelineSequence* AreaCompletionIcon;
    struct ConditionUberState* DisplayShardState;
    struct ConditionUberState* DisplayLifeCellState;
    struct ConditionUberState* DisplayEnergyCellState;
    struct ConditionUberState* DisplayShardSlotState;
    struct ConditionUberState* DisplayCreepHeartsState;
    struct ConditionUberState* InDanger;
    struct MessageProvider* WarpMessageProvider;
    struct MessageProvider* QuestMessageProvider;
    struct MessageBox* InteractButtonMessage;
    struct MessageBox* InteractButtonDisabledMessage;
    struct MessageBox* WarpButtonMessage;
    struct MessageProvider* InteractDisabledMessageProvider;
    struct MessageProvider* FocusOnOriMessageProvider;
    struct MessageProvider* FocusOnObjectiveMessageProvider;
    struct MessageBox* LeftStickMessageBox;
    struct MessageBox* FilterMessageBox;
    struct GameObject* FilterGlow;
    struct GameMapPins* Pins;
    float TeleportFillObjectOffset;
    struct AreaMapUI* m_areaMap;
    bool m_shouldExitPinMode;
    bool m_showingObjective;
    struct GameMapShowObjective* _ShowObjective_k__BackingField;
    struct GameMapObjectiveIcons* _ObjectiveIcons_k__BackingField;
    struct GameMapSavePedestals* _Pedestals_k__BackingField;
    struct Vector2 m_teleportTarget;
    float TeleportProgress;
    float TeleportTime;
    float ObjectiveTextBumpTime;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct GameMapUI_HintsSettings HintSettings;
    struct MessageProvider* CantTeleportMessage;
    struct MoonTimeline* FadeInTimeline;
    struct MoonTimeline* FadeOutTimeline;
    struct EventTriggerAnimator* EnableGroupTrigger;
    struct EventTriggerAnimator* DisableGroupTrigger;
    struct EventTriggerAnimator* DisableSelfTrigger;
    bool GoToOriOnOpen;
    bool m_isVisible;
    struct GameObject* BottomAreaMap;
    struct GameObject* BottomTeleporters;
    struct GameObject* BottomPins;
    struct GameObject* BottomQuests;
    struct GameObject* QuestsScreen;
    struct GameObject* FaderObject;
    struct GameObject* PinPlacementCursor;
    struct QuestIconsUI* QuestIcons;
    bool LockInput;
    struct QuestsUI* m_questsUI;
    struct Texture2D* RumorIcon;
    struct Transform* Group;
    struct Vector2 PinCursorPosition;
    struct GameObject* InteractButton;
    struct GameObject* InteractDisabledButton;
    struct GameObject* NormalModeTeleportFillGameObject;
    struct GameObject* WarpModeTeleportFillGameObject;
    MenuTabBackground__Enum Background;

    struct GameObject* m_teleportFillGameObject;
    bool m_leftOriArea;
    bool CanInterrupt;
    bool DisablePinsMode;
    bool ResetFilterOnShow;
    GameMapUI_WorldMapStates__Enum MapState;

    struct List_1_RuntimeWorldMapIcon_* TeleportTargets;
    bool m_shouldRestoreStateAfterEnteringAreaMap;
    GameMapUI_WorldMapStates__Enum m_mapStateBeforeWorldMap;

    struct ForceRefreshAnimatorContext* m_forceRefreshContext;
    struct GameObject* m_teleportTargetHighlight;
    struct GameObject* Highlight;
    struct RuntimeGameWorldArea* m_currentHighlightedArea;
    bool m_enteredSelectionArea;
    bool m_switchedModesThisFrame;
    struct MessageBox* m_currentHint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameMapUI__Fields_FWDDECL
#include <Modloader/app/structs/AreaMapUI.h>
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/ForceRefreshAnimatorContext.h>
#include <Modloader/app/structs/GameMapObjectiveIcons.h>
#include <Modloader/app/structs/GameMapPins.h>
#include <Modloader/app/structs/GameMapSavePedestals.h>
#include <Modloader/app/structs/GameMapShowObjective.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/List_1_RuntimeWorldMapIcon_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/QuestIconsUI.h>
#include <Modloader/app/structs/QuestsUI.h>
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GameMapUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameMapUI__Fields_FWDDECL)
#include <Modloader/app/structs/GameMapUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
