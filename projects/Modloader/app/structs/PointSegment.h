#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointSegment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointSegment_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointSegment_DEFINED)
#include <Modloader/app/structs/PointSegment__Fields.h>
#if defined(IL2CPP_STRUCT_PointSegment__Fields_DEFINED)
#define IL2CPP_STRUCT_PointSegment_DEFINED
struct PointSegment__Class;
struct PointSegment {
    struct PointSegment__Class* klass;
    MonitorData* monitor;
    struct PointSegment__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointSegment_FWDDECL)
#define IL2CPP_STRUCT_PointSegment_FWDDECL
#include <Modloader/app/structs/PointSegment__Class.h>
#endif
#undef IL2CPP_STRUCT_PointSegment_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointSegment_DEFINED) && !defined(IL2CPP_STRUCT_PointSegment_FWDDECL)
#include <Modloader/app/structs/PointSegment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointSegment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
