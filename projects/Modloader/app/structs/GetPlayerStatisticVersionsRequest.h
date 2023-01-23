#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerStatisticVersionsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerStatisticVersionsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerStatisticVersionsRequest_DEFINED)
#include <Modloader/app/structs/GetPlayerStatisticVersionsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayerStatisticVersionsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerStatisticVersionsRequest_DEFINED
struct GetPlayerStatisticVersionsRequest__Class;
struct GetPlayerStatisticVersionsRequest {
    struct GetPlayerStatisticVersionsRequest__Class* klass;
    MonitorData* monitor;
    struct GetPlayerStatisticVersionsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerStatisticVersionsRequest_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerStatisticVersionsRequest_FWDDECL
#include <Modloader/app/structs/GetPlayerStatisticVersionsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerStatisticVersionsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerStatisticVersionsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerStatisticVersionsRequest_FWDDECL)
#include <Modloader/app/structs/GetPlayerStatisticVersionsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerStatisticVersionsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
