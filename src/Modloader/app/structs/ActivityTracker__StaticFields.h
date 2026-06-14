#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivityTracker__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivityTracker__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityTracker__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ActivityTracker__StaticFields_DEFINED
struct ActivityTracker;
struct ActivityTracker__StaticFields {
    struct ActivityTracker* s_activityTrackerInstance;
    int64_t m_nextId;
};
#endif
#if !defined(IL2CPP_STRUCT_ActivityTracker__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ActivityTracker__StaticFields_FWDDECL
#include <Modloader/app/structs/ActivityTracker.h>
#endif
#undef IL2CPP_STRUCT_ActivityTracker__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivityTracker__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ActivityTracker__StaticFields_FWDDECL)
#include <Modloader/app/structs/ActivityTracker__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivityTracker__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
