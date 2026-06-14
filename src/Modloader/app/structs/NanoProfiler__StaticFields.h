#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NanoProfiler__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NanoProfiler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NanoProfiler__StaticFields_DEFINED)
#include <Modloader/app/structs/PlayerLoopSystem.h>
#if defined(IL2CPP_STRUCT_PlayerLoopSystem_DEFINED)
#define IL2CPP_STRUCT_NanoProfiler__StaticFields_DEFINED
struct NanoProfiler;
struct List_1_Moon_Profile_Metric_;
struct FrameTiming__Array;
struct HashSet_1_Moon_ISuspendable_;
struct NanoProfiler__StaticFields {
    struct NanoProfiler* _Instance_k__BackingField;
    struct List_1_Moon_Profile_Metric_* SupportedMetrics;
    struct FrameTiming__Array* frameTimings;
    struct HashSet_1_Moon_ISuspendable_* s_suspendablesToIgnoreForGameplay;
    struct PlayerLoopSystem m_beginFramePLS;
    struct PlayerLoopSystem m_endFramePLS;
    struct PlayerLoopSystem m_beginSimulationPLS;
    struct PlayerLoopSystem m_endSimulationPLS;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NanoProfiler__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_NanoProfiler__StaticFields_FWDDECL
#include <Modloader/app/structs/FrameTiming__Array.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/List_1_Moon_Profile_Metric_.h>
#include <Modloader/app/structs/NanoProfiler.h>
#endif
#undef IL2CPP_STRUCT_NanoProfiler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NanoProfiler__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_NanoProfiler__StaticFields_FWDDECL)
#include <Modloader/app/structs/NanoProfiler__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NanoProfiler__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
