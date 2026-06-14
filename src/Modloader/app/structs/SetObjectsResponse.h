#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetObjectsResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetObjectsResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetObjectsResponse_DEFINED)
#include <Modloader/app/structs/SetObjectsResponse__Fields.h>
#if defined(IL2CPP_STRUCT_SetObjectsResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_SetObjectsResponse_DEFINED
struct SetObjectsResponse__Class;
struct SetObjectsResponse {
    struct SetObjectsResponse__Class* klass;
    MonitorData* monitor;
    struct SetObjectsResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetObjectsResponse_FWDDECL)
#define IL2CPP_STRUCT_SetObjectsResponse_FWDDECL
#include <Modloader/app/structs/SetObjectsResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_SetObjectsResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetObjectsResponse_DEFINED) && !defined(IL2CPP_STRUCT_SetObjectsResponse_FWDDECL)
#include <Modloader/app/structs/SetObjectsResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetObjectsResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
