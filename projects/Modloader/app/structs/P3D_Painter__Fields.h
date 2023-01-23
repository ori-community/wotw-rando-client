#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Painter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Painter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Painter__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_P3D_Painter__Fields_DEFINED
struct RenderTexture;
struct __declspec(align(8)) P3D_Painter__Fields {
    bool Dirty;
    struct RenderTexture* Canvas;
    struct Vector2 Tiling;
    struct Vector2 Offset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_Painter__Fields_FWDDECL)
#define IL2CPP_STRUCT_P3D_Painter__Fields_FWDDECL
#include <Modloader/app/structs/RenderTexture.h>
#endif
#undef IL2CPP_STRUCT_P3D_Painter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Painter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Painter__Fields_FWDDECL)
#include <Modloader/app/structs/P3D_Painter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Painter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
