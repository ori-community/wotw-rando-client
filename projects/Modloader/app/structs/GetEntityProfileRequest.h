#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetEntityProfileRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetEntityProfileRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityProfileRequest_DEFINED)
#include <Modloader/app/structs/GetEntityProfileRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetEntityProfileRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetEntityProfileRequest_DEFINED
struct GetEntityProfileRequest__Class;
struct GetEntityProfileRequest {
    struct GetEntityProfileRequest__Class* klass;
    MonitorData* monitor;
    struct GetEntityProfileRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetEntityProfileRequest_FWDDECL)
#define IL2CPP_STRUCT_GetEntityProfileRequest_FWDDECL
#include <Modloader/app/structs/GetEntityProfileRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetEntityProfileRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetEntityProfileRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetEntityProfileRequest_FWDDECL)
#include <Modloader/app/structs/GetEntityProfileRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetEntityProfileRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
