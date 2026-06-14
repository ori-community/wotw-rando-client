#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateShards_Shard__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateShards_Shard__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateShards_Shard__Fields_DEFINED)
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#if defined(IL2CPP_STRUCT_SpiritShardType__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateShards_Shard__Fields_DEFINED
struct Action;
struct __declspec(align(8)) PlayerUberStateShards_Shard__Fields {
    SpiritShardType__Enum m_type;

    int32_t m_level;
    bool m_isNew;
    bool m_gained;
    bool m_equipOnStart;
    int32_t m_index;
    struct Action* m_setDirtyCallback;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateShards_Shard__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateShards_Shard__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateShards_Shard__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateShards_Shard__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateShards_Shard__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateShards_Shard__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateShards_Shard__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
