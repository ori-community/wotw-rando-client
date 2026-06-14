#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILegacyTimelineStateObserver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILegacyTimelineStateObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILegacyTimelineStateObserver_DEFINED)
#define IL2CPP_STRUCT_ILegacyTimelineStateObserver_DEFINED
struct ILegacyTimelineStateObserver__Class;
struct ILegacyTimelineStateObserver {
    struct ILegacyTimelineStateObserver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILegacyTimelineStateObserver_FWDDECL)
#define IL2CPP_STRUCT_ILegacyTimelineStateObserver_FWDDECL
#include <Modloader/app/structs/ILegacyTimelineStateObserver__Class.h>
#endif
#undef IL2CPP_STRUCT_ILegacyTimelineStateObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILegacyTimelineStateObserver_DEFINED) && !defined(IL2CPP_STRUCT_ILegacyTimelineStateObserver_FWDDECL)
#include <Modloader/app/structs/ILegacyTimelineStateObserver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILegacyTimelineStateObserver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
