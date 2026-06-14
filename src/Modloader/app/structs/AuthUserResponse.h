#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthUserResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthUserResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthUserResponse_DEFINED)
#include <Modloader/app/structs/AuthUserResponse__Fields.h>
#if defined(IL2CPP_STRUCT_AuthUserResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_AuthUserResponse_DEFINED
struct AuthUserResponse__Class;
struct AuthUserResponse {
    struct AuthUserResponse__Class* klass;
    MonitorData* monitor;
    struct AuthUserResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuthUserResponse_FWDDECL)
#define IL2CPP_STRUCT_AuthUserResponse_FWDDECL
#include <Modloader/app/structs/AuthUserResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_AuthUserResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthUserResponse_DEFINED) && !defined(IL2CPP_STRUCT_AuthUserResponse_FWDDECL)
#include <Modloader/app/structs/AuthUserResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthUserResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
