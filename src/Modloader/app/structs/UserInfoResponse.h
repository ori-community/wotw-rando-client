#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserInfoResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserInfoResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserInfoResponse_DEFINED)
#include <Modloader/app/structs/UserInfoResponse__Fields.h>
#if defined(IL2CPP_STRUCT_UserInfoResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_UserInfoResponse_DEFINED
struct UserInfoResponse__Class;
struct UserInfoResponse {
    struct UserInfoResponse__Class* klass;
    MonitorData* monitor;
    struct UserInfoResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserInfoResponse_FWDDECL)
#define IL2CPP_STRUCT_UserInfoResponse_FWDDECL
#include <Modloader/app/structs/UserInfoResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_UserInfoResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserInfoResponse_DEFINED) && !defined(IL2CPP_STRUCT_UserInfoResponse_FWDDECL)
#include <Modloader/app/structs/UserInfoResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserInfoResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
