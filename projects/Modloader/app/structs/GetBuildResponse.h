#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetBuildResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetBuildResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetBuildResponse_DEFINED)
#include <Modloader/app/structs/GetBuildResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetBuildResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetBuildResponse_DEFINED
struct GetBuildResponse__Class;
struct GetBuildResponse {
    struct GetBuildResponse__Class* klass;
    MonitorData* monitor;
    struct GetBuildResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetBuildResponse_FWDDECL)
#define IL2CPP_STRUCT_GetBuildResponse_FWDDECL
#include <Modloader/app/structs/GetBuildResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetBuildResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetBuildResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetBuildResponse_FWDDECL)
#include <Modloader/app/structs/GetBuildResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetBuildResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
