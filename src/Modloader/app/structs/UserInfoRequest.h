#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserInfoRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserInfoRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserInfoRequest_DEFINED)
#include <Modloader/app/structs/UserInfoRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UserInfoRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UserInfoRequest_DEFINED
struct UserInfoRequest__Class;
struct UserInfoRequest {
    struct UserInfoRequest__Class* klass;
    MonitorData* monitor;
    struct UserInfoRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserInfoRequest_FWDDECL)
#define IL2CPP_STRUCT_UserInfoRequest_FWDDECL
#include <Modloader/app/structs/UserInfoRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UserInfoRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserInfoRequest_DEFINED) && !defined(IL2CPP_STRUCT_UserInfoRequest_FWDDECL)
#include <Modloader/app/structs/UserInfoRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserInfoRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
