#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceJobTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceJobTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceJobTracker_DEFINED)
#include <Modloader/app/structs/TimesliceJobTracker__Fields.h>
#if defined(IL2CPP_STRUCT_TimesliceJobTracker__Fields_DEFINED)
#define IL2CPP_STRUCT_TimesliceJobTracker_DEFINED
struct TimesliceJobTracker__Class;
struct TimesliceJobTracker {
    struct TimesliceJobTracker__Class* klass;
    MonitorData* monitor;
    struct TimesliceJobTracker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimesliceJobTracker_FWDDECL)
#define IL2CPP_STRUCT_TimesliceJobTracker_FWDDECL
#include <Modloader/app/structs/TimesliceJobTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_TimesliceJobTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceJobTracker_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceJobTracker_FWDDECL)
#include <Modloader/app/structs/TimesliceJobTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceJobTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
