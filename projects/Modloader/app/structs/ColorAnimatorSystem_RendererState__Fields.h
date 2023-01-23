#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorAnimatorSystem_RendererState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorAnimatorSystem_RendererState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorAnimatorSystem_RendererState__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum.h>
#if defined(IL2CPP_STRUCT_UberShaderProperty_Color__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_ColorAnimatorSystem_RendererState__Fields_DEFINED
struct Renderer;
struct List_1_UnityEngine_Color_;
struct __declspec(align(8)) ColorAnimatorSystem_RendererState__Fields {
    UberShaderProperty_Color__Enum ColorProperty;

    int32_t InstanceID;
    struct Renderer* Renderer;
    struct Color OriginalColor;
    struct List_1_UnityEngine_Color_* Requests;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorAnimatorSystem_RendererState__Fields_FWDDECL)
#define IL2CPP_STRUCT_ColorAnimatorSystem_RendererState__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_ColorAnimatorSystem_RendererState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorAnimatorSystem_RendererState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ColorAnimatorSystem_RendererState__Fields_FWDDECL)
#include <Modloader/app/structs/ColorAnimatorSystem_RendererState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorAnimatorSystem_RendererState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
