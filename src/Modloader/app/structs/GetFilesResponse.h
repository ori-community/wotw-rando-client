#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetFilesResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetFilesResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFilesResponse_DEFINED)
#include <Modloader/app/structs/GetFilesResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetFilesResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetFilesResponse_DEFINED
struct GetFilesResponse__Class;
struct GetFilesResponse {
    struct GetFilesResponse__Class* klass;
    MonitorData* monitor;
    struct GetFilesResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetFilesResponse_FWDDECL)
#define IL2CPP_STRUCT_GetFilesResponse_FWDDECL
#include <Modloader/app/structs/GetFilesResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetFilesResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFilesResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetFilesResponse_FWDDECL)
#include <Modloader/app/structs/GetFilesResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetFilesResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
