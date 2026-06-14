#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerSegmentsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerSegmentsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerSegmentsRequest_DEFINED)
#include <Modloader/app/structs/GetPlayerSegmentsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayerSegmentsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerSegmentsRequest_DEFINED
struct GetPlayerSegmentsRequest__Class;
struct GetPlayerSegmentsRequest {
    struct GetPlayerSegmentsRequest__Class* klass;
    MonitorData* monitor;
    struct GetPlayerSegmentsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerSegmentsRequest_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerSegmentsRequest_FWDDECL
#include <Modloader/app/structs/GetPlayerSegmentsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerSegmentsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerSegmentsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerSegmentsRequest_FWDDECL)
#include <Modloader/app/structs/GetPlayerSegmentsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerSegmentsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
