#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForKeyTimelineEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForKeyTimelineEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForKeyTimelineEntity__Fields_DEFINED)
#include <Modloader/app/structs/KeyCode__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_KeyCode__Enum_DEFINED)
#define IL2CPP_STRUCT_WaitForKeyTimelineEntity__Fields_DEFINED
struct WaitForKeyTimelineEntity__Fields {
    struct TimelineEntity__Fields _;
    KeyCode__Enum Key;

    float m_time;
    bool m_isFinished;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForKeyTimelineEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaitForKeyTimelineEntity__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_WaitForKeyTimelineEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForKeyTimelineEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaitForKeyTimelineEntity__Fields_FWDDECL)
#include <Modloader/app/structs/WaitForKeyTimelineEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForKeyTimelineEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
