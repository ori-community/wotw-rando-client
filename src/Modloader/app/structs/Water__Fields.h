#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Water__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Water__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Water_WaterMode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Water_WaterMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_Water__Fields_DEFINED
struct Hashtable;
struct RenderTexture;
struct Water__Fields {
    struct MonoBehaviour__Fields _;
    Water_WaterMode__Enum m_WaterMode;

    bool m_DisablePixelLights;
    int32_t m_TextureSize;
    float m_ClipPlaneOffset;
    struct LayerMask m_ReflectLayers;
    struct LayerMask m_RefractLayers;
    struct Hashtable* m_ReflectionCameras;
    struct Hashtable* m_RefractionCameras;
    struct RenderTexture* m_ReflectionTexture;
    struct RenderTexture* m_RefractionTexture;
    Water_WaterMode__Enum m_HardwareWaterSupport;

    int32_t m_OldReflectionTextureSize;
    int32_t m_OldRefractionTextureSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Water__Fields_FWDDECL)
#define IL2CPP_STRUCT_Water__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/RenderTexture.h>
#endif
#undef IL2CPP_STRUCT_Water__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Water__Fields_FWDDECL)
#include <Modloader/app/structs/Water__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Water__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
