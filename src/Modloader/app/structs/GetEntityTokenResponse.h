#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetEntityTokenResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetEntityTokenResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityTokenResponse_DEFINED)
#include <Modloader/app/structs/GetEntityTokenResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetEntityTokenResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetEntityTokenResponse_DEFINED
struct GetEntityTokenResponse__Class;
struct GetEntityTokenResponse {
    struct GetEntityTokenResponse__Class* klass;
    MonitorData* monitor;
    struct GetEntityTokenResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetEntityTokenResponse_FWDDECL)
#define IL2CPP_STRUCT_GetEntityTokenResponse_FWDDECL
#include <Modloader/app/structs/GetEntityTokenResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetEntityTokenResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityTokenResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetEntityTokenResponse_FWDDECL)
#include <Modloader/app/structs/GetEntityTokenResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetEntityTokenResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
