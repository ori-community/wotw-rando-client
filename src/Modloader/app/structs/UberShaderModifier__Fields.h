#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RuntimeTypeHandle.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_RuntimeTypeHandle_DEFINED)
#define IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED
struct Renderer;
struct MeshFilter;
struct UberShaderModifier__Fields {
    struct MonoBehaviour__Fields _;
    bool Enabled;
    struct RuntimeTypeHandle m_typeId;
    struct Renderer* m_cachedRenderer;
    struct MeshFilter* m_meshFilter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderModifier__Fields_FWDDECL
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_UberShaderModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderModifier__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
