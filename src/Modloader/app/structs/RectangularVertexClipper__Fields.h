#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RectangularVertexClipper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RectangularVertexClipper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectangularVertexClipper__Fields_DEFINED)
#define IL2CPP_STRUCT_RectangularVertexClipper__Fields_DEFINED
struct Vector3__Array;
struct __declspec(align(8)) RectangularVertexClipper__Fields {
    struct Vector3__Array* m_WorldCorners;
    struct Vector3__Array* m_CanvasCorners;
};
#endif
#if !defined(IL2CPP_STRUCT_RectangularVertexClipper__Fields_FWDDECL)
#define IL2CPP_STRUCT_RectangularVertexClipper__Fields_FWDDECL
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_RectangularVertexClipper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectangularVertexClipper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RectangularVertexClipper__Fields_FWDDECL)
#include <Modloader/app/structs/RectangularVertexClipper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RectangularVertexClipper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
