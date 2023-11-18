#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetUserBansRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetUserBansRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserBansRequest_DEFINED)
#include <Modloader/app/structs/GetUserBansRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetUserBansRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetUserBansRequest_DEFINED
struct GetUserBansRequest__Class;
struct GetUserBansRequest {
    struct GetUserBansRequest__Class* klass;
    MonitorData* monitor;
    struct GetUserBansRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetUserBansRequest_FWDDECL)
#define IL2CPP_STRUCT_GetUserBansRequest_FWDDECL
#include <Modloader/app/structs/GetUserBansRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetUserBansRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserBansRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetUserBansRequest_FWDDECL)
#include <Modloader/app/structs/GetUserBansRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetUserBansRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
