#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonRenderPipeline__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonRenderPipeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipeline__Fields_DEFINED)
#include <Modloader/app/structs/RenderPipeline__Fields.h>
#if defined(IL2CPP_STRUCT_RenderPipeline__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonRenderPipeline__Fields_DEFINED
struct MoonRenderPipelineAsset;
struct MoonRenderPipelineView__Array;
struct MoonRenderPipelineSettings;
struct MoonRenderPipelineView;
struct FrameTiming__Array;
struct Stopwatch;
struct MoonRenderPipeline__Fields {
    struct RenderPipeline__Fields _;
    struct MoonRenderPipelineAsset* owner;
    struct MoonRenderPipelineView__Array* views;
    struct MoonRenderPipelineSettings* settings;
    struct MoonRenderPipelineView* _currentView_k__BackingField;
    struct FrameTiming__Array* m_frameTimings;
    double m_currentDRSScaleInternal;
    double m_currentDRSScale;
    double m_currentDRSScaleY;
    float m_badCPUPerfTotalTime;
    bool m_isrDRSEnabled;
    bool m_isrCPUEnabled;
    struct Stopwatch* m_drsStopwatch;
    bool isRendering;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonRenderPipeline__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonRenderPipeline__Fields_FWDDECL
#include <Modloader/app/structs/FrameTiming__Array.h>
#include <Modloader/app/structs/MoonRenderPipelineAsset.h>
#include <Modloader/app/structs/MoonRenderPipelineSettings.h>
#include <Modloader/app/structs/MoonRenderPipelineView.h>
#include <Modloader/app/structs/MoonRenderPipelineView__Array.h>
#include <Modloader/app/structs/Stopwatch.h>
#endif
#undef IL2CPP_STRUCT_MoonRenderPipeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonRenderPipeline__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonRenderPipeline__Fields_FWDDECL)
#include <Modloader/app/structs/MoonRenderPipeline__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonRenderPipeline__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
