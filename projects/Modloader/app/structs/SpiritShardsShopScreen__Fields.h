#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardsShopScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardsShopScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardsShopScreen__Fields_DEFINED)
#include <Modloader/app/structs/PurchaseThingScreen__Fields.h>
#include <Modloader/app/structs/SpiritShardsShopScreen_HintsSettings.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_PurchaseThingScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiritShardsShopScreen_HintsSettings_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiritShardsShopScreen__Fields_DEFINED
struct LegacyTransparencyAnimator;
struct GameObject;
struct Transform;
struct SpiritShardUIShardDetails;
struct SerializedByteUberState;
struct SpiritShardUIConfirmationOverlay;
struct EquipmentUIInventoryGrid;
struct SpiritShardUIItem;
struct SpiritShardShopUIItem_Context;
struct MessageBox;
struct PlayerUberStateShards_Shard;
struct SpiritShardsShopScreen__Fields {
    struct PurchaseThingScreen__Fields _;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct GameObject* m_bindingsCanvas;
    struct GameObject* ShardDetailsCanvasPrefab;
    struct Transform* AnchorItemDetails;
    struct SpiritShardUIShardDetails* m_shardDetailsCanvas;
    struct SerializedByteUberState* PurchaseCount;
    struct GameObject* SpellItemPrefab;
    struct GameObject* ShardItemPrefab;
    struct GameObject* ItemHighlightGO;
    struct GameObject* ConfirmationOverlayPrefab;
    struct SpiritShardUIConfirmationOverlay* m_confirmationOverlay;
    struct EquipmentUIInventoryGrid* Grid;
    bool PurchasedShard;
    bool RequireOwned;
    bool m_isHiding;
    struct SpiritShardsShopScreen_HintsSettings Hints;
    struct SpiritShardUIItem* m_confirmContextShard;
    struct SpiritShardShopUIItem_Context* m_spiritShardUIContext;
    struct MessageBox* m_currentHint;
    struct PlayerUberStateShards_Shard* m_autoFocusShard;
    bool m_isInited;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardsShopScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardsShopScreen__Fields_FWDDECL
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/SpiritShardShopUIItem_Context.h>
#include <Modloader/app/structs/SpiritShardUIConfirmationOverlay.h>
#include <Modloader/app/structs/SpiritShardUIItem.h>
#include <Modloader/app/structs/SpiritShardUIShardDetails.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardsShopScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardsShopScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardsShopScreen__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShardsShopScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardsShopScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
