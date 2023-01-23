#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateRemoteUserRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateRemoteUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateRemoteUserRequest_DEFINED)
#include <Modloader/app/structs/CreateRemoteUserRequest__Fields.h>
#if defined(IL2CPP_STRUCT_CreateRemoteUserRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateRemoteUserRequest_DEFINED
struct CreateRemoteUserRequest__Class;
struct CreateRemoteUserRequest {
    struct CreateRemoteUserRequest__Class* klass;
    MonitorData* monitor;
    struct CreateRemoteUserRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateRemoteUserRequest_FWDDECL)
#define IL2CPP_STRUCT_CreateRemoteUserRequest_FWDDECL
#include <Modloader/app/structs/CreateRemoteUserRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateRemoteUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateRemoteUserRequest_DEFINED) && !defined(IL2CPP_STRUCT_CreateRemoteUserRequest_FWDDECL)
#include <Modloader/app/structs/CreateRemoteUserRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateRemoteUserRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
