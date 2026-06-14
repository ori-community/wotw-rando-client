#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginWithPSNRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginWithPSNRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithPSNRequest_DEFINED)
#include <Modloader/app/structs/LoginWithPSNRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LoginWithPSNRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LoginWithPSNRequest_DEFINED
struct LoginWithPSNRequest__Class;
struct LoginWithPSNRequest {
    struct LoginWithPSNRequest__Class* klass;
    MonitorData* monitor;
    struct LoginWithPSNRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginWithPSNRequest_FWDDECL)
#define IL2CPP_STRUCT_LoginWithPSNRequest_FWDDECL
#include <Modloader/app/structs/LoginWithPSNRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LoginWithPSNRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithPSNRequest_DEFINED) && !defined(IL2CPP_STRUCT_LoginWithPSNRequest_FWDDECL)
#include <Modloader/app/structs/LoginWithPSNRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginWithPSNRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
