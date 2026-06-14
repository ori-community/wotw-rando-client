#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetUserAccountInfoRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetUserAccountInfoRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserAccountInfoRequest_DEFINED)
#include <Modloader/app/structs/GetUserAccountInfoRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetUserAccountInfoRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetUserAccountInfoRequest_DEFINED
struct GetUserAccountInfoRequest__Class;
struct GetUserAccountInfoRequest {
    struct GetUserAccountInfoRequest__Class* klass;
    MonitorData* monitor;
    struct GetUserAccountInfoRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetUserAccountInfoRequest_FWDDECL)
#define IL2CPP_STRUCT_GetUserAccountInfoRequest_FWDDECL
#include <Modloader/app/structs/GetUserAccountInfoRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetUserAccountInfoRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserAccountInfoRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetUserAccountInfoRequest_FWDDECL)
#include <Modloader/app/structs/GetUserAccountInfoRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetUserAccountInfoRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
