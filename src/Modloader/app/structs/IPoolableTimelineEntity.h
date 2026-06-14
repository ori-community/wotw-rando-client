#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPoolableTimelineEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPoolableTimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPoolableTimelineEntity_DEFINED)
#define IL2CPP_STRUCT_IPoolableTimelineEntity_DEFINED
struct IPoolableTimelineEntity__Class;
struct IPoolableTimelineEntity {
    struct IPoolableTimelineEntity__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPoolableTimelineEntity_FWDDECL)
#define IL2CPP_STRUCT_IPoolableTimelineEntity_FWDDECL
#include <Modloader/app/structs/IPoolableTimelineEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_IPoolableTimelineEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPoolableTimelineEntity_DEFINED) && !defined(IL2CPP_STRUCT_IPoolableTimelineEntity_FWDDECL)
#include <Modloader/app/structs/IPoolableTimelineEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPoolableTimelineEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
