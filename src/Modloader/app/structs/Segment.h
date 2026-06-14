#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Segment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Segment_INITIALIZING
#if !defined(IL2CPP_STRUCT_Segment_DEFINED)
#include <Modloader/app/structs/Segment__Fields.h>
#if defined(IL2CPP_STRUCT_Segment__Fields_DEFINED)
#define IL2CPP_STRUCT_Segment_DEFINED
struct Segment__Class;
struct Segment {
    struct Segment__Class* klass;
    MonitorData* monitor;
    struct Segment__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Segment_FWDDECL)
#define IL2CPP_STRUCT_Segment_FWDDECL
#include <Modloader/app/structs/Segment__Class.h>
#endif
#undef IL2CPP_STRUCT_Segment_INITIALIZING
#if !defined(IL2CPP_STRUCT_Segment_DEFINED) && !defined(IL2CPP_STRUCT_Segment_FWDDECL)
#include <Modloader/app/structs/Segment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Segment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
