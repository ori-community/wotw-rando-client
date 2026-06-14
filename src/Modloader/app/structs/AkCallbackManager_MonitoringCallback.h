#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCallbackManager_MonitoringCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCallbackManager_MonitoringCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_MonitoringCallback_DEFINED)
#include <Modloader/app/structs/AkCallbackManager_MonitoringCallback__Fields.h>
#if defined(IL2CPP_STRUCT_AkCallbackManager_MonitoringCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_AkCallbackManager_MonitoringCallback_DEFINED
struct AkCallbackManager_MonitoringCallback__Class;
struct AkCallbackManager_MonitoringCallback {
    struct AkCallbackManager_MonitoringCallback__Class* klass;
    MonitorData* monitor;
    struct AkCallbackManager_MonitoringCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkCallbackManager_MonitoringCallback_FWDDECL)
#define IL2CPP_STRUCT_AkCallbackManager_MonitoringCallback_FWDDECL
#include <Modloader/app/structs/AkCallbackManager_MonitoringCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_AkCallbackManager_MonitoringCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager_MonitoringCallback_DEFINED) && !defined(IL2CPP_STRUCT_AkCallbackManager_MonitoringCallback_FWDDECL)
#include <Modloader/app/structs/AkCallbackManager_MonitoringCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCallbackManager_MonitoringCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
