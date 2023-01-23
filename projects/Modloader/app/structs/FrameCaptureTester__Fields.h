#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameCaptureTester__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameCaptureTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCaptureTester__Fields_DEFINED)
#include <Modloader/app/structs/FrameCaptureTester_FrameCaptureTestType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FrameCaptureTester_FrameCaptureTestType__Enum_DEFINED)
#define IL2CPP_STRUCT_FrameCaptureTester__Fields_DEFINED
struct MoonReference_1_ITestNotifier_;
struct ClientInformationProvider;
struct FrameCaptureTester_AgentOutput;
struct List_1_Moon_IExplicitUpdateHandler_;
struct List_1_Moon_IExplicitFixedUpdateHandler_;
struct List_1_Moon_IExplicitLateUpdateHandler_;
struct String;
struct List_1_IFrameCaptureAgent_;
struct Int32__Array;
struct MetricOutput__Array;
struct OutputWriter;
struct StringBuilder;
struct FrameCaptureTester__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_ITestNotifier_* TestLifetimeNotifier;
    struct ClientInformationProvider* m_clientInfo;
    struct FrameCaptureTester_AgentOutput* m_agentOutput;
    struct List_1_Moon_IExplicitUpdateHandler_* m_updateAgents;
    struct List_1_Moon_IExplicitFixedUpdateHandler_* m_fixedUpdateAgents;
    struct List_1_Moon_IExplicitLateUpdateHandler_* m_lateUpdateAgents;
    struct String* TestName;
    bool QuitOnEnd;
    struct String* ProfilingConfigOverride;
    FrameCaptureTester_FrameCaptureTestType__Enum _TestType_k__BackingField;

    struct List_1_IFrameCaptureAgent_* m_frameCaptureAgents;
    struct Int32__Array* m_headerCountsPerCaptureAgent;
    struct String* m_id;
    struct MetricOutput__Array* m_metricOutput;
    struct OutputWriter* m_writer;
    bool m_running;
    bool m_paused;
    struct StringBuilder* m_frameDataBuilder;
    struct StringBuilder* m_tempStringBuilder;
    bool m_isFirstFrame;
    int32_t o_valuesLeft;
    struct StringBuilder* o_sb;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameCaptureTester__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrameCaptureTester__Fields_FWDDECL
#include <Modloader/app/structs/ClientInformationProvider.h>
#include <Modloader/app/structs/FrameCaptureTester_AgentOutput.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_IFrameCaptureAgent_.h>
#include <Modloader/app/structs/List_1_Moon_IExplicitFixedUpdateHandler_.h>
#include <Modloader/app/structs/List_1_Moon_IExplicitLateUpdateHandler_.h>
#include <Modloader/app/structs/List_1_Moon_IExplicitUpdateHandler_.h>
#include <Modloader/app/structs/MetricOutput__Array.h>
#include <Modloader/app/structs/MoonReference_1_ITestNotifier_.h>
#include <Modloader/app/structs/OutputWriter.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#endif
#undef IL2CPP_STRUCT_FrameCaptureTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCaptureTester__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrameCaptureTester__Fields_FWDDECL)
#include <Modloader/app/structs/FrameCaptureTester__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameCaptureTester__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
