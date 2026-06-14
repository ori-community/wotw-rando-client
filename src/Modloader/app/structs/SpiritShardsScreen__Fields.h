#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardsScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardsScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardsScreen__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreenStack__Fields.h>
#include <Modloader/app/structs/MenuTabBackground__Enum.h>
#include <Modloader/app/structs/SpiritShardsScreen_HintsSettings.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MenuScreenStack__Fields_DEFINED) && defined(IL2CPP_STRUCT_MenuTabBackground__Enum_DEFINED) && defined(IL2CPP_STRUCT_SpiritShardsScreen_HintsSettings_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiritShardsScreen__Fields_DEFINED
struct MoonTimelineUiFader;
struct EventTriggerAnimator;
struct GameObject;
struct Transform;
struct SpellUIPassiveShards;
struct SpiritShardUIShardFloatingTooltip;
struct SpiritShardUIShardDetails;
struct SpellUIExperience;
struct SpellUIConfirmationOverlay;
struct EquipmentUIInventoryGrid;
struct SpiritShardUIItem;
struct PlayerUberStateShards_Shard;
struct SpiritShardUIItem_Context;
struct MessageBox;
struct AnimationCurve;
struct SpiritShardsScreen__Fields {
    struct MenuScreenStack__Fields _;
    struct MoonTimelineUiFader* UiFader;
    struct EventTriggerAnimator* GCTrigger;
    struct GameObject* ShardSocketCanvas;
    struct Transform* AnchorCategoryContext;
    struct GameObject* m_bindingsCanvas;
    struct SpellUIPassiveShards* m_socketCanvas;
    struct SpiritShardUIShardFloatingTooltip* Tooltip;
    struct GameObject* ShardDetailsCanvasPrefab;
    struct Transform* AnchorItemDetails;
    struct SpiritShardUIShardDetails* m_shardDetailsCanvas;
    struct GameObject* ShardItemPrefab;
    struct GameObject* ItemHighlightGO;
    struct GameObject* ItemHighlightNormalGO;
    struct GameObject* ItemHighlightUpgradableGO;
    struct Transform* AnchorExperience;
    struct SpellUIExperience* m_experience;
    struct GameObject* ConfirmationOverlayPrefab;
    struct SpellUIConfirmationOverlay* m_confirmationOverlay;
    struct EquipmentUIInventoryGrid* Grid;
    MenuTabBackground__Enum Background;

    bool m_isHiding;
    struct SpiritShardsScreen_HintsSettings Hints;
    struct SpiritShardUIItem* m_confirmContextShardUIItem;
    struct PlayerUberStateShards_Shard* m_confirmContextShard;
    struct SpiritShardUIItem* m_selectedShard;
    struct SpiritShardUIItem_Context* m_spiritShardUIContext;
    struct MessageBox* m_currentHint;
    struct PlayerUberStateShards_Shard* m_autoFocusShard;
    bool m_isInited;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    float UpgradeTime;
    struct GameObject* UpgradeEffect;
    float UpgradeProgress;
    float m_lastPurchaseTime;
    float UpgradeCooldown;
    struct AnimationCurve* PurchaseAnimationCurve;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardsScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardsScreen__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MoonTimelineUiFader.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpellUIConfirmationOverlay.h>
#include <Modloader/app/structs/SpellUIExperience.h>
#include <Modloader/app/structs/SpellUIPassiveShards.h>
#include <Modloader/app/structs/SpiritShardUIItem.h>
#include <Modloader/app/structs/SpiritShardUIItem_Context.h>
#include <Modloader/app/structs/SpiritShardUIShardDetails.h>
#include <Modloader/app/structs/SpiritShardUIShardFloatingTooltip.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardsScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardsScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardsScreen__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardsScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardsScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
