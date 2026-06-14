#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITimelineItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITimelineItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineItem_DEFINED)
#define IL2CPP_STRUCT_ITimelineItem_DEFINED
struct ITimelineItem__Class;
struct ITimelineItem {
    struct ITimelineItem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITimelineItem_FWDDECL)
#define IL2CPP_STRUCT_ITimelineItem_FWDDECL
#include <Modloader/app/structs/ITimelineItem__Class.h>
#endif
#undef IL2CPP_STRUCT_ITimelineItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineItem_DEFINED) && !defined(IL2CPP_STRUCT_ITimelineItem_FWDDECL)
#include <Modloader/app/structs/ITimelineItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITimelineItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
