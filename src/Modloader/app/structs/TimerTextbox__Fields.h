#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerTextbox__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerTextbox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerTextbox__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_TimerTextbox__Fields_DEFINED
struct TextBox__Array;
struct MoonTimeline;
struct TimerTextbox__Fields {
    struct MonoBehaviour__Fields _;
    struct TextBox__Array* TextBox;
    struct Color NormalColor;
    struct Color OvertimeColor;
    struct MoonTimeline* TimeoutPulseTimeline;
    bool m_initialized;
    bool m_wasOvertimeLastFrame;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerTextbox__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimerTextbox__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TextBox__Array.h>
#endif
#undef IL2CPP_STRUCT_TimerTextbox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerTextbox__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimerTextbox__Fields_FWDDECL)
#include <Modloader/app/structs/TimerTextbox__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerTextbox__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
