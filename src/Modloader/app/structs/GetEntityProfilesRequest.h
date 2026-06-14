#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetEntityProfilesRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetEntityProfilesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityProfilesRequest_DEFINED)
#include <Modloader/app/structs/GetEntityProfilesRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetEntityProfilesRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetEntityProfilesRequest_DEFINED
struct GetEntityProfilesRequest__Class;
struct GetEntityProfilesRequest {
    struct GetEntityProfilesRequest__Class* klass;
    MonitorData* monitor;
    struct GetEntityProfilesRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetEntityProfilesRequest_FWDDECL)
#define IL2CPP_STRUCT_GetEntityProfilesRequest_FWDDECL
#include <Modloader/app/structs/GetEntityProfilesRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetEntityProfilesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityProfilesRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetEntityProfilesRequest_FWDDECL)
#include <Modloader/app/structs/GetEntityProfilesRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetEntityProfilesRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
