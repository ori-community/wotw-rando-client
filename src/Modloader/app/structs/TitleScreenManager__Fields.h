#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleScreenManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleScreenManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleScreenManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/TitleScreenManager_Screen__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_TitleScreenManager_Screen__Enum_DEFINED)
#define IL2CPP_STRUCT_TitleScreenManager__Fields_DEFINED
struct ActionMethod;
struct GameObject;
struct CleverMenuItemSelectionManager;
struct BackupSaveCleverMenuItemSelectionManager;
struct SaveSlotsUI;
struct BaseAnimator__Array;
struct MoonTimeline;
struct MoonReference_1_Moon_Timeline_ITimelineEntity_;
struct UISoundSettingsAsset;
struct MessageBox;
struct TranslatedMessageProvider;
struct ActionSequence;
struct TitleScreenManager__Fields {
    struct MonoBehaviour__Fields _;
    struct ActionMethod* OnTitleScreenStartup;
    struct GameObject* PressStartScreen;
    struct GameObject* WaitingForSaveGameScreen;
    struct CleverMenuItemSelectionManager* MainMenuScreen;
    struct CleverMenuItemSelectionManager* ExitGameScreen;
    struct CleverMenuItemSelectionManager* ProfileSelectedScreen;
    struct BackupSaveCleverMenuItemSelectionManager* BackupSaves;
    struct SaveSlotsUI* SaveSlotsScreen;
    struct GameObject* LiveSignInScreen;
    struct GameObject* Logo;
    struct GameObject* ProfileSelectionLegend;
    struct BaseAnimator__Array* AnimatorsToReset;
    struct BaseAnimator__Array* ProfileSelectionAnimators;
    struct MoonTimeline* LoadPrologueMasterTimeline;
    struct MoonTimeline* TitleScreenTimeline;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_* PrologueMasterTimeline;
    struct UISoundSettingsAsset* UiSoundSettingsAsset;
    struct GameObject* FirstTimeQualitySettingsScreen;
    struct MessageBox* FirstTimeQualitySettingsScreenMessageBox;
    struct TranslatedMessageProvider* QualityModeXboxSeriesXMessageProvider;
    struct TranslatedMessageProvider* PerformanceModeXboxSeriesXMessageProvider;
    struct TranslatedMessageProvider* QualityModeXboxSeriesSMessageProvider;
    struct TranslatedMessageProvider* PerformanceModeXboxSeriesSMessageProvider;
    struct ActionSequence* FirstTimeQualitySettingsOnEnableSequence;
    TitleScreenManager_Screen__Enum m_currentScreen;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleScreenManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_TitleScreenManager__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/ActionSequence.h>
#include <Modloader/app/structs/BackupSaveCleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/BaseAnimator__Array.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SaveSlotsUI.h>
#include <Modloader/app/structs/TranslatedMessageProvider.h>
#include <Modloader/app/structs/UISoundSettingsAsset.h>
#endif
#undef IL2CPP_STRUCT_TitleScreenManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleScreenManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TitleScreenManager__Fields_FWDDECL)
#include <Modloader/app/structs/TitleScreenManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleScreenManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
