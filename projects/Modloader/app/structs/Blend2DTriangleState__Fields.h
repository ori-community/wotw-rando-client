#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Blend2DTriangleState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Blend2DTriangleState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blend2DTriangleState__Fields_DEFINED)
#define IL2CPP_STRUCT_Blend2DTriangleState__Fields_DEFINED
struct Blend2DVertexState__Array;
struct Blend2DSegmentState__Array;
struct __declspec(align(8)) Blend2DTriangleState__Fields {
    int32_t Hash;
    int32_t Id;
    struct Blend2DVertexState__Array* Vertices;
    struct Blend2DSegmentState__Array* Segments;
    int32_t Label;
    double Area;
};
#endif
#if !defined(IL2CPP_STRUCT_Blend2DTriangleState__Fields_FWDDECL)
#define IL2CPP_STRUCT_Blend2DTriangleState__Fields_FWDDECL
#include <Modloader/app/structs/Blend2DSegmentState__Array.h>
#include <Modloader/app/structs/Blend2DVertexState__Array.h>
#endif
#undef IL2CPP_STRUCT_Blend2DTriangleState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Blend2DTriangleState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Blend2DTriangleState__Fields_FWDDECL)
#include <Modloader/app/structs/Blend2DTriangleState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Blend2DTriangleState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
