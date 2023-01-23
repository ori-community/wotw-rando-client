#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceMenuScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceMenuScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceMenuScreen__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RaceMenuScreen__Fields_DEFINED
struct RaceSettings__Array;
struct GameObject;
struct EquipmentUIInventoryGrid;
struct MessageBox;
struct MessageProvider;
struct LeaderboardsB;
struct RaceLeaderboardsTitlescreenController;
struct CleverMenuItemSelectionManager;
struct RaceMenuScreenDifficultyLabel;
struct MoonReference_1_ISerializedUberState_;
struct LegacyTransparencyAnimator;
struct RaceMenuScreenNotificationSystem__Array;
struct MoonTimeline;
struct TransparencyAnimator;
struct RaceMenuScreenUISlot;
struct CleverMenuItem;
struct RaceMenuScreen__Fields {
    struct MenuScreen__Fields _;
    struct RaceSettings__Array* SpiritTrialsRaceSettings;
    struct RaceSettings__Array* TimeTrialsRaceSettings;
    struct GameObject* RaceItemPrefab;
    struct GameObject* ItemRoot;
    struct EquipmentUIInventoryGrid* Grid;
    struct MessageBox* LeftTab;
    struct MessageBox* RightTab;
    struct GameObject* LoremasterScreen;
    struct GameObject* RaceLegend;
    struct GameObject* MemoriesLegend;
    struct MessageProvider* SpiritTrialsTabMessageProvider;
    struct MessageProvider* TimeTrialsTabMessageProvider;
    struct MessageProvider* MemoriesTabMessageProvider;
    struct MessageProvider* BossTabMessageProvider;
    struct MessageProvider* RaceTabMessageProvider;
    struct MessageProvider* ShrineMessageProvider;
    struct MessageProvider* EscapeMessageProvider;
    struct LeaderboardsB* Board;
    struct GameObject* RacePlayIcon;
    struct MessageBox* RaceSelectedFilter;
    struct GameObject* BeatenIcon;
    struct MessageProvider* DefaultLockedMessage;
    struct RaceLeaderboardsTitlescreenController* LeaderboardController;
    bool _IsFadingOut_k__BackingField;
    struct CleverMenuItemSelectionManager* RaceItemsSelectionManager;
    struct CleverMenuItemSelectionManager* MemoriesItemsSelectionManager;
    struct RaceMenuScreenDifficultyLabel* DifficultyLabel;
    struct MoonReference_1_ISerializedUberState_* DifficultyState;
    struct LegacyTransparencyAnimator* ScreenLegacyTransparencyAnimator;
    struct RaceMenuScreenNotificationSystem__Array* m_notificationSystems;
    struct MoonTimeline* FadeOutTimeline;
    struct MoonTimeline* GridFaderTimeline;
    struct TransparencyAnimator* FadeTransparencyAnimator;
    struct TransparencyAnimator* GridFadeTransparencyAnimator;
    bool m_wasEnabledInTitlescreen;
    struct RaceMenuScreenUISlot* m_SelectedItem;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct CleverMenuItem* m_lastItem;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceMenuScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_RaceMenuScreen__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LeaderboardsB.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonReference_1_ISerializedUberState_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RaceLeaderboardsTitlescreenController.h>
#include <Modloader/app/structs/RaceMenuScreenDifficultyLabel.h>
#include <Modloader/app/structs/RaceMenuScreenNotificationSystem__Array.h>
#include <Modloader/app/structs/RaceMenuScreenUISlot.h>
#include <Modloader/app/structs/RaceSettings__Array.h>
#include <Modloader/app/structs/TransparencyAnimator.h>
#endif
#undef IL2CPP_STRUCT_RaceMenuScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceMenuScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RaceMenuScreen__Fields_FWDDECL)
#include <Modloader/app/structs/RaceMenuScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceMenuScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
