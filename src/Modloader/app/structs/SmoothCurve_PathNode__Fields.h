#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmoothCurve_PathNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmoothCurve_PathNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmoothCurve_PathNode__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SmoothCurve_PathNode__Fields_DEFINED
struct __declspec(align(8)) SmoothCurve_PathNode__Fields {
    struct Vector2 Position;
    struct Vector2 TangentIn;
    struct Vector2 TangentOut;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SmoothCurve_PathNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_SmoothCurve_PathNode__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SmoothCurve_PathNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmoothCurve_PathNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SmoothCurve_PathNode__Fields_FWDDECL)
#include <Modloader/app/structs/SmoothCurve_PathNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmoothCurve_PathNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
