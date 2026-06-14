#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMonitoringCallbackInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMonitoringCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMonitoringCallbackInfo_DEFINED)
#include <Modloader/app/structs/AkMonitoringCallbackInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkMonitoringCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMonitoringCallbackInfo_DEFINED
struct AkMonitoringCallbackInfo__Class;
struct AkMonitoringCallbackInfo {
    struct AkMonitoringCallbackInfo__Class* klass;
    MonitorData* monitor;
    struct AkMonitoringCallbackInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMonitoringCallbackInfo_FWDDECL)
#define IL2CPP_STRUCT_AkMonitoringCallbackInfo_FWDDECL
#include <Modloader/app/structs/AkMonitoringCallbackInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMonitoringCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMonitoringCallbackInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkMonitoringCallbackInfo_FWDDECL)
#include <Modloader/app/structs/AkMonitoringCallbackInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMonitoringCallbackInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
