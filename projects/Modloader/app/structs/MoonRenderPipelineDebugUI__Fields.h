#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipelineDebugUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipelineDebugUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_FpsCounter.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_Quality__Enum.h>
#include <Modloader/app/structs/MoonRenderPipelineDebugUI_SliceRangeMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI_Quality__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI_SliceRangeMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI_FpsCounter_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipelineDebugUI__Fields_DEFINED
struct QualityProfile;
struct StringBuilder;
struct FpsGraph;
struct MoonRenderPipelineDebugUI__Fields {
    struct MonoBehaviour__Fields _;
    struct QualityProfile* editorProfile;
    struct QualityProfile* pcProfile;
    struct QualityProfile* pcProfileLow;
    struct QualityProfile* pcProfileHigh;
    struct QualityProfile* switchProfile;
    struct QualityProfile* switchProfileDocked;
    struct QualityProfile* xboxOneProfile;
    struct QualityProfile* xboxOneSProfile;
    struct QualityProfile* xboxOneXProfile;
    struct QualityProfile* xboxSeriesSProfile;
    struct QualityProfile* xboxSeriesXProfile;
    struct QualityProfile* xboxSeriesSProfileQuality;
    struct QualityProfile* xboxSeriesXProfileQuality;
    MoonRenderPipelineDebugUI_Quality__Enum editorQuality;

    MoonRenderPipelineDebugUI_Quality__Enum pcQuality;

    MoonRenderPipelineDebugUI_Quality__Enum pcQualityLow;

    MoonRenderPipelineDebugUI_Quality__Enum pcQualityHigh;

    MoonRenderPipelineDebugUI_Quality__Enum switchQuality;

    MoonRenderPipelineDebugUI_Quality__Enum switchQualityDocked;

    MoonRenderPipelineDebugUI_Quality__Enum xboxOneQuality;

    MoonRenderPipelineDebugUI_Quality__Enum xboxOneSQuality;

    MoonRenderPipelineDebugUI_Quality__Enum xboxOneXQuality;

    MoonRenderPipelineDebugUI_Quality__Enum xboxSeriesSQuality;

    MoonRenderPipelineDebugUI_Quality__Enum xboxSeriesXQuality;

    MoonRenderPipelineDebugUI_Quality__Enum currentQuality;

    bool visible;
    bool expanded;
    bool interactiveWhenMinimized;
    bool hideDeveloperConsole;
    float sliderDeadZone;
    float sliderSensitivity;
    float repeatDuration;
    bool prevNeedsImGUI;
    struct Vector2 scroll1;
    struct Vector2 scroll2;
    MoonRenderPipelineDebugUI_SliceRangeMode__Enum sliceRangeMode;

    bool foldoutVIP;
    bool foldoutHR;
    bool foldoutTLC;
    bool foldoutDRS;
    bool foldoutISR;
    bool foldoutFXAA;
    bool foldoutDebug;
    bool foldoutMisc;
    bool foldoutFreeze;
    bool foldoutFrameBuffer;
    bool foldoutFrameBufferClear;
    bool foldoutFrameBufferMore;
    bool foldoutPosts;
    bool foldoutSrp;
    bool foldoutSrpSort;
    bool foldoutSliceInfo;
    bool foldoutResolution;
    bool foldoutSupportedFormats;
    bool foldoutSystemInfo;
    bool foldoutGodRay;
    bool isrReprojection;
    int32_t cullingCountHeaderWidth;
    int32_t cullingCountColumnWidth;
    struct StringBuilder* sb;
    bool collectTimings;
    bool displayTimings;
    struct StringBuilder* capture;
    int32_t captureFrameCount;
    float fpsUpdateInterval;
    struct FpsGraph* fpsGraph;
    struct MoonRenderPipelineDebugUI_FpsCounter intervalCounter;
    struct MoonRenderPipelineDebugUI_FpsCounter manualCounter;
    float m_lastTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipelineDebugUI__Fields_FWDDECL
#include <Modloader/app/structs/FpsGraph.h>
#include <Modloader/app/structs/QualityProfile.h>
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderPipelineDebugUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipelineDebugUI__Fields_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipelineDebugUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipelineDebugUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
