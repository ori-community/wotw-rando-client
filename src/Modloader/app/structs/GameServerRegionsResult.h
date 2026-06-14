#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameServerRegionsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameServerRegionsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameServerRegionsResult_DEFINED)
#include <Modloader/app/structs/GameServerRegionsResult__Fields.h>
#if defined(IL2CPP_STRUCT_GameServerRegionsResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GameServerRegionsResult_DEFINED
struct GameServerRegionsResult__Class;
struct GameServerRegionsResult {
    struct GameServerRegionsResult__Class* klass;
    MonitorData* monitor;
    struct GameServerRegionsResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameServerRegionsResult_FWDDECL)
#define IL2CPP_STRUCT_GameServerRegionsResult_FWDDECL
#include <Modloader/app/structs/GameServerRegionsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GameServerRegionsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameServerRegionsResult_DEFINED) && !defined(IL2CPP_STRUCT_GameServerRegionsResult_FWDDECL)
#include <Modloader/app/structs/GameServerRegionsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameServerRegionsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
