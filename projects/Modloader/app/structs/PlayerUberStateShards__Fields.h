#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateShards__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateShards__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateShards__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateShards__Fields_DEFINED
struct Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_;
struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_;
struct Action;
struct __declspec(align(8)) PlayerUberStateShards__Fields {
    struct Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* m_shards;
    struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_* m_shardsList;
    struct Action* m_setDirtyCallback;
    int32_t m_shardSlotCount;
    bool m_shardsFoldout;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateShards__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateShards__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Dictionary_2_SpiritShardType_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_.h>
#include <Modloader/app/structs/List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateShards__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateShards__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateShards__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateShards__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateShards__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
