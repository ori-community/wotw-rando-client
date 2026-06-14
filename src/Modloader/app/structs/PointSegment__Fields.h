#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointSegment__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointSegment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointSegment__Fields_DEFINED)
#include <Modloader/app/structs/Segment_1__Fields.h>
#if defined(IL2CPP_STRUCT_Segment_1__Fields_DEFINED)
#define IL2CPP_STRUCT_PointSegment__Fields_DEFINED
struct List_1_UnityEngine_Vector3_;
struct PointSegment__Fields {
    struct Segment_1__Fields _;
    struct List_1_UnityEngine_Vector3_* Points;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointSegment__Fields_FWDDECL)
#define IL2CPP_STRUCT_PointSegment__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#endif
#undef IL2CPP_STRUCT_PointSegment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointSegment__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PointSegment__Fields_FWDDECL)
#include <Modloader/app/structs/PointSegment__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointSegment__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
