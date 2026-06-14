#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetBuildRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetBuildRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetBuildRequest_DEFINED)
#include <Modloader/app/structs/GetBuildRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetBuildRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetBuildRequest_DEFINED
struct GetBuildRequest__Class;
struct GetBuildRequest {
    struct GetBuildRequest__Class* klass;
    MonitorData* monitor;
    struct GetBuildRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetBuildRequest_FWDDECL)
#define IL2CPP_STRUCT_GetBuildRequest_FWDDECL
#include <Modloader/app/structs/GetBuildRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetBuildRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetBuildRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetBuildRequest_FWDDECL)
#include <Modloader/app/structs/GetBuildRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetBuildRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
