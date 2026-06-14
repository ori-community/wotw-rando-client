#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields_DEFINED
struct Renderer;
struct __declspec(align(8)) MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields {
    struct Renderer* Renderer;
    struct Color Color;
    struct Vector4 ShaderProperties;
    struct Vector3 Scale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields_FWDDECL)
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
