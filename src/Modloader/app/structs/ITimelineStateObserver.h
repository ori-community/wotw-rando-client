#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITimelineStateObserver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITimelineStateObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineStateObserver_DEFINED)
#define IL2CPP_STRUCT_ITimelineStateObserver_DEFINED
struct ITimelineStateObserver__Class;
struct ITimelineStateObserver {
    struct ITimelineStateObserver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITimelineStateObserver_FWDDECL)
#define IL2CPP_STRUCT_ITimelineStateObserver_FWDDECL
#include <Modloader/app/structs/ITimelineStateObserver__Class.h>
#endif
#undef IL2CPP_STRUCT_ITimelineStateObserver_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineStateObserver_DEFINED) && !defined(IL2CPP_STRUCT_ITimelineStateObserver_FWDDECL)
#include <Modloader/app/structs/ITimelineStateObserver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITimelineStateObserver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
