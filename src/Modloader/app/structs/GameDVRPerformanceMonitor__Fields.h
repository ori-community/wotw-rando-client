#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameDVRPerformanceMonitor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameDVRPerformanceMonitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameDVRPerformanceMonitor__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GameDVRPerformanceMonitor__Fields_DEFINED
struct GameDVRPerformanceMonitor__Fields {
    struct MonoBehaviour__Fields _;
    int32_t m_frameCount;
    float m_lastTime;
    float m_lastRecordedTime;
    float m_previousFrameTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameDVRPerformanceMonitor__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameDVRPerformanceMonitor__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GameDVRPerformanceMonitor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameDVRPerformanceMonitor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameDVRPerformanceMonitor__Fields_FWDDECL)
#include <Modloader/app/structs/GameDVRPerformanceMonitor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameDVRPerformanceMonitor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
