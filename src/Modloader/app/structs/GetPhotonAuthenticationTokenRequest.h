#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPhotonAuthenticationTokenRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPhotonAuthenticationTokenRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPhotonAuthenticationTokenRequest_DEFINED)
#include <Modloader/app/structs/GetPhotonAuthenticationTokenRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetPhotonAuthenticationTokenRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPhotonAuthenticationTokenRequest_DEFINED
struct GetPhotonAuthenticationTokenRequest__Class;
struct GetPhotonAuthenticationTokenRequest {
    struct GetPhotonAuthenticationTokenRequest__Class* klass;
    MonitorData* monitor;
    struct GetPhotonAuthenticationTokenRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPhotonAuthenticationTokenRequest_FWDDECL)
#define IL2CPP_STRUCT_GetPhotonAuthenticationTokenRequest_FWDDECL
#include <Modloader/app/structs/GetPhotonAuthenticationTokenRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPhotonAuthenticationTokenRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPhotonAuthenticationTokenRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetPhotonAuthenticationTokenRequest_FWDDECL)
#include <Modloader/app/structs/GetPhotonAuthenticationTokenRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPhotonAuthenticationTokenRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
