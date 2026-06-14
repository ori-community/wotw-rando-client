#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetObjectsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetObjectsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetObjectsRequest_DEFINED)
#include <Modloader/app/structs/SetObjectsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SetObjectsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SetObjectsRequest_DEFINED
struct SetObjectsRequest__Class;
struct SetObjectsRequest {
    struct SetObjectsRequest__Class* klass;
    MonitorData* monitor;
    struct SetObjectsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetObjectsRequest_FWDDECL)
#define IL2CPP_STRUCT_SetObjectsRequest_FWDDECL
#include <Modloader/app/structs/SetObjectsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SetObjectsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetObjectsRequest_DEFINED) && !defined(IL2CPP_STRUCT_SetObjectsRequest_FWDDECL)
#include <Modloader/app/structs/SetObjectsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetObjectsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
