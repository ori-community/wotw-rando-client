#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Brush_AlphaErase__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Brush_AlphaErase__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Brush_AlphaErase__StaticFields_DEFINED)
#define IL2CPP_STRUCT_P3D_Brush_AlphaErase__StaticFields_DEFINED
struct Material;
struct P3D_Brush_AlphaErase__StaticFields {
    struct Material* s_material;
    int32_t s_textureParamId;
    int32_t s_screenCoordTransformParamId;
};
#endif
#if !defined(IL2CPP_STRUCT_P3D_Brush_AlphaErase__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_P3D_Brush_AlphaErase__StaticFields_FWDDECL
#include <Modloader/app/structs/Material.h>
#endif
#undef IL2CPP_STRUCT_P3D_Brush_AlphaErase__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Brush_AlphaErase__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Brush_AlphaErase__StaticFields_FWDDECL)
#include <Modloader/app/structs/P3D_Brush_AlphaErase__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Brush_AlphaErase__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
