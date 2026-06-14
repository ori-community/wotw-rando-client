#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthUserRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthUserRequest_DEFINED)
#include <Modloader/app/structs/AuthUserRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AuthUserRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AuthUserRequest_DEFINED
struct AuthUserRequest__Class;
struct AuthUserRequest {
    struct AuthUserRequest__Class* klass;
    MonitorData* monitor;
    struct AuthUserRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuthUserRequest_FWDDECL)
#define IL2CPP_STRUCT_AuthUserRequest_FWDDECL
#include <Modloader/app/structs/AuthUserRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AuthUserRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthUserRequest_DEFINED) && !defined(IL2CPP_STRUCT_AuthUserRequest_FWDDECL)
#include <Modloader/app/structs/AuthUserRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthUserRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
