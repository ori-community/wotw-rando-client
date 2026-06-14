#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetEntityTokenRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetEntityTokenRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityTokenRequest_DEFINED)
#include <Modloader/app/structs/GetEntityTokenRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetEntityTokenRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetEntityTokenRequest_DEFINED
struct GetEntityTokenRequest__Class;
struct GetEntityTokenRequest {
    struct GetEntityTokenRequest__Class* klass;
    MonitorData* monitor;
    struct GetEntityTokenRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetEntityTokenRequest_FWDDECL)
#define IL2CPP_STRUCT_GetEntityTokenRequest_FWDDECL
#include <Modloader/app/structs/GetEntityTokenRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetEntityTokenRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityTokenRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetEntityTokenRequest_FWDDECL)
#include <Modloader/app/structs/GetEntityTokenRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetEntityTokenRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
