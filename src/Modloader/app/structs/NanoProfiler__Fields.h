#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NanoProfiler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NanoProfiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NanoProfiler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_NanoProfiler__Fields_DEFINED
struct Action;
struct Single__Array_1;
struct Stopwatch;
struct NanoProfiler__Fields {
    struct MonoBehaviour__Fields _;
    struct Action* PreEndFrameHandler;
    struct Action* PostBeginFrameHandler;
    struct Single__Array_1* m_history;
    int32_t m_currentWriteIndex;
    int32_t m_currentUniqueIndex;
    float m_lastFrameComplete;
    float m_fixedDT;
    float m_DT;
    struct Stopwatch* m_simulationStopwatch;
    float m_simulationTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NanoProfiler__Fields_FWDDECL)
#define IL2CPP_STRUCT_NanoProfiler__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Single__Array_1.h>
#include <Modloader/app/structs/Stopwatch.h>
#endif
#undef IL2CPP_STRUCT_NanoProfiler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NanoProfiler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NanoProfiler__Fields_FWDDECL)
#include <Modloader/app/structs/NanoProfiler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NanoProfiler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
