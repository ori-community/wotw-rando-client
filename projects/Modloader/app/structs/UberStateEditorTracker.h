#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateEditorTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateEditorTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateEditorTracker_DEFINED)
#define IL2CPP_STRUCT_UberStateEditorTracker_DEFINED
struct UberStateEditorTracker__Class;
struct UberStateEditorTracker {
    struct UberStateEditorTracker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateEditorTracker_FWDDECL)
#define IL2CPP_STRUCT_UberStateEditorTracker_FWDDECL
#include <Modloader/app/structs/UberStateEditorTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateEditorTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateEditorTracker_DEFINED) && !defined(IL2CPP_STRUCT_UberStateEditorTracker_FWDDECL)
#include <Modloader/app/structs/UberStateEditorTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateEditorTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
