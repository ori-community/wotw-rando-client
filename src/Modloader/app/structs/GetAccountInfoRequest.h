#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetAccountInfoRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetAccountInfoRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAccountInfoRequest_DEFINED)
#include <Modloader/app/structs/GetAccountInfoRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetAccountInfoRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetAccountInfoRequest_DEFINED
struct GetAccountInfoRequest__Class;
struct GetAccountInfoRequest {
    struct GetAccountInfoRequest__Class* klass;
    MonitorData* monitor;
    struct GetAccountInfoRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetAccountInfoRequest_FWDDECL)
#define IL2CPP_STRUCT_GetAccountInfoRequest_FWDDECL
#include <Modloader/app/structs/GetAccountInfoRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetAccountInfoRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAccountInfoRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetAccountInfoRequest_FWDDECL)
#include <Modloader/app/structs/GetAccountInfoRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetAccountInfoRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
