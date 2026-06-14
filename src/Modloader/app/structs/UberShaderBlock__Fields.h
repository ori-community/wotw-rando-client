#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderBlock__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderBlock__Fields_DEFINED)
#include <Modloader/app/structs/AlphaMaskChannelConfig__Enum.h>
#include <Modloader/app/structs/BlendModeType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/MotionVectorsModeType__Enum.h>
#include <Modloader/app/structs/RuntimeTypeHandle.h>
#include <Modloader/app/structs/ShaderModeType__Enum.h>
#include <Modloader/app/structs/TimeMode__Enum.h>
#include <Modloader/app/structs/UberShaderBlock_ColliderTypeEnum__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ShaderModeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_BlendModeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_MotionVectorsModeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_TimeMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_AlphaMaskChannelConfig__Enum_DEFINED) && defined(IL2CPP_STRUCT_UberShaderBlock_ColliderTypeEnum__Enum_DEFINED) && defined(IL2CPP_STRUCT_RuntimeTypeHandle_DEFINED)
#define IL2CPP_STRUCT_UberShaderBlock__Fields_DEFINED
struct Material;
struct MeshFilter;
struct Renderer;
struct UberShaderBlock__Fields {
    struct MonoBehaviour__Fields _;
    ShaderModeType__Enum ShaderMode;

    BlendModeType__Enum BlendMode;

    MotionVectorsModeType__Enum MotionVectorsMode;

    bool WriteRGB;
    bool WriteA;
    float OffsetPositionZ;
    float ZExpandNear;
    float ZExpandFar;
    float ThicknessNear;
    float ThicknessFar;
    bool ForceNeverClip;
    float MaxBrightness;
    float MinBrightness;
    float DisableDarkening;
    float ColorVariationInfluence;
    float ColorVariationSpeed;
    float ColorVariationScale;
    float ReflectionAmount;
    float RawRandomOffset;
    TimeMode__Enum TimeMode;

    bool IsAlphaMasked;
    bool IsAlphaInverse;
    AlphaMaskChannelConfig__Enum AlphaMaskChannelConfig;

    float AlphaMaskMulCh0;
    float AlphaMaskMulCh1;
    UberShaderBlock_ColliderTypeEnum__Enum ColliderType;

    bool ColliderErosion;
    bool BackSideOnly;
    bool FrontSideOnly;
    bool DoReflection;
    bool WaterOnly;
    bool GodRayPost;
    bool UseBakedLighting;
    float ZShift;
    float MotionBlurScale;
    float AlphaCutoff;
    float AlphaSmooth;
    bool DontResetCustomBounds;
    bool m_useFog;
    struct Material* m_MaterialInPrefab;
    struct MeshFilter* m_filter;
    struct Renderer* m_renderer;
    bool ForceZExpand;
    struct RuntimeTypeHandle m_typeId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderBlock__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderBlock__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_UberShaderBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderBlock__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderBlock__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderBlock__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderBlock__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
