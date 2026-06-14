#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUIShardListOverlay__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUIShardListOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIShardListOverlay__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SpellUIShardListOverlay__Fields_DEFINED
struct LegacyTransparencyAnimator;
struct GameObject;
struct Transform;
struct SpiritShardUIShardDetails;
struct EquipmentUIInventoryGrid;
struct Action_1_SpiritShardUIItem_;
struct Action;
struct SpiritShardUIItem_Context;
struct PlayerUberStateShards_Shard;
struct SpellUIShardListOverlay__Fields {
    struct MenuScreen__Fields _;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct GameObject* DetailsCanvasPrefab;
    struct Transform* DetailsCanvasTransform;
    struct SpiritShardUIShardDetails* m_detailsCanvas;
    struct EquipmentUIInventoryGrid* Grid;
    struct GameObject* ShardItemPrefab;
    struct GameObject* ShardItemHighlightGO;
    struct Action_1_SpiritShardUIItem_* OnShardActivated;
    struct Action* OnClosing;
    struct SpiritShardUIItem_Context* m_spiritShardUIContext;
    struct PlayerUberStateShards_Shard* m_initiallySelected;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUIShardListOverlay__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellUIShardListOverlay__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_SpiritShardUIItem_.h>
#include <Modloader/app/structs/EquipmentUIInventoryGrid.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/PlayerUberStateShards_Shard.h>
#include <Modloader/app/structs/SpiritShardUIItem_Context.h>
#include <Modloader/app/structs/SpiritShardUIShardDetails.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpellUIShardListOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIShardListOverlay__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellUIShardListOverlay__Fields_FWDDECL)
#include <Modloader/app/structs/SpellUIShardListOverlay__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUIShardListOverlay__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
