#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StencilMaterial_MatEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StencilMaterial_MatEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StencilMaterial_MatEntry__Fields_DEFINED)
#include <Modloader/app/structs/ColorWriteMask__Enum.h>
#include <Modloader/app/structs/CompareFunction__Enum.h>
#include <Modloader/app/structs/StencilOp__Enum.h>
#if defined(IL2CPP_STRUCT_StencilOp__Enum_DEFINED) && defined(IL2CPP_STRUCT_CompareFunction__Enum_DEFINED) && defined(IL2CPP_STRUCT_ColorWriteMask__Enum_DEFINED)
#define IL2CPP_STRUCT_StencilMaterial_MatEntry__Fields_DEFINED
struct Material;
struct __declspec(align(8)) StencilMaterial_MatEntry__Fields {
    struct Material* baseMat;
    struct Material* customMat;
    int32_t count;
    int32_t stencilId;
    StencilOp__Enum operation;

    CompareFunction__Enum compareFunction;

    int32_t readMask;
    int32_t writeMask;
    bool useAlphaClip;
    ColorWriteMask__Enum colorMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StencilMaterial_MatEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_StencilMaterial_MatEntry__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#endif
#undef IL2CPP_STRUCT_StencilMaterial_MatEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StencilMaterial_MatEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StencilMaterial_MatEntry__Fields_FWDDECL)
#include <Modloader/app/structs/StencilMaterial_MatEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StencilMaterial_MatEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
