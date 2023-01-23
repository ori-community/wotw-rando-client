#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UIVertex_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UIVertex_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIVertex_DEFINED)
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_Color32_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_UIVertex_DEFINED
struct UIVertex {
    struct Vector3 position;
    struct Vector3 normal;
    struct Vector4 tangent;
    struct Color32 color;
    struct Vector2 uv0;
    struct Vector2 uv1;
    struct Vector2 uv2;
    struct Vector2 uv3;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UIVertex_FWDDECL)
#define IL2CPP_STRUCT_UIVertex_FWDDECL
#endif
#undef IL2CPP_STRUCT_UIVertex_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIVertex_DEFINED) && !defined(IL2CPP_STRUCT_UIVertex_FWDDECL)
#include <Modloader/app/structs/UIVertex.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UIVertex.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
