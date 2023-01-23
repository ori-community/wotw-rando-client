#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineEntity__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineEntity__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntity__Array_DEFINED)
#define IL2CPP_STRUCT_TimelineEntity__Array_DEFINED
struct TimelineEntity__Array__Class;
struct TimelineEntity;
struct TimelineEntity__Array {
    struct TimelineEntity__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct TimelineEntity* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_TimelineEntity__Array_FWDDECL)
#define IL2CPP_STRUCT_TimelineEntity__Array_FWDDECL
#include <Modloader/app/structs/TimelineEntity.h>
#include <Modloader/app/structs/TimelineEntity__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineEntity__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntity__Array_DEFINED) && !defined(IL2CPP_STRUCT_TimelineEntity__Array_FWDDECL)
#include <Modloader/app/structs/TimelineEntity__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineEntity__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
