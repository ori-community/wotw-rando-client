#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapCanvas__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapCanvas__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapCanvas__Fields_DEFINED)
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_AreaMapCanvas__Fields_DEFINED
struct GameWorldArea;
struct RuntimeGameWorldArea;
struct Shader;
struct Transform;
struct Texture;
struct GameObject;
struct RenderTexture;
struct Renderer;
struct Material;
struct AreaMapCanvas__Fields {
    struct MonoBehaviour__Fields _;
    struct GameWorldArea* Area;
    struct RuntimeGameWorldArea* RuntimeArea;
    struct Shader* WorldMapBlurShader;
    struct Transform* MapPlaneTexture;
    struct Texture* Mask_1;
    int32_t PixelsPerUnit;
    struct Shader* SetRGBAShader;
    struct GameObject* m_addToMap;
    struct RenderTexture* m_areaMaskTextureA;
    struct RenderTexture* m_areaMaskTextureB;
    bool m_forceUpdateMaskB;
    struct Renderer* m_mapPlaneTextureRenderer;
    int32_t MapMaskTexProp;
    int32_t BlurSizeProp;
    int32_t TextureScalingAndOffsetProp;
    struct Material* m_areaMaskRenderingMaterial;
    struct Material* m_blurMaterial;
    struct RenderTexture* m_worldmapCanvasRenderTexture;
    struct Matrix4x4 m_cageStructureLocalToWorldMatrix;
    bool m_inited;
    bool _WantsToUpdateMask_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapCanvas__Fields_FWDDECL)
#define IL2CPP_STRUCT_AreaMapCanvas__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameWorldArea.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/RuntimeGameWorldArea.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_AreaMapCanvas__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapCanvas__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapCanvas__Fields_FWDDECL)
#include <Modloader/app/structs/AreaMapCanvas__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapCanvas__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
