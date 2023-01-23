#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerSpiritShards_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerSpiritShards_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerSpiritShards_DEFINED)
#include <Modloader/app/structs/PlayerSpiritShards__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerSpiritShards__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerSpiritShards_DEFINED
struct PlayerSpiritShards__Class;
struct PlayerSpiritShards {
    struct PlayerSpiritShards__Class* klass;
    MonitorData* monitor;
    struct PlayerSpiritShards__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerSpiritShards_FWDDECL)
#define IL2CPP_STRUCT_PlayerSpiritShards_FWDDECL
#include <Modloader/app/structs/PlayerSpiritShards__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerSpiritShards_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerSpiritShards_DEFINED) && !defined(IL2CPP_STRUCT_PlayerSpiritShards_FWDDECL)
#include <Modloader/app/structs/PlayerSpiritShards.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerSpiritShards.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
