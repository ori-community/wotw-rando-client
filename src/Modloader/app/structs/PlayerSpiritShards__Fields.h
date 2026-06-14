#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerSpiritShards__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerSpiritShards__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerSpiritShards__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerSpiritShards__Fields_DEFINED
struct SeinCharacter;
struct List_1_SpiritShardType_;
struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_;
struct Action;
struct Boolean__Array;
struct Int32__Array;
struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct PlayerSpiritShards__Fields {
    struct MonoBehaviour__Fields _;
    struct SeinCharacter* m_sein;
    struct List_1_SpiritShardType_* InventoryItemsAvailableToBuy;
    struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* OnInventoryUpdated;
    struct Action* OnGlobalShardsUpdated;
    struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* OnGlobalShardsEquip;
    struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* OnGlobalShardsUnequip;
    struct Boolean__Array* m_hasShard;
    struct Boolean__Array* m_isShardEquipped;
    struct Int32__Array* m_shardLevel;
    struct Int32__Array* m_shardMaxLevel;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* m_currentEquippedShards;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* m_shardsToEquip;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* m_shardsToUnequip;
    struct IUberState__Array* m_affectingUberStates;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerSpiritShards__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerSpiritShards__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_.h>
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_.h>
#include <Modloader/app/structs/List_1_SpiritShardType_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/SeinCharacter.h>
#endif
#undef IL2CPP_STRUCT_PlayerSpiritShards__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerSpiritShards__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerSpiritShards__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerSpiritShards__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerSpiritShards__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
