#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITimelineEntityParent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITimelineEntityParent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineEntityParent_DEFINED)
#define IL2CPP_STRUCT_ITimelineEntityParent_DEFINED
struct ITimelineEntityParent__Class;
struct ITimelineEntityParent {
    struct ITimelineEntityParent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITimelineEntityParent_FWDDECL)
#define IL2CPP_STRUCT_ITimelineEntityParent_FWDDECL
#include <Modloader/app/structs/ITimelineEntityParent__Class.h>
#endif
#undef IL2CPP_STRUCT_ITimelineEntityParent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineEntityParent_DEFINED) && !defined(IL2CPP_STRUCT_ITimelineEntityParent_FWDDECL)
#include <Modloader/app/structs/ITimelineEntityParent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITimelineEntityParent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
