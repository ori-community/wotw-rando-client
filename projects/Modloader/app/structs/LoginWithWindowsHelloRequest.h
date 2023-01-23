#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginWithWindowsHelloRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginWithWindowsHelloRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithWindowsHelloRequest_DEFINED)
#include <Modloader/app/structs/LoginWithWindowsHelloRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LoginWithWindowsHelloRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LoginWithWindowsHelloRequest_DEFINED
struct LoginWithWindowsHelloRequest__Class;
struct LoginWithWindowsHelloRequest {
    struct LoginWithWindowsHelloRequest__Class* klass;
    MonitorData* monitor;
    struct LoginWithWindowsHelloRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginWithWindowsHelloRequest_FWDDECL)
#define IL2CPP_STRUCT_LoginWithWindowsHelloRequest_FWDDECL
#include <Modloader/app/structs/LoginWithWindowsHelloRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LoginWithWindowsHelloRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithWindowsHelloRequest_DEFINED) && !defined(IL2CPP_STRUCT_LoginWithWindowsHelloRequest_FWDDECL)
#include <Modloader/app/structs/LoginWithWindowsHelloRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginWithWindowsHelloRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
