#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthenticationException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthenticationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationException_DEFINED)
#include <Modloader/app/structs/AuthenticationException__Fields.h>
#if defined(IL2CPP_STRUCT_AuthenticationException__Fields_DEFINED)
#define IL2CPP_STRUCT_AuthenticationException_DEFINED
struct AuthenticationException__Class;
struct AuthenticationException {
    struct AuthenticationException__Class* klass;
    MonitorData* monitor;
    struct AuthenticationException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuthenticationException_FWDDECL)
#define IL2CPP_STRUCT_AuthenticationException_FWDDECL
#include <Modloader/app/structs/AuthenticationException__Class.h>
#endif
#undef IL2CPP_STRUCT_AuthenticationException_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationException_DEFINED) && !defined(IL2CPP_STRUCT_AuthenticationException_FWDDECL)
#include <Modloader/app/structs/AuthenticationException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthenticationException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
