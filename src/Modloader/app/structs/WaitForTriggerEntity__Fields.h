#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForTriggerEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForTriggerEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForTriggerEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForTriggerEntity__Fields_DEFINED
struct Condition_1;
struct WaitForTriggerEntity__Fields {
    struct TimelineEntity__Fields _;
    bool m_hasStarted;
    bool m_wasEverInside;
    float m_timer;
    bool UseTimeout;
    float Timeout;
    struct Condition_1* Condition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForTriggerEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaitForTriggerEntity__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#endif
#undef IL2CPP_STRUCT_WaitForTriggerEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForTriggerEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaitForTriggerEntity__Fields_FWDDECL)
#include <Modloader/app/structs/WaitForTriggerEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForTriggerEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
