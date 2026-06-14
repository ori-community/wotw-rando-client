#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightDirectionMapCompressor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightDirectionMapCompressor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDirectionMapCompressor__Fields_DEFINED)
#include <Modloader/app/structs/ShaderProperty.h>
#if defined(IL2CPP_STRUCT_ShaderProperty_DEFINED)
#define IL2CPP_STRUCT_LightDirectionMapCompressor__Fields_DEFINED
struct Material;
struct __declspec(align(8)) LightDirectionMapCompressor__Fields {
    struct Material* m_material;
    struct Material* m_compressionErrorMaterial;
    struct ShaderProperty m_leftTexShaderProperty;
    struct ShaderProperty m_rightTexShaderProperty;
    struct ShaderProperty m_topTexShaderProperty;
    struct ShaderProperty m_bottomTexShaderProperty;
    struct ShaderProperty m_frontTexShaderProperty;
    struct ShaderProperty m_rimTexShaderProperty;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightDirectionMapCompressor__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightDirectionMapCompressor__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#endif
#undef IL2CPP_STRUCT_LightDirectionMapCompressor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDirectionMapCompressor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightDirectionMapCompressor__Fields_FWDDECL)
#include <Modloader/app/structs/LightDirectionMapCompressor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightDirectionMapCompressor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
