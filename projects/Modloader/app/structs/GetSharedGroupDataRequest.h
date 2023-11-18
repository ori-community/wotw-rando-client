#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetSharedGroupDataRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetSharedGroupDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetSharedGroupDataRequest_DEFINED)
#include <Modloader/app/structs/GetSharedGroupDataRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetSharedGroupDataRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetSharedGroupDataRequest_DEFINED
struct GetSharedGroupDataRequest__Class;
struct GetSharedGroupDataRequest {
    struct GetSharedGroupDataRequest__Class* klass;
    MonitorData* monitor;
    struct GetSharedGroupDataRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetSharedGroupDataRequest_FWDDECL)
#define IL2CPP_STRUCT_GetSharedGroupDataRequest_FWDDECL
#include <Modloader/app/structs/GetSharedGroupDataRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetSharedGroupDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetSharedGroupDataRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetSharedGroupDataRequest_FWDDECL)
#include <Modloader/app/structs/GetSharedGroupDataRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetSharedGroupDataRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
