#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartLoopEndEffect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartLoopEndEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartLoopEndEffect__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/StartLoopEndEffect_State__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_StartLoopEndEffect_State__Enum_DEFINED)
#define IL2CPP_STRUCT_StartLoopEndEffect__Fields_DEFINED
struct MoonTimeline;
struct StartLoopEndEffect__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* StartTimeline;
    struct MoonTimeline* LoopTimeline;
    struct MoonTimeline* EndTimeline;
    struct MoonTimeline* CancelTimeline;
    StartLoopEndEffect_State__Enum m_currentState;

    bool m_shouldCancel;
    bool m_shouldEnd;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartLoopEndEffect__Fields_FWDDECL)
#define IL2CPP_STRUCT_StartLoopEndEffect__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_StartLoopEndEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartLoopEndEffect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StartLoopEndEffect__Fields_FWDDECL)
#include <Modloader/app/structs/StartLoopEndEffect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartLoopEndEffect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
