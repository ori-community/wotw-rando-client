#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetFilesRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetFilesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFilesRequest_DEFINED)
#include <Modloader/app/structs/GetFilesRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetFilesRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetFilesRequest_DEFINED
struct GetFilesRequest__Class;
struct GetFilesRequest {
    struct GetFilesRequest__Class* klass;
    MonitorData* monitor;
    struct GetFilesRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetFilesRequest_FWDDECL)
#define IL2CPP_STRUCT_GetFilesRequest_FWDDECL
#include <Modloader/app/structs/GetFilesRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetFilesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFilesRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetFilesRequest_FWDDECL)
#include <Modloader/app/structs/GetFilesRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetFilesRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
