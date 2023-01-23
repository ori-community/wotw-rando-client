#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetUserDataRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetUserDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserDataRequest_DEFINED)
#include <Modloader/app/structs/GetUserDataRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetUserDataRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetUserDataRequest_DEFINED
struct GetUserDataRequest__Class;
struct GetUserDataRequest {
    struct GetUserDataRequest__Class* klass;
    MonitorData* monitor;
    struct GetUserDataRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetUserDataRequest_FWDDECL)
#define IL2CPP_STRUCT_GetUserDataRequest_FWDDECL
#include <Modloader/app/structs/GetUserDataRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetUserDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserDataRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetUserDataRequest_FWDDECL)
#include <Modloader/app/structs/GetUserDataRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetUserDataRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
