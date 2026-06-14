#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabEventRouter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabEventRouter_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEventRouter_DEFINED)
#include <Modloader/app/structs/PlayFabEventRouter__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabEventRouter__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabEventRouter_DEFINED
struct PlayFabEventRouter__Class;
struct PlayFabEventRouter {
    struct PlayFabEventRouter__Class* klass;
    MonitorData* monitor;
    struct PlayFabEventRouter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabEventRouter_FWDDECL)
#define IL2CPP_STRUCT_PlayFabEventRouter_FWDDECL
#include <Modloader/app/structs/PlayFabEventRouter__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabEventRouter_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEventRouter_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabEventRouter_FWDDECL)
#include <Modloader/app/structs/PlayFabEventRouter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabEventRouter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
