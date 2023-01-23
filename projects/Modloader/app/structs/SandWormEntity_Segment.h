#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormEntity_Segment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormEntity_Segment_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity_Segment_DEFINED)
#include <Modloader/app/structs/SandWormEntity_Segment__Fields.h>
#if defined(IL2CPP_STRUCT_SandWormEntity_Segment__Fields_DEFINED)
#define IL2CPP_STRUCT_SandWormEntity_Segment_DEFINED
struct SandWormEntity_Segment__Class;
struct SandWormEntity_Segment {
    struct SandWormEntity_Segment__Class* klass;
    MonitorData* monitor;
    struct SandWormEntity_Segment__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormEntity_Segment_FWDDECL)
#define IL2CPP_STRUCT_SandWormEntity_Segment_FWDDECL
#include <Modloader/app/structs/SandWormEntity_Segment__Class.h>
#endif
#undef IL2CPP_STRUCT_SandWormEntity_Segment_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormEntity_Segment_DEFINED) && !defined(IL2CPP_STRUCT_SandWormEntity_Segment_FWDDECL)
#include <Modloader/app/structs/SandWormEntity_Segment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormEntity_Segment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
