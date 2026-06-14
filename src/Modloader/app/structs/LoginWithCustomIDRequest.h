#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginWithCustomIDRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginWithCustomIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithCustomIDRequest_DEFINED)
#include <Modloader/app/structs/LoginWithCustomIDRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LoginWithCustomIDRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LoginWithCustomIDRequest_DEFINED
struct LoginWithCustomIDRequest__Class;
struct LoginWithCustomIDRequest {
    struct LoginWithCustomIDRequest__Class* klass;
    MonitorData* monitor;
    struct LoginWithCustomIDRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginWithCustomIDRequest_FWDDECL)
#define IL2CPP_STRUCT_LoginWithCustomIDRequest_FWDDECL
#include <Modloader/app/structs/LoginWithCustomIDRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LoginWithCustomIDRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithCustomIDRequest_DEFINED) && !defined(IL2CPP_STRUCT_LoginWithCustomIDRequest_FWDDECL)
#include <Modloader/app/structs/LoginWithCustomIDRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginWithCustomIDRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
