#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegisterWithWindowsHelloRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegisterWithWindowsHelloRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterWithWindowsHelloRequest_DEFINED)
#include <Modloader/app/structs/RegisterWithWindowsHelloRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RegisterWithWindowsHelloRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RegisterWithWindowsHelloRequest_DEFINED
struct RegisterWithWindowsHelloRequest__Class;
struct RegisterWithWindowsHelloRequest {
    struct RegisterWithWindowsHelloRequest__Class* klass;
    MonitorData* monitor;
    struct RegisterWithWindowsHelloRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegisterWithWindowsHelloRequest_FWDDECL)
#define IL2CPP_STRUCT_RegisterWithWindowsHelloRequest_FWDDECL
#include <Modloader/app/structs/RegisterWithWindowsHelloRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RegisterWithWindowsHelloRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterWithWindowsHelloRequest_DEFINED) && !defined(IL2CPP_STRUCT_RegisterWithWindowsHelloRequest_FWDDECL)
#include <Modloader/app/structs/RegisterWithWindowsHelloRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegisterWithWindowsHelloRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
