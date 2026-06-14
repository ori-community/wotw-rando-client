#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerUberStateShards_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerUberStateShards_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateShards_DEFINED)
#include <Modloader/app/structs/PlayerUberStateShards__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerUberStateShards__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerUberStateShards_DEFINED
struct PlayerUberStateShards__Class;
struct PlayerUberStateShards {
    struct PlayerUberStateShards__Class* klass;
    MonitorData* monitor;
    struct PlayerUberStateShards__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerUberStateShards_FWDDECL)
#define IL2CPP_STRUCT_PlayerUberStateShards_FWDDECL
#include <Modloader/app/structs/PlayerUberStateShards__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerUberStateShards_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerUberStateShards_DEFINED) && !defined(IL2CPP_STRUCT_PlayerUberStateShards_FWDDECL)
#include <Modloader/app/structs/PlayerUberStateShards.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerUberStateShards.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
