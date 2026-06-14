#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundSegment__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundSegment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundSegment__Fields_DEFINED)
#include <Modloader/app/structs/PointSegment__Fields.h>
#if defined(IL2CPP_STRUCT_PointSegment__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundSegment__Fields_DEFINED
struct GroundSegment__Fields {
    struct PointSegment__Fields _;
    float TestX;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundSegment__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundSegment__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GroundSegment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundSegment__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundSegment__Fields_FWDDECL)
#include <Modloader/app/structs/GroundSegment__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundSegment__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
