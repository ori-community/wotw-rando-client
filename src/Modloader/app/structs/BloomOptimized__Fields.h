#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BloomOptimized__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BloomOptimized__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloomOptimized__Fields_DEFINED)
#include <Modloader/app/structs/BloomOptimized_BlurType__Enum.h>
#include <Modloader/app/structs/BloomOptimized_Resolution__Enum.h>
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_BloomOptimized_Resolution__Enum_DEFINED) && defined(IL2CPP_STRUCT_BloomOptimized_BlurType__Enum_DEFINED)
#define IL2CPP_STRUCT_BloomOptimized__Fields_DEFINED
struct Shader;
struct Material;
struct BloomOptimized__Fields {
    struct PostEffectsBase__Fields _;
    float threshold;
    float intensity;
    float blurSize;
    BloomOptimized_Resolution__Enum resolution;

    int32_t blurIterations;
    BloomOptimized_BlurType__Enum blurType;

    struct Shader* fastBloomShader;
    struct Material* fastBloomMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BloomOptimized__Fields_FWDDECL)
#define IL2CPP_STRUCT_BloomOptimized__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_BloomOptimized__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloomOptimized__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BloomOptimized__Fields_FWDDECL)
#include <Modloader/app/structs/BloomOptimized__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BloomOptimized__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
