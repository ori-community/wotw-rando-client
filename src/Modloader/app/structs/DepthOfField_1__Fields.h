#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthOfField_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthOfField_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_1__Fields_DEFINED)
#include <Modloader/app/structs/DepthOfField_BokehTextureSettings.h>
#include <Modloader/app/structs/DepthOfField_FocusSettings.h>
#include <Modloader/app/structs/DepthOfField_GlobalSettings.h>
#include <Modloader/app/structs/DepthOfField_QualitySettings.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DepthOfField_GlobalSettings_DEFINED) && defined(IL2CPP_STRUCT_DepthOfField_FocusSettings_DEFINED) && defined(IL2CPP_STRUCT_DepthOfField_BokehTextureSettings_DEFINED) && defined(IL2CPP_STRUCT_DepthOfField_QualitySettings_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_DepthOfField_1__Fields_DEFINED
struct Shader;
struct RenderTextureUtility;
struct Material;
struct ComputeBuffer;
struct DepthOfField_1__Fields {
    struct MonoBehaviour__Fields _;
    struct DepthOfField_GlobalSettings settings;
    struct DepthOfField_FocusSettings focus;
    struct DepthOfField_BokehTextureSettings bokehTexture;
    struct Shader* m_FilmicDepthOfFieldShader;
    struct Shader* m_MedianFilterShader;
    struct Shader* m_TextureBokehShader;
    struct RenderTextureUtility* m_RTU;
    struct Material* m_FilmicDepthOfFieldMaterial;
    struct Material* m_MedianFilterMaterial;
    struct Material* m_TextureBokehMaterial;
    struct ComputeBuffer* m_ComputeBufferDrawArgs;
    struct ComputeBuffer* m_ComputeBufferPoints;
    struct DepthOfField_QualitySettings m_CurrentQualitySettings;
    float m_LastApertureOrientation;
    struct Vector4 m_OctogonalBokehDirection1;
    struct Vector4 m_OctogonalBokehDirection2;
    struct Vector4 m_OctogonalBokehDirection3;
    struct Vector4 m_OctogonalBokehDirection4;
    struct Vector4 m_HexagonalBokehDirection1;
    struct Vector4 m_HexagonalBokehDirection2;
    struct Vector4 m_HexagonalBokehDirection3;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DepthOfField_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_DepthOfField_1__Fields_FWDDECL
#include <Modloader/app/structs/ComputeBuffer.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTextureUtility.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_DepthOfField_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DepthOfField_1__Fields_FWDDECL)
#include <Modloader/app/structs/DepthOfField_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthOfField_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
