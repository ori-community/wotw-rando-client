#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MenuScreenManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MenuScreenManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuScreenManager__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreenManager_Screens__Enum.h>
#include <Modloader/app/structs/Suspendable__Fields.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_MenuScreenManager_Screens__Enum_DEFINED)
#define IL2CPP_STRUCT_MenuScreenManager__Fields_DEFINED
struct GameObject;
struct ConditionUberState;
struct MessageProvider;
struct UISoundSettingsAsset;
struct Dictionary_2_MenuScreenManager_Screens_System_Func_1_;
struct HashSet_1_Moon_ISuspendable_;
struct List_1_UnityEngine_GameObject_;
struct ResumeGameController;
struct IEnumerator;
struct MenuScreenManager__Fields {
    struct Suspendable__Fields _;
    struct GameObject* TabManager;
    struct GameObject* ResumeScreen;
    struct GameObject* StatsScreenPrefab;
    struct GameObject* LoremasterScreenPrefab;
    struct GameObject* RaceMenuScreenPrefab;
    struct ConditionUberState* CanOpenMap;
    struct MessageProvider* NoMapTextMessageProvider;
    MenuScreenManager_Screens__Enum CurrentScreen;

    struct UISoundSettingsAsset* Sounds;
    bool ShardShopLoading;
    bool LockClosingMenu;
    struct Dictionary_2_MenuScreenManager_Screens_System_Func_1_* m_allScreens;
    struct HashSet_1_Moon_ISuspendable_* m_suspendables;
    struct HashSet_1_Moon_ISuspendable_* m_uiSuspendables;
    struct List_1_UnityEngine_GameObject_* m_registeredUIElements;
    float m_menuOpenTime;
    float m_screenOpenTime;
    struct ResumeGameController* m_resumeScreen;
    bool m_isPaused;
    bool m_showingOpeningScreen;
    bool m_equipmentWhellVisible;
    bool m_wasPlayingMasterTimelineWhenScreenOpened;
    struct IEnumerator* m_pauseMenuFadeInRoutine;
    bool m_ignoreNextOpenSound;
    bool _AllowEquipmentWheelWhileMovementIsDisabled_k__BackingField;
    bool _IsSuspended_k__BackingField;
    bool m_EquipmentWheelToggle;
    bool m_EquipmentWheelTogglePendingRelease;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MenuScreenManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_MenuScreenManager__Fields_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/Dictionary_2_MenuScreenManager_Screens_System_Func_1_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/ResumeGameController.h>
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#endif
#undef IL2CPP_STRUCT_MenuScreenManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MenuScreenManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MenuScreenManager__Fields_FWDDECL)
#include <Modloader/app/structs/MenuScreenManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MenuScreenManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
