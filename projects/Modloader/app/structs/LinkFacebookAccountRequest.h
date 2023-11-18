#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkFacebookAccountRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkFacebookAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkFacebookAccountRequest_DEFINED)
#include <Modloader/app/structs/LinkFacebookAccountRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LinkFacebookAccountRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkFacebookAccountRequest_DEFINED
struct LinkFacebookAccountRequest__Class;
struct LinkFacebookAccountRequest {
    struct LinkFacebookAccountRequest__Class* klass;
    MonitorData* monitor;
    struct LinkFacebookAccountRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkFacebookAccountRequest_FWDDECL)
#define IL2CPP_STRUCT_LinkFacebookAccountRequest_FWDDECL
#include <Modloader/app/structs/LinkFacebookAccountRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkFacebookAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkFacebookAccountRequest_DEFINED) && !defined(IL2CPP_STRUCT_LinkFacebookAccountRequest_FWDDECL)
#include <Modloader/app/structs/LinkFacebookAccountRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkFacebookAccountRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
