#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProfilingSettings_SettingType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProfilingSettings_SettingType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilingSettings_SettingType__Enum_DEFINED)
#define IL2CPP_STRUCT_ProfilingSettings_SettingType__Enum_DEFINED
enum class ProfilingSettings_SettingType__Enum : int32_t {
    AlwaysShowDynamicTestDebugInfo = 0x00000000,
    BoostMode = 0x00000001,
    GPUAutoBoost = 0x00000002,
    CenterSliceOnly = 0x00000003,
    ColorVariation = 0x00000004,
    DepthOfField = 0x00000005,
    DepthPrecull = 0x00000006,
    Distortion = 0x00000007,
    DoStressTests = 0x00000008,
    EarlyZ = 0x00000009,
    EarlyZReconstruction = 0x0000000a,
    Emissivity = 0x0000000b,
    Darkening = 0x0000000c,
    EnableSimpleFPS = 0x0000000d,
    EnableFrameGraph = 0x0000000e,
    FXAA = 0x0000000f,
    GodRays = 0x00000010,
    InstantiationProfiling = 0x00000011,
    Lighting = 0x00000012,
    LowResolution = 0x00000013,
    ForceMaxDRS = 0x00000014,
    MeshTrails = 0x00000015,
    MoonTrails = 0x00000016,
    MotionBlur = 0x00000017,
    ObjectProfiling = 0x00000018,
    OneCorePerWorker = 0x00000019,
    AllowCoreTwoWorkerOnCoreZero = 0x0000001a,
    WorkersOnAllCores = 0x0000001b,
    Particles = 0x0000001c,
    ParticleSimulation = 0x0000001d,
    Pooling = 0x0000001e,
    PostProcessing = 0x0000001f,
    PotatoMode = 0x00000020,
    Refraction = 0x00000021,
    ShowFPSGraph = 0x00000022,
    ExpandFPSGraph = 0x00000023,
    ShowSlicedRenderEditor = 0x00000024,
    ShowSceneInspector = 0x00000025,
    ShowMemoryOverlay = 0x00000026,
    TAA = 0x00000027,
    TakeScreenshotsDuringDynamicTest = 0x00000028,
    UI = 0x00000029,
    WaterReflection = 0x0000002a,
    WaterSimulation = 0x0000002b,
    Wwise = 0x0000002c,
    DynamicResolutionScaling = 0x0000002d,
    EnemySpawning = 0x0000002e,
    AllSpawning = 0x0000002f,
    ObjectPass = 0x00000030,
    DownsamplingThreshold = 0x00000031,
    FreezeShaderTime = 0x00000032,
    FreezeColorVariation = 0x00000033,
    NoBlurAroundFocusedSlice = 0x00000034,
    TrilinearFiltering = 0x00000035,
    SkinnedMeshRendering = 0x00000036,
    GfxJobQueue = 0x00000037,
    ScarlettPerformanceMode = 0x00000038,
    ResourcesUnloading = 0x00000039,
    ResourcesUnloadingV2 = 0x0000003a,
    UberPoolLoadFromSceneStreaming = 0x0000003b,
    UberPoolPrewarmExhausted = 0x0000003c,
    HighResOpaqueCharacterRendering = 0x0000003d,
    TimesliceSystemEOF = 0x0000003e,
    TimeslicedResourceUnloading = 0x0000003f,
    ThreeDeeLighting = 0x00000040,
    TwoDeeLighting = 0x00000041,
    Setting_Count = 0x00000042,
    WwiseSoundBankRefCounting = 0x00000043,
    PanicHints = 0x00000044,
    GcOnPanicHints = 0x00000045,
    CallDestroyWhenNotAwoken = 0x00000046,
    CallMoonCleanupWhenNotAwoken = 0x00000047,
    CallMoonCleanupWhenAwoken = 0x00000048,
    MaskErasingFixAllSlices = 0x00000049,
    MaskErasingFixFocusedSlice = 0x0000004a,
    MaskErasingFixOff = 0x0000004b,
    MainThreadLoadDebugger = 0x0000004c,
    ReduceUnloadUtilityValue = 0x0000004d,
    JobsThresholdSuspend = 0x0000004e,
    TelemetryNewDeserialization = 0x0000004f,
    TelemetryDeserializationDebug = 0x00000050,
    UseSwitchSlices = 0x00000051,
};
#endif
#if !defined(IL2CPP_STRUCT_ProfilingSettings_SettingType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ProfilingSettings_SettingType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ProfilingSettings_SettingType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProfilingSettings_SettingType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ProfilingSettings_SettingType__Enum_FWDDECL)
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
