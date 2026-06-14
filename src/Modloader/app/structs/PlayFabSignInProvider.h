#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabSignInProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabSignInProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSignInProvider_DEFINED)
#include <Modloader/app/structs/PlayFabSignInProvider__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabSignInProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabSignInProvider_DEFINED
struct PlayFabSignInProvider__Class;
struct PlayFabSignInProvider {
    struct PlayFabSignInProvider__Class* klass;
    MonitorData* monitor;
    struct PlayFabSignInProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabSignInProvider_FWDDECL)
#define IL2CPP_STRUCT_PlayFabSignInProvider_FWDDECL
#include <Modloader/app/structs/PlayFabSignInProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabSignInProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSignInProvider_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabSignInProvider_FWDDECL)
#include <Modloader/app/structs/PlayFabSignInProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabSignInProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
