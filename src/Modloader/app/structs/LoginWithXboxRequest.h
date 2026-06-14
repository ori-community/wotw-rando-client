#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginWithXboxRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginWithXboxRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithXboxRequest_DEFINED)
#include <Modloader/app/structs/LoginWithXboxRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LoginWithXboxRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LoginWithXboxRequest_DEFINED
struct LoginWithXboxRequest__Class;
struct LoginWithXboxRequest {
    struct LoginWithXboxRequest__Class* klass;
    MonitorData* monitor;
    struct LoginWithXboxRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginWithXboxRequest_FWDDECL)
#define IL2CPP_STRUCT_LoginWithXboxRequest_FWDDECL
#include <Modloader/app/structs/LoginWithXboxRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LoginWithXboxRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithXboxRequest_DEFINED) && !defined(IL2CPP_STRUCT_LoginWithXboxRequest_FWDDECL)
#include <Modloader/app/structs/LoginWithXboxRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginWithXboxRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
