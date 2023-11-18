#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetEntityProfilesResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetEntityProfilesResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityProfilesResponse_DEFINED)
#include <Modloader/app/structs/GetEntityProfilesResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetEntityProfilesResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetEntityProfilesResponse_DEFINED
struct GetEntityProfilesResponse__Class;
struct GetEntityProfilesResponse {
    struct GetEntityProfilesResponse__Class* klass;
    MonitorData* monitor;
    struct GetEntityProfilesResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetEntityProfilesResponse_FWDDECL)
#define IL2CPP_STRUCT_GetEntityProfilesResponse_FWDDECL
#include <Modloader/app/structs/GetEntityProfilesResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetEntityProfilesResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityProfilesResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetEntityProfilesResponse_FWDDECL)
#include <Modloader/app/structs/GetEntityProfilesResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetEntityProfilesResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
