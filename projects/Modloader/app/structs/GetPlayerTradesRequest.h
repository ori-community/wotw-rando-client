#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerTradesRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerTradesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerTradesRequest_DEFINED)
#include <Modloader/app/structs/GetPlayerTradesRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayerTradesRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerTradesRequest_DEFINED
struct GetPlayerTradesRequest__Class;
struct GetPlayerTradesRequest {
    struct GetPlayerTradesRequest__Class* klass;
    MonitorData* monitor;
    struct GetPlayerTradesRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerTradesRequest_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerTradesRequest_FWDDECL
#include <Modloader/app/structs/GetPlayerTradesRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerTradesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerTradesRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerTradesRequest_FWDDECL)
#include <Modloader/app/structs/GetPlayerTradesRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerTradesRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
