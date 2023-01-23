#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetEntityProfileResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetEntityProfileResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityProfileResponse_DEFINED)
#include <Modloader/app/structs/GetEntityProfileResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetEntityProfileResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetEntityProfileResponse_DEFINED
struct GetEntityProfileResponse__Class;
struct GetEntityProfileResponse {
    struct GetEntityProfileResponse__Class* klass;
    MonitorData* monitor;
    struct GetEntityProfileResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetEntityProfileResponse_FWDDECL)
#define IL2CPP_STRUCT_GetEntityProfileResponse_FWDDECL
#include <Modloader/app/structs/GetEntityProfileResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetEntityProfileResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityProfileResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetEntityProfileResponse_FWDDECL)
#include <Modloader/app/structs/GetEntityProfileResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetEntityProfileResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
