#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeleteRemoteUserRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeleteRemoteUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteRemoteUserRequest_DEFINED)
#include <Modloader/app/structs/DeleteRemoteUserRequest__Fields.h>
#if defined(IL2CPP_STRUCT_DeleteRemoteUserRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_DeleteRemoteUserRequest_DEFINED
struct DeleteRemoteUserRequest__Class;
struct DeleteRemoteUserRequest {
    struct DeleteRemoteUserRequest__Class* klass;
    MonitorData* monitor;
    struct DeleteRemoteUserRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeleteRemoteUserRequest_FWDDECL)
#define IL2CPP_STRUCT_DeleteRemoteUserRequest_FWDDECL
#include <Modloader/app/structs/DeleteRemoteUserRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_DeleteRemoteUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteRemoteUserRequest_DEFINED) && !defined(IL2CPP_STRUCT_DeleteRemoteUserRequest_FWDDECL)
#include <Modloader/app/structs/DeleteRemoteUserRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeleteRemoteUserRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
