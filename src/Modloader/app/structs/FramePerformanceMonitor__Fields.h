#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FramePerformanceMonitor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FramePerformanceMonitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FramePerformanceMonitor__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FramePerformanceMonitor__Fields_DEFINED
struct Stack_1_FramePerformanceMonitor_PerformanceEntry_;
struct FramePerformanceMonitor_PerformanceEntry;
struct List_1_FramePerformanceMonitor_PerformanceFrameData_;
struct StreamWriter;
struct FramePerformanceMonitor__Fields {
    struct MonoBehaviour__Fields _;
    float m_lastGarbageCollectionTime;
    struct Stack_1_FramePerformanceMonitor_PerformanceEntry_* m_activeEntries;
    struct FramePerformanceMonitor_PerformanceEntry* m_root;
    struct List_1_FramePerformanceMonitor_PerformanceFrameData_* m_recordedFrames;
    struct StreamWriter* m_streamWriter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FramePerformanceMonitor__Fields_FWDDECL)
#define IL2CPP_STRUCT_FramePerformanceMonitor__Fields_FWDDECL
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry.h>
#include <Modloader/app/structs/List_1_FramePerformanceMonitor_PerformanceFrameData_.h>
#include <Modloader/app/structs/Stack_1_FramePerformanceMonitor_PerformanceEntry_.h>
#include <Modloader/app/structs/StreamWriter.h>
#endif
#undef IL2CPP_STRUCT_FramePerformanceMonitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FramePerformanceMonitor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FramePerformanceMonitor__Fields_FWDDECL)
#include <Modloader/app/structs/FramePerformanceMonitor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FramePerformanceMonitor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
