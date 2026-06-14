#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabEmitEventCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabEmitEventCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEmitEventCallback_DEFINED)
#include <Modloader/app/structs/PlayFabEmitEventCallback__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabEmitEventCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabEmitEventCallback_DEFINED
struct PlayFabEmitEventCallback__Class;
struct PlayFabEmitEventCallback {
    struct PlayFabEmitEventCallback__Class* klass;
    MonitorData* monitor;
    struct PlayFabEmitEventCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabEmitEventCallback_FWDDECL)
#define IL2CPP_STRUCT_PlayFabEmitEventCallback_FWDDECL
#include <Modloader/app/structs/PlayFabEmitEventCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabEmitEventCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEmitEventCallback_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabEmitEventCallback_FWDDECL)
#include <Modloader/app/structs/PlayFabEmitEventCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabEmitEventCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
