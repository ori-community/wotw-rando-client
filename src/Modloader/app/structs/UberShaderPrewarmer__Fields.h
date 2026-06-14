#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderPrewarmer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderPrewarmer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderPrewarmer__Fields_DEFINED
struct List_1_UnityEngine_Shader_;
struct List_1_UberShaderPrewarmer_PrewarmedShader_;
struct RenderTexture;
struct Material;
struct Mesh;
struct List_1_System_Int32_;
struct UberShaderPrewarmer__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_Shader_* m_shaderHandles;
    float m_startMemory;
    struct List_1_UberShaderPrewarmer_PrewarmedShader_* LoadedShaders;
    struct RenderTexture* m_prewarmTex;
    int32_t m_warmIndex;
    struct Material* m_dummyMat;
    bool m_isStreaming;
    struct Mesh* m_quadMesh;
    float m_prewarmBudget;
    float m_lastStreamStart;
    bool m_editorSkipEnabled;
    struct List_1_System_Int32_* keywordIDs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmer__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderPrewarmer__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_UberShaderPrewarmer_PrewarmedShader_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Shader_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/RenderTexture.h>
#endif
#undef IL2CPP_STRUCT_UberShaderPrewarmer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderPrewarmer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderPrewarmer__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderPrewarmer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderPrewarmer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
