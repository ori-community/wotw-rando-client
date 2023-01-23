#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetMatchRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetMatchRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMatchRequest_DEFINED)
#include <Modloader/app/structs/GetMatchRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetMatchRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetMatchRequest_DEFINED
struct GetMatchRequest__Class;
struct GetMatchRequest {
    struct GetMatchRequest__Class* klass;
    MonitorData* monitor;
    struct GetMatchRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetMatchRequest_FWDDECL)
#define IL2CPP_STRUCT_GetMatchRequest_FWDDECL
#include <Modloader/app/structs/GetMatchRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetMatchRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMatchRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetMatchRequest_FWDDECL)
#include <Modloader/app/structs/GetMatchRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetMatchRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
