#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateRemoteUserResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateRemoteUserResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateRemoteUserResponse_DEFINED)
#include <Modloader/app/structs/CreateRemoteUserResponse__Fields.h>
#if defined(IL2CPP_STRUCT_CreateRemoteUserResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateRemoteUserResponse_DEFINED
struct CreateRemoteUserResponse__Class;
struct CreateRemoteUserResponse {
    struct CreateRemoteUserResponse__Class* klass;
    MonitorData* monitor;
    struct CreateRemoteUserResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateRemoteUserResponse_FWDDECL)
#define IL2CPP_STRUCT_CreateRemoteUserResponse_FWDDECL
#include <Modloader/app/structs/CreateRemoteUserResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateRemoteUserResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateRemoteUserResponse_DEFINED) && !defined(IL2CPP_STRUCT_CreateRemoteUserResponse_FWDDECL)
#include <Modloader/app/structs/CreateRemoteUserResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateRemoteUserResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
