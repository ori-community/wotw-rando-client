#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCallbackManager_EventCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCallbackManager_EventCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_EventCallback_DEFINED)
#include <Modloader/app/structs/AkCallbackManager_EventCallback__Fields.h>
#if defined(IL2CPP_STRUCT_AkCallbackManager_EventCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCallbackManager_EventCallback_DEFINED
struct AkCallbackManager_EventCallback__Class;
struct AkCallbackManager_EventCallback {
    struct AkCallbackManager_EventCallback__Class* klass;
    MonitorData* monitor;
    struct AkCallbackManager_EventCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkCallbackManager_EventCallback_FWDDECL)
#define IL2CPP_STRUCT_AkCallbackManager_EventCallback_FWDDECL
#include <Modloader/app/structs/AkCallbackManager_EventCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_AkCallbackManager_EventCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_EventCallback_DEFINED) && !defined(IL2CPP_STRUCT_AkCallbackManager_EventCallback_FWDDECL)
#include <Modloader/app/structs/AkCallbackManager_EventCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCallbackManager_EventCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
