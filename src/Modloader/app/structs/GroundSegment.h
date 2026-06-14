#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundSegment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundSegment_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundSegment_DEFINED)
#include <Modloader/app/structs/GroundSegment__Fields.h>
#if defined(IL2CPP_STRUCT_GroundSegment__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundSegment_DEFINED
struct GroundSegment__Class;
struct GroundSegment {
    struct GroundSegment__Class* klass;
    MonitorData* monitor;
    struct GroundSegment__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundSegment_FWDDECL)
#define IL2CPP_STRUCT_GroundSegment_FWDDECL
#include <Modloader/app/structs/GroundSegment__Class.h>
#endif
#undef IL2CPP_STRUCT_GroundSegment_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundSegment_DEFINED) && !defined(IL2CPP_STRUCT_GroundSegment_FWDDECL)
#include <Modloader/app/structs/GroundSegment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundSegment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
