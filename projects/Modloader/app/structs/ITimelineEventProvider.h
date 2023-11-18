#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITimelineEventProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITimelineEventProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineEventProvider_DEFINED)
#define IL2CPP_STRUCT_ITimelineEventProvider_DEFINED
struct ITimelineEventProvider__Class;
struct ITimelineEventProvider {
    struct ITimelineEventProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITimelineEventProvider_FWDDECL)
#define IL2CPP_STRUCT_ITimelineEventProvider_FWDDECL
#include <Modloader/app/structs/ITimelineEventProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ITimelineEventProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineEventProvider_DEFINED) && !defined(IL2CPP_STRUCT_ITimelineEventProvider_FWDDECL)
#include <Modloader/app/structs/ITimelineEventProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITimelineEventProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
