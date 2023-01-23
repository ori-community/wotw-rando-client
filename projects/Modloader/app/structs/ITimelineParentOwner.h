#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITimelineParentOwner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITimelineParentOwner_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineParentOwner_DEFINED)
#define IL2CPP_STRUCT_ITimelineParentOwner_DEFINED
struct ITimelineParentOwner__Class;
struct ITimelineParentOwner {
    struct ITimelineParentOwner__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITimelineParentOwner_FWDDECL)
#define IL2CPP_STRUCT_ITimelineParentOwner_FWDDECL
#include <Modloader/app/structs/ITimelineParentOwner__Class.h>
#endif
#undef IL2CPP_STRUCT_ITimelineParentOwner_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineParentOwner_DEFINED) && !defined(IL2CPP_STRUCT_ITimelineParentOwner_FWDDECL)
#include <Modloader/app/structs/ITimelineParentOwner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITimelineParentOwner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
