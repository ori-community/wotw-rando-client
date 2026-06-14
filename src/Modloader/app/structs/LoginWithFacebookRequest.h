#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginWithFacebookRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginWithFacebookRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithFacebookRequest_DEFINED)
#include <Modloader/app/structs/LoginWithFacebookRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LoginWithFacebookRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LoginWithFacebookRequest_DEFINED
struct LoginWithFacebookRequest__Class;
struct LoginWithFacebookRequest {
    struct LoginWithFacebookRequest__Class* klass;
    MonitorData* monitor;
    struct LoginWithFacebookRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginWithFacebookRequest_FWDDECL)
#define IL2CPP_STRUCT_LoginWithFacebookRequest_FWDDECL
#include <Modloader/app/structs/LoginWithFacebookRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LoginWithFacebookRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithFacebookRequest_DEFINED) && !defined(IL2CPP_STRUCT_LoginWithFacebookRequest_FWDDECL)
#include <Modloader/app/structs/LoginWithFacebookRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginWithFacebookRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
