#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UISoundSettingsAsset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UISoundSettingsAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UISoundSettingsAsset__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_UISoundSettingsAsset__Fields_DEFINED
struct State;
struct Event_1;
struct RTPC;
struct UISoundSettingsAsset__Fields {
    struct ScriptableObject__Fields _;
    struct State* NoUIDisplayedState;
    struct Event_1* MenuOpen;
    struct Event_1* MenuClose;
    struct Event_1* ConfirmItem;
    struct Event_1* CancelItem;
    struct Event_1* InvalidItem;
    struct Event_1* Navigate;
    struct Event_1* Increment;
    struct Event_1* Decrement;
    struct Event_1* Place;
    struct Event_1* Remove;
    struct State* GeneralMenuState;
    struct State* MainMenuState;
    struct Event_1* ResetMusicStatesEvent;
    struct Event_1* MapInventoryShardOpen;
    struct Event_1* MapInventoryShardClose;
    struct Event_1* SpiritShardScreenOpen;
    struct Event_1* SpiritShardScreenClose;
    struct Event_1* SpiritShardNewItemAdded;
    struct Event_1* SpiritShardSocketAdded;
    struct Event_1* SpiritShardEquipped;
    struct Event_1* SpiritShardUnequipped;
    struct Event_1* SpiritShardInvalid;
    struct Event_1* SpiritShardBegin;
    struct Event_1* SpiritShardUpgrade;
    struct Event_1* SpiritShardLockedNavigate;
    struct Event_1* SpiritShardUnlockedNavigate;
    struct RTPC* SpiritShardPurchaseRtpc;
    struct State* SpiritShardScreenState;
    struct Event_1* ShardTraderPurchaseComplete;
    struct Event_1* ShardTraderPurchaseBegin;
    struct RTPC* ShardTraderRtpc;
    struct State* ShardTraderScreenState;
    struct Event_1* WeaponWheelOpen;
    struct Event_1* WeaponWheelClose;
    struct Event_1* WeaponWheelSelect;
    struct Event_1* WeaponWheelBind;
    struct State* WeaponWheelScreenState;
    struct Event_1* SkillUpgradePurchaseCompleted;
    struct Event_1* SkillUpgradePurchaseBegins;
    struct Event_1* SkillUpgradePurchaseCancelled;
    struct RTPC* SkillUpgradePurchaseRtpc;
    struct State* SkillUpgradeScreenState;
    struct Event_1* MapmakerPurchaseCompleted;
    struct Event_1* MapmakerPurchaseBegins;
    struct Event_1* MapmakerPurchaseCancelled;
    struct RTPC* MapmakerPurchaseRtpc;
    struct State* MapmakerScreenState;
    struct Event_1* BuildingCompleted;
    struct Event_1* BuildingCancelled;
    struct Event_1* BuildingBegins;
    struct RTPC* BuildingRtpc;
    struct State* BuilderScreenState;
    struct Event_1* AreaMapOpen;
    struct Event_1* AreaMapClose;
    struct Event_1* AreaMapZoomOut;
    struct Event_1* AreaMapZoomIn;
    struct Event_1* AreaMapEventStopZoom;
    struct Event_1* AreaMapPlacePin;
    struct Event_1* AreaMapDeletePin;
    struct Event_1* AreaMapChangeSelectedArea;
    struct Event_1* AreaMapFocus;
    struct Event_1* AreaMapShowDetails;
    struct Event_1* AreaMapScrollingBegins;
    struct Event_1* AreaMapScrollingEnds;
    struct RTPC* AreaMapScrollingRtpc;
    struct State* AreaMapScreenState;
    struct Event_1* QuestUIOpen;
    struct Event_1* QuestUIQuestSelected;
    struct Event_1* QuestUIQuestReceived;
    struct State* QuestUIScreenState;
    struct Event_1* GardenerPurchaseCompleted;
    struct Event_1* GardenerPurchaseBegin;
    struct RTPC* GardenerPurchaseRtpc;
    struct State* GardenerScreenState;
    struct Event_1* TeleportUIOpen;
    struct RTPC* TeleportUIScrollRtpc;
    struct State* TeleportScreenState;
    struct State* LoremasterScreenState;
    struct Event_1* InventoryOpen;
    struct Event_1* InventoryClose;
    struct State* RacePauseScreenState;
    struct Event_1* OptionsSubmenuOpen;
    struct Event_1* OptionsSubmenuClose;
    struct Event_1* OptionsBindHotkey;
    struct Event_1* OptionsBindHotkeySuccess;
    struct Event_1* OptionsBindHotkeyCancel;
    struct Event_1* OptionsRemoveHotkey;
    struct Event_1* OptionsUndoHotkey;
    struct Event_1* OptionsNavigate;
    struct Event_1* OptionsChangeController;
    struct Event_1* OptionsCycleControls;
    struct Event_1* OptionsResetToDefault;
    struct RTPC* OptionsMasterVolumeRtpc;
    struct RTPC* OptionsMusicVolumeRtpc;
    struct RTPC* OptionsSoundVolumeRtpc;
    struct RTPC* OptionsAmbienceVolumeRtpc;
    struct State* OptionsScreenState;
    struct Event_1* QuickAccessChangeScreen;
    struct Event_1* QuickAccessPlay;
    struct Event_1* QuickAccessPlayLocked;
    struct Event_1* QuickAccessSelectPopulated;
    struct Event_1* QuickAccessSelectEmpty;
    struct Event_1* QuickAccessMemoryPlay;
    struct Event_1* QuickAccessMemoryPlayLocked;
    struct Event_1* QuickAccessMemoryPopulated;
    struct Event_1* QuickAccessMemoryEmpty;
    struct Event_1* InventoryItemEmptySelected;
    struct Event_1* InventoryItemPopulatedSelected;
    struct Event_1* GetWispMessagePopup;
    struct Event_1* GetAchievementPopup;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UISoundSettingsAsset__Fields_FWDDECL)
#define IL2CPP_STRUCT_UISoundSettingsAsset__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/State.h>
#endif
#undef IL2CPP_STRUCT_UISoundSettingsAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UISoundSettingsAsset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UISoundSettingsAsset__Fields_FWDDECL)
#include <Modloader/app/structs/UISoundSettingsAsset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UISoundSettingsAsset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
