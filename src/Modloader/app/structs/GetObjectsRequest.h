#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetObjectsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetObjectsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetObjectsRequest_DEFINED)
#include <Modloader/app/structs/GetObjectsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetObjectsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetObjectsRequest_DEFINED
struct GetObjectsRequest__Class;
struct GetObjectsRequest {
    struct GetObjectsRequest__Class* klass;
    MonitorData* monitor;
    struct GetObjectsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetObjectsRequest_FWDDECL)
#define IL2CPP_STRUCT_GetObjectsRequest_FWDDECL
#include <Modloader/app/structs/GetObjectsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetObjectsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetObjectsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetObjectsRequest_FWDDECL)
#include <Modloader/app/structs/GetObjectsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetObjectsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
