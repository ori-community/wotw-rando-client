#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineDeathBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineDeathBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineDeathBehaviour_DEFINED)
#include <Modloader/app/structs/TimelineDeathBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineDeathBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineDeathBehaviour_DEFINED
struct TimelineDeathBehaviour__Class;
struct TimelineDeathBehaviour {
    struct TimelineDeathBehaviour__Class* klass;
    MonitorData* monitor;
    struct TimelineDeathBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineDeathBehaviour_FWDDECL)
#define IL2CPP_STRUCT_TimelineDeathBehaviour_FWDDECL
#include <Modloader/app/structs/TimelineDeathBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineDeathBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineDeathBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_TimelineDeathBehaviour_FWDDECL)
#include <Modloader/app/structs/TimelineDeathBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineDeathBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
