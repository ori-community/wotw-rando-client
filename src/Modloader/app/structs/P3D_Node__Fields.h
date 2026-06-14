#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Node__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Node__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Node__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#if defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_P3D_Node__Fields_DEFINED
struct __declspec(align(8)) P3D_Node__Fields {
    struct Bounds Bound;
    bool Split;
    int32_t PositiveIndex;
    int32_t NegativeIndex;
    int32_t TriangleIndex;
    int32_t TriangleCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_Node__Fields_FWDDECL)
#define IL2CPP_STRUCT_P3D_Node__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_P3D_Node__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Node__Fields_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Node__Fields_FWDDECL)
#include <Modloader/app/structs/P3D_Node__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Node__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
