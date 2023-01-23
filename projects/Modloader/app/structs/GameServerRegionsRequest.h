#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameServerRegionsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameServerRegionsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameServerRegionsRequest_DEFINED)
#include <Modloader/app/structs/GameServerRegionsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GameServerRegionsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GameServerRegionsRequest_DEFINED
struct GameServerRegionsRequest__Class;
struct GameServerRegionsRequest {
    struct GameServerRegionsRequest__Class* klass;
    MonitorData* monitor;
    struct GameServerRegionsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameServerRegionsRequest_FWDDECL)
#define IL2CPP_STRUCT_GameServerRegionsRequest_FWDDECL
#include <Modloader/app/structs/GameServerRegionsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GameServerRegionsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameServerRegionsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GameServerRegionsRequest_FWDDECL)
#include <Modloader/app/structs/GameServerRegionsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameServerRegionsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
