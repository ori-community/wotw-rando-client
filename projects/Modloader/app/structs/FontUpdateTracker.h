#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FontUpdateTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FontUpdateTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_FontUpdateTracker_DEFINED)
#define IL2CPP_STRUCT_FontUpdateTracker_DEFINED
struct FontUpdateTracker__Class;
struct FontUpdateTracker {
    struct FontUpdateTracker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FontUpdateTracker_FWDDECL)
#define IL2CPP_STRUCT_FontUpdateTracker_FWDDECL
#include <Modloader/app/structs/FontUpdateTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_FontUpdateTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_FontUpdateTracker_DEFINED) && !defined(IL2CPP_STRUCT_FontUpdateTracker_FWDDECL)
#include <Modloader/app/structs/FontUpdateTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FontUpdateTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
