#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkGoogleAccountRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkGoogleAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkGoogleAccountRequest_DEFINED)
#include <Modloader/app/structs/LinkGoogleAccountRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LinkGoogleAccountRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkGoogleAccountRequest_DEFINED
struct LinkGoogleAccountRequest__Class;
struct LinkGoogleAccountRequest {
    struct LinkGoogleAccountRequest__Class* klass;
    MonitorData* monitor;
    struct LinkGoogleAccountRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkGoogleAccountRequest_FWDDECL)
#define IL2CPP_STRUCT_LinkGoogleAccountRequest_FWDDECL
#include <Modloader/app/structs/LinkGoogleAccountRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkGoogleAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkGoogleAccountRequest_DEFINED) && !defined(IL2CPP_STRUCT_LinkGoogleAccountRequest_FWDDECL)
#include <Modloader/app/structs/LinkGoogleAccountRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkGoogleAccountRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
