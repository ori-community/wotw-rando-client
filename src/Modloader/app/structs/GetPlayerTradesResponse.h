#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerTradesResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerTradesResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerTradesResponse_DEFINED)
#include <Modloader/app/structs/GetPlayerTradesResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayerTradesResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerTradesResponse_DEFINED
struct GetPlayerTradesResponse__Class;
struct GetPlayerTradesResponse {
    struct GetPlayerTradesResponse__Class* klass;
    MonitorData* monitor;
    struct GetPlayerTradesResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerTradesResponse_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerTradesResponse_FWDDECL
#include <Modloader/app/structs/GetPlayerTradesResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerTradesResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerTradesResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerTradesResponse_FWDDECL)
#include <Modloader/app/structs/GetPlayerTradesResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerTradesResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
