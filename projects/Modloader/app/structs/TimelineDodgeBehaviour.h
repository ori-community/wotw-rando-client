#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineDodgeBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineDodgeBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineDodgeBehaviour_DEFINED)
#include <Modloader/app/structs/TimelineDodgeBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineDodgeBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineDodgeBehaviour_DEFINED
struct TimelineDodgeBehaviour__Class;
struct TimelineDodgeBehaviour {
    struct TimelineDodgeBehaviour__Class* klass;
    MonitorData* monitor;
    struct TimelineDodgeBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineDodgeBehaviour_FWDDECL)
#define IL2CPP_STRUCT_TimelineDodgeBehaviour_FWDDECL
#include <Modloader/app/structs/TimelineDodgeBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineDodgeBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineDodgeBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_TimelineDodgeBehaviour_FWDDECL)
#include <Modloader/app/structs/TimelineDodgeBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineDodgeBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
