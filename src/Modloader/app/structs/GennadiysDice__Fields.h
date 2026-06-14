#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GennadiysDice__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GennadiysDice__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GennadiysDice__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_GennadiysDice__Fields_DEFINED
struct String__Array;
struct EventDescriptorSet;
struct GennadiysDice__Fields {
    struct TimelineEntity__Fields _;
    int32_t m_count;
    bool m_oneDone;
    bool m_twoDone;
    bool m_threeDone;
    bool m_fourDone;
    bool m_fiveDone;
    bool m_sixDone;
    float m_total;
    float m_timer;
    struct String__Array* m_eventNames;
    struct EventDescriptorSet* m_eventSet;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GennadiysDice__Fields_FWDDECL)
#define IL2CPP_STRUCT_GennadiysDice__Fields_FWDDECL
#include <Modloader/app/structs/EventDescriptorSet.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_GennadiysDice__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GennadiysDice__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GennadiysDice__Fields_FWDDECL)
#include <Modloader/app/structs/GennadiysDice__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GennadiysDice__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
