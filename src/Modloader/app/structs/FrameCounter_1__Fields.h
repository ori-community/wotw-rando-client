#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameCounter_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameCounter_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCounter_1__Fields_DEFINED)
#include <Modloader/app/structs/FrameCounter_SecondInfo.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FrameCounter_SecondInfo_DEFINED)
#define IL2CPP_STRUCT_FrameCounter_1__Fields_DEFINED
struct FrameCounter_SecondInfo__Array;
struct IProfilingDataProvider;
struct FrameCounter_1__Fields {
    struct MonoBehaviour__Fields _;
    struct FrameCounter_SecondInfo__Array* m_seconds;
    struct FrameCounter_SecondInfo m_nullSecond;
    int32_t m_secondIndex;
    float m_lastStart;
    int32_t m_updates;
    int32_t m_secondCounter;
    int32_t m_fixedUpdates;
    float m_deltaTimeSum;
    float m_fixedDeltaTimeSum;
    bool m_wasPaused;
    int32_t m_lastProfilerIndex;
    struct IProfilingDataProvider* m_dataProvider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameCounter_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrameCounter_1__Fields_FWDDECL
#include <Modloader/app/structs/FrameCounter_SecondInfo__Array.h>
#include <Modloader/app/structs/IProfilingDataProvider.h>
#endif
#undef IL2CPP_STRUCT_FrameCounter_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameCounter_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrameCounter_1__Fields_FWDDECL)
#include <Modloader/app/structs/FrameCounter_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameCounter_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
