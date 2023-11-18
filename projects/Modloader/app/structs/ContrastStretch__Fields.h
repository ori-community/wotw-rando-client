#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContrastStretch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContrastStretch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastStretch__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ContrastStretch__Fields_DEFINED
struct RenderTexture__Array;
struct Shader;
struct Material;
struct ContrastStretch__Fields {
    struct MonoBehaviour__Fields _;
    float adaptationSpeed;
    float limitMinimum;
    float limitMaximum;
    struct RenderTexture__Array* adaptRenderTex;
    int32_t curAdaptIndex;
    struct Shader* shaderLum;
    struct Material* m_materialLum;
    struct Shader* shaderReduce;
    struct Material* m_materialReduce;
    struct Shader* shaderAdapt;
    struct Material* m_materialAdapt;
    struct Shader* shaderApply;
    struct Material* m_materialApply;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContrastStretch__Fields_FWDDECL)
#define IL2CPP_STRUCT_ContrastStretch__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture__Array.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_ContrastStretch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastStretch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ContrastStretch__Fields_FWDDECL)
#include <Modloader/app/structs/ContrastStretch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContrastStretch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
