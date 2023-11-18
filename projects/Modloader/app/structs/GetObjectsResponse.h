#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetObjectsResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetObjectsResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetObjectsResponse_DEFINED)
#include <Modloader/app/structs/GetObjectsResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetObjectsResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetObjectsResponse_DEFINED
struct GetObjectsResponse__Class;
struct GetObjectsResponse {
    struct GetObjectsResponse__Class* klass;
    MonitorData* monitor;
    struct GetObjectsResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetObjectsResponse_FWDDECL)
#define IL2CPP_STRUCT_GetObjectsResponse_FWDDECL
#include <Modloader/app/structs/GetObjectsResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetObjectsResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetObjectsResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetObjectsResponse_FWDDECL)
#include <Modloader/app/structs/GetObjectsResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetObjectsResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
