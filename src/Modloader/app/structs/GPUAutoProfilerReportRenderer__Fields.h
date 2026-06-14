#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoProfilerReportRenderer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoProfilerReportRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReportRenderer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GPUAutoProfilerReportRenderer__Fields_DEFINED
struct GPUAutoProfilerReport;
struct Material;
struct Color__Array;
struct GPUAutoProfilerReportRenderer__Fields {
    struct MonoBehaviour__Fields _;
    int32_t xOffset;
    int32_t yOffset;
    int32_t scale;
    bool overrideOffset;
    int32_t xOffsetOverride;
    int32_t yOffsetOverride;
    struct GPUAutoProfilerReport* m_report;
    struct Material* m_material;
    bool m_wasGPUProfilingEnabled;
    bool m_wasShowingHelp;
    struct Color__Array* m_lineBackColors;
    int32_t m_lineBackIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReportRenderer__Fields_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoProfilerReportRenderer__Fields_FWDDECL
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/GPUAutoProfilerReport.h>
#include <Modloader/app/structs/Material.h>
#endif
#undef IL2CPP_STRUCT_GPUAutoProfilerReportRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReportRenderer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoProfilerReportRenderer__Fields_FWDDECL)
#include <Modloader/app/structs/GPUAutoProfilerReportRenderer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoProfilerReportRenderer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
