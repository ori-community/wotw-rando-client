#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetAllSegmentsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetAllSegmentsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAllSegmentsRequest_DEFINED)
#include <Modloader/app/structs/GetAllSegmentsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetAllSegmentsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetAllSegmentsRequest_DEFINED
struct GetAllSegmentsRequest__Class;
struct GetAllSegmentsRequest {
    struct GetAllSegmentsRequest__Class* klass;
    MonitorData* monitor;
    struct GetAllSegmentsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetAllSegmentsRequest_FWDDECL)
#define IL2CPP_STRUCT_GetAllSegmentsRequest_FWDDECL
#include <Modloader/app/structs/GetAllSegmentsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetAllSegmentsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAllSegmentsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetAllSegmentsRequest_FWDDECL)
#include <Modloader/app/structs/GetAllSegmentsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetAllSegmentsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
