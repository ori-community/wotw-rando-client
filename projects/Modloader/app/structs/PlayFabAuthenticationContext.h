#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabAuthenticationContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabAuthenticationContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabAuthenticationContext_DEFINED)
#include <Modloader/app/structs/PlayFabAuthenticationContext__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabAuthenticationContext__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabAuthenticationContext_DEFINED
struct PlayFabAuthenticationContext__Class;
struct PlayFabAuthenticationContext {
    struct PlayFabAuthenticationContext__Class* klass;
    MonitorData* monitor;
    struct PlayFabAuthenticationContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabAuthenticationContext_FWDDECL)
#define IL2CPP_STRUCT_PlayFabAuthenticationContext_FWDDECL
#include <Modloader/app/structs/PlayFabAuthenticationContext__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabAuthenticationContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabAuthenticationContext_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabAuthenticationContext_FWDDECL)
#include <Modloader/app/structs/PlayFabAuthenticationContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabAuthenticationContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
