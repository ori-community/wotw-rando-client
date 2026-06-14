#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBow__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBow__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinBow__Fields_DEFINED
struct LineRenderer;
struct Vector3__Array;
struct SeinBow__Fields {
    struct MonoBehaviour__Fields _;
    int32_t BendPointCount;
    float m_bend;
    struct LineRenderer* m_lineRenderer;
    struct Vector3__Array* m_linePoints;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBow__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinBow__Fields_FWDDECL
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_SeinBow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBow__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinBow__Fields_FWDDECL)
#include <Modloader/app/structs/SeinBow__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBow__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
