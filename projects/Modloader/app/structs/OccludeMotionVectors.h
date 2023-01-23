#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OccludeMotionVectors_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OccludeMotionVectors_INITIALIZING
#if !defined(IL2CPP_STRUCT_OccludeMotionVectors_DEFINED)
#include <Modloader/app/structs/OccludeMotionVectors__Fields.h>
#if defined(IL2CPP_STRUCT_OccludeMotionVectors__Fields_DEFINED)
#define IL2CPP_STRUCT_OccludeMotionVectors_DEFINED
struct OccludeMotionVectors__Class;
struct OccludeMotionVectors {
    struct OccludeMotionVectors__Class* klass;
    MonitorData* monitor;
    struct OccludeMotionVectors__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OccludeMotionVectors_FWDDECL)
#define IL2CPP_STRUCT_OccludeMotionVectors_FWDDECL
#include <Modloader/app/structs/OccludeMotionVectors__Class.h>
#endif
#undef IL2CPP_STRUCT_OccludeMotionVectors_INITIALIZING
#if !defined(IL2CPP_STRUCT_OccludeMotionVectors_DEFINED) && !defined(IL2CPP_STRUCT_OccludeMotionVectors_FWDDECL)
#include <Modloader/app/structs/OccludeMotionVectors.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OccludeMotionVectors.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
