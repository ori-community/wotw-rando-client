#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUIEquipScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUIEquipScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIEquipScreen__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreenStack__Fields.h>
#include <Modloader/app/structs/SpellUIEquipScreen_Category__Enum.h>
#include <Modloader/app/structs/SpellUIEquipScreen_HintsSettings.h>
#include <Modloader/app/structs/SpellUIEquipScreen_MessageProviders.h>
#include <Modloader/app/structs/SpellUIEquipScreen_State__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MenuScreenStack__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpellUIEquipScreen_MessageProviders_DEFINED) && defined(IL2CPP_STRUCT_SpellUIEquipScreen_HintsSettings_DEFINED) && defined(IL2CPP_STRUCT_SpellUIEquipScreen_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_SpellUIEquipScreen_Category__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SpellUIEquipScreen__Fields_DEFINED
struct LegacyTransparencyAnimator;
struct GameObject;
struct Transform;
struct WidgetUIHorizontalSelect;
struct SpellUIPassiveShards;
struct SpiritShardUIShardDetails;
struct SpellUISpellDetails;
struct EquipmentUIInventoryGrid;
struct SpellUIExperience;
struct SpellUIShardListOverlay;
struct SpellUIConfirmationOverlay;
struct SpiritShardUIItem;
struct SpiritShardUIItem_Context;
struct MessageBox;
struct PlayerUberStateShards_Shard;
struct PlayerUberStateInventory_InventoryItem;
struct SpellUIEquipScreen__Fields {
    struct MenuScreenStack__Fields _;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct GameObject* ButtonSelect;
    struct GameObject* ButtonEquip;
    struct GameObject* CategorySelectPrefab;
    struct Transform* AnchorCategorySelect;
    struct WidgetUIHorizontalSelect* m_categorySelect;
    struct GameObject* ButtonBindingCanvasPrefab;
    struct GameObject* PassiveShardsCanvasPrefab;
    struct Transform* AnchorCategoryContext;
    struct GameObject* m_bindingsCanvas;
    struct SpellUIPassiveShards* m_passiveCanvas;
    struct GameObject* SpellDetailsCanvasPrefab;
    struct GameObject* ShardDetailsCanvasPrefab;
    struct Transform* AnchorItemDetails;
    struct SpiritShardUIShardDetails* m_shardDetailsCanvas;
    struct SpellUISpellDetails* m_spellDetailsCanvas;
    struct EquipmentUIInventoryGrid* m_spellDetailsGrid;
    struct GameObject* SpellItemPrefab;
    struct GameObject* ShardItemPrefab;
    struct GameObject* ItemHighlightGO;
    struct GameObject* ExperiencePrefab;
    struct Transform* AnchorExperience;
    struct SpellUIExperience* m_experience;
    struct GameObject* ShardsOverlayPrefab;
    struct SpellUIShardListOverlay* m_shardsOverlay;
    struct GameObject* ConfirmationOverlayPrefab;
    struct SpellUIConfirmationOverlay* m_confirmationOverlay;
    struct EquipmentUIInventoryGrid* Grid;
    struct SpellUIEquipScreen_MessageProviders Messages;
    struct SpellUIEquipScreen_HintsSettings Hints;
    SpellUIEquipScreen_State__Enum m_state;

    SpellUIEquipScreen_Category__Enum m_currentCategory;

    struct SpiritShardUIItem* m_confirmContextShard;
    struct SpiritShardUIItem_Context* m_spiritShardUIContext;
    struct MessageBox* m_currentHint;
    struct PlayerUberStateShards_Shard* m_autoFocusShard;
    struct PlayerUberStateInventory_InventoryItem* m_autoFocusEquipment;
    bool m_isInited;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUIEquipScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellUIEquipScreen__Fields_FWDDECL
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/PlayerUberStateInventory_InventoryItem.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpellUIConfirmationOverlay.h>
#include <Modloader/app/structs/SpellUIExperience.h>
#include <Modloader/app/structs/SpellUIPassiveShards.h>
#include <Modloader/app/structs/SpellUIShardListOverlay.h>
#include <Modloader/app/structs/SpellUISpellDetails.h>
#include <Modloader/app/structs/SpiritShardUIItem.h>
#include <Modloader/app/structs/SpiritShardUIItem_Context.h>
#include <Modloader/app/structs/SpiritShardUIShardDetails.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/WidgetUIHorizontalSelect.h>
#endif
#undef IL2CPP_STRUCT_SpellUIEquipScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIEquipScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellUIEquipScreen__Fields_FWDDECL)
#include <Modloader/app/structs/SpellUIEquipScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUIEquipScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
