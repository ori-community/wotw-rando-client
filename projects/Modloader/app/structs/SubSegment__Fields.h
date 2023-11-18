#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SubSegment__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SubSegment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubSegment__Fields_DEFINED)
#define IL2CPP_STRUCT_SubSegment__Fields_DEFINED
struct Osub__Array;
struct Vertex__Array;
struct Otri__Array;
struct __declspec(align(8)) SubSegment__Fields {
    int32_t hash;
    struct Osub__Array* subsegs;
    struct Vertex__Array* vertices;
    struct Otri__Array* triangles;
    int32_t boundary;
};
#endif
#if !defined(IL2CPP_STRUCT_SubSegment__Fields_FWDDECL)
#define IL2CPP_STRUCT_SubSegment__Fields_FWDDECL
#include <Modloader/app/structs/Osub__Array.h>
#include <Modloader/app/structs/Otri__Array.h>
#include <Modloader/app/structs/Vertex__Array.h>
#endif
#undef IL2CPP_STRUCT_SubSegment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubSegment__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SubSegment__Fields_FWDDECL)
#include <Modloader/app/structs/SubSegment__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SubSegment__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
