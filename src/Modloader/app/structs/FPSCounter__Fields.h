#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSCounter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSCounter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSCounter__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSCounter__Fields_DEFINED
struct FPSCounter__Fields {
    struct MonoBehaviour__Fields _;
    float UpdateInterval;
    float m_renderedFrames;
    float m_lastTime;
    float m_timePassed;
    bool m_visible;
    float m_maxFrameTime;
    int32_t AverageFPS;
    int32_t MinimumFPS;
    bool m_fixedUpdateHappened;
    bool m_isSynced;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSCounter__Fields_FWDDECL)
#define IL2CPP_STRUCT_FPSCounter__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_FPSCounter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSCounter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FPSCounter__Fields_FWDDECL)
#include <Modloader/app/structs/FPSCounter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSCounter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
