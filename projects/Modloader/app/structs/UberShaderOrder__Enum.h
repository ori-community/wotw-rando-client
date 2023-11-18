#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderOrder__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderOrder__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderOrder__Enum_DEFINED)
#define IL2CPP_STRUCT_UberShaderOrder__Enum_DEFINED
enum class UberShaderOrder__Enum : int32_t {
    PreCull = 0x00000000,
    TexturedBlock = 0x00000001,
    GrabPassBlock = 0x00000002,
    PointLightMask = 0x00000003,
    DirectionalLightMask = 0x00000004,
    GodRay = 0x00000005,
    Skinning = 0x00000006,
    VerletSkinning2D = 0x00000007,
    VerletSkinning3D = 0x00000008,
    TurbulenceDistortion = 0x00000009,
    TurbulenceRotation = 0x0000000a,
    TurbulenceScale = 0x0000000b,
    TurbulenceTranslation = 0x0000000c,
    UberTrail = 0x0000000d,
    MeshTrail = 0x0000000e,
    MinimalTrail = 0x0000000f,
    Trail = 0x00000010,
    SandTrail = 0x00000011,
    InteractionLight = 0x00000012,
    InteractionRotation = 0x00000013,
    InteractionPunch = 0x00000014,
    RotationAnimator = 0x00000015,
    ScaleAnimator = 0x00000016,
    PositionAnimator = 0x00000017,
    TransparencyAnimator = 0x00000018,
    SandWorm = 0x00000019,
    ClusterAnimBone0 = 0x0000001a,
    ClusterAnimBone1 = 0x0000001b,
    ClusterAnimBone2 = 0x0000001c,
    Distort = 0x0000001d,
    DistortExtra = 0x0000001e,
    WaterLine = 0x0000001f,
    UnderWaterLine = 0x00000020,
    WaterDebris = 0x00000021,
    Textify = 0x00000022,
    TextOutline = 0x00000023,
    TextGlow = 0x00000024,
    TextShadow = 0x00000025,
    TextAnimFade = 0x00000026,
    TextAnimDistort = 0x00000027,
    TextAnimGlow = 0x00000028,
    Mask_1 = 0x00000029,
    MaskExtra = 0x0000002a,
    MaskSpiritLight = 0x0000002b,
    MaskDissolve = 0x0000002c,
    MaskWaterFall = 0x0000002d,
    TurbulenceBrightness = 0x0000002e,
    TurbulenceTransparency = 0x0000002f,
    AlphaMaskFade = 0x00000030,
    HueShift = 0x00000031,
    GradientRemap = 0x00000032,
    Tint = 0x00000033,
    MultiplyLayerDistort = 0x00000034,
    MultiplyLayerDistortExtra = 0x00000035,
    MultiplyLayerDistortThird = 0x00000036,
    MultiplyLayer = 0x00000037,
    MultiplyLayerExtra = 0x00000038,
    MultiplyLayerThird = 0x00000039,
    DodgeLayer = 0x0000003a,
    AdditiveLayer = 0x0000003b,
    AdditiveLayerExtra = 0x0000003c,
    AdditiveLayerDistorted = 0x0000003d,
    CharacterLighting = 0x0000003e,
    CharacterTint = 0x0000003f,
    Outline = 0x00000040,
    FakeMotionBlur = 0x00000041,
    SeperationMap = 0x00000042,
    VertexColor = 0x00000043,
    NightBerry = 0x00000044,
    DecalLayer = 0x00000045,
    DecalLayerDistort = 0x00000046,
    LightDirectionMap = 0x00000047,
    OffsetMap = 0x00000048,
    DirectionalLight = 0x00000049,
    DirectionalLightExtra = 0x0000004a,
    LightDirectionNormals = 0x0000004b,
    CubemapReflection = 0x0000004c,
    Refraction = 0x0000004d,
    Bubble = 0x0000004e,
    SoftEdge = 0x0000004f,
    BorderStrength = 0x00000050,
    Worldmap = 0x00000051,
    Tessellation = 0x00000052,
    Darkening = 0x00000053,
    Emissivity = 0x00000054,
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderOrder__Enum_FWDDECL)
#define IL2CPP_STRUCT_UberShaderOrder__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberShaderOrder__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderOrder__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderOrder__Enum_FWDDECL)
#include <Modloader/app/structs/UberShaderOrder__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderOrder__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
