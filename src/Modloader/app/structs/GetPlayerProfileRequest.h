#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerProfileRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerProfileRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerProfileRequest_DEFINED)
#include <Modloader/app/structs/GetPlayerProfileRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayerProfileRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerProfileRequest_DEFINED
struct GetPlayerProfileRequest__Class;
struct GetPlayerProfileRequest {
    struct GetPlayerProfileRequest__Class* klass;
    MonitorData* monitor;
    struct GetPlayerProfileRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerProfileRequest_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerProfileRequest_FWDDECL
#include <Modloader/app/structs/GetPlayerProfileRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerProfileRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerProfileRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerProfileRequest_FWDDECL)
#include <Modloader/app/structs/GetPlayerProfileRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerProfileRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
