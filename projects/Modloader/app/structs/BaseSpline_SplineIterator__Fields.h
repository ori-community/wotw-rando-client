#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseSpline_SplineIterator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseSpline_SplineIterator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseSpline_SplineIterator__Fields_DEFINED)
#include <Modloader/app/structs/Matrix4x4.h>
#if defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_BaseSpline_SplineIterator__Fields_DEFINED
struct Transform;
struct BaseSpline;
struct __declspec(align(8)) BaseSpline_SplineIterator__Fields {
    struct Transform* m_transform;
    struct BaseSpline* m_spline;
    int32_t m_segidx;
    int32_t m_startidx;
    int32_t m_endidx;
    bool m_reverse;
    bool m_back;
    bool m_onceout;
    float m_segpos;
    int32_t loops;
    int32_t old_seg;
    struct Matrix4x4 matrix;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseSpline_SplineIterator__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseSpline_SplineIterator__Fields_FWDDECL
#include <Modloader/app/structs/BaseSpline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BaseSpline_SplineIterator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseSpline_SplineIterator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseSpline_SplineIterator__Fields_FWDDECL)
#include <Modloader/app/structs/BaseSpline_SplineIterator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseSpline_SplineIterator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
