#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Brush__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Brush__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Brush__StaticFields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/P3D_Matrix.h>
#include <Modloader/app/structs/P3D_Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_P3D_Rect_DEFINED) && defined(IL2CPP_STRUCT_P3D_Matrix_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_P3D_Brush__StaticFields_DEFINED
struct RenderTexture;
struct Texture2D;
struct Object;
struct P3D_Brush;
struct P3D_Brush__StaticFields {
    struct RenderTexture* canvas;
    int32_t canvasW;
    int32_t canvasH;
    struct P3D_Rect rect;
    struct P3D_Matrix matrix;
    struct P3D_Matrix inverse;
    float opacity;
    struct Color color;
    struct Vector2 direction;
    struct Texture2D* shape;
    struct Texture2D* detail;
    struct Vector2 detailScale;
    struct Object* extraData;
    struct P3D_Brush* tempInstance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_Brush__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_P3D_Brush__StaticFields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/P3D_Brush.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_P3D_Brush__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Brush__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Brush__StaticFields_FWDDECL)
#include <Modloader/app/structs/P3D_Brush__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Brush__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
