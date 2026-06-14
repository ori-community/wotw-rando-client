#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bloom_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bloom_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bloom_1__Fields_DEFINED)
#include <Modloader/app/structs/Bloom_Settings.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Bloom_Settings_DEFINED)
#define IL2CPP_STRUCT_Bloom_1__Fields_DEFINED
struct Shader;
struct Material;
struct RenderTexture__Array;
struct Bloom_1__Fields {
    struct MonoBehaviour__Fields _;
    struct Bloom_Settings CinematicBloom;
    float AdditiveIntensity;
    float AdditiveThreshhold;
    struct Shader* m_Shader;
    struct Material* m_Material;
    struct RenderTexture__Array* m_blurBuffer1;
    struct RenderTexture__Array* m_blurBuffer2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bloom_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Bloom_1__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture__Array.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_Bloom_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bloom_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Bloom_1__Fields_FWDDECL)
#include <Modloader/app/structs/Bloom_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bloom_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
