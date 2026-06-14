#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITimelineEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineEntity_DEFINED)
#define IL2CPP_STRUCT_ITimelineEntity_DEFINED
struct ITimelineEntity__Class;
struct ITimelineEntity {
    struct ITimelineEntity__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITimelineEntity_FWDDECL)
#define IL2CPP_STRUCT_ITimelineEntity_FWDDECL
#include <Modloader/app/structs/ITimelineEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_ITimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITimelineEntity_DEFINED) && !defined(IL2CPP_STRUCT_ITimelineEntity_FWDDECL)
#include <Modloader/app/structs/ITimelineEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITimelineEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
