#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Water3__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Water3__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water3__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Water3_WaterMode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Water3_WaterMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Water3__Fields_DEFINED
struct Water3Manager;
struct Hashtable;
struct RenderTexture;
struct Transform;
struct Material;
struct Water3__Fields {
    struct MonoBehaviour__Fields _;
    Water3_WaterMode__Enum m_WaterMode;

    struct Water3Manager* m_WaterManager;
    bool m_DisablePixelLights;
    int32_t m_TextureSize;
    float m_ClipPlaneOffset;
    struct LayerMask m_ReflectLayers;
    struct Hashtable* m_ReflectionCameras;
    struct RenderTexture* m_ReflectionTexture;
    Water3_WaterMode__Enum m_HardwareWaterSupport;

    int32_t m_OldReflectionTextureSize;
    bool realtime2DReflection;
    bool autoEdgeBlend;
    bool waterDisplacement;
    bool refractionMask;
    float m_Shininess;
    float m_WaveScale;
    struct Transform* lightTransform;
    struct Vector3 m_FoamWaveParams;
    struct Vector2 m_WaveSpeedBumpA;
    struct Vector2 m_WaveSpeedBumpB;
    struct Vector3 m_DistortParams;
    float m_FadeExp;
    float m_InvFade;
    float m_InvFadeFoam;
    float m_InvFadeDepthFade;
    struct Vector2 m_ShoreTilingBumpA;
    struct Vector2 m_ShoreTilingBumpB;
    float m_UnderwaterCheckOffset;
    struct Material* m_Water3Material;
    bool m_IsDirty;
    bool m_DepthTexturesSupported;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Water3__Fields_FWDDECL)
#define IL2CPP_STRUCT_Water3__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Water3Manager.h>
#endif
#undef IL2CPP_STRUCT_Water3__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water3__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Water3__Fields_FWDDECL)
#include <Modloader/app/structs/Water3__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Water3__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
