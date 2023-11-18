#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateMatcher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateMatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateMatcher_DEFINED)
#include <Modloader/app/structs/UberStateMatcher__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateMatcher__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateMatcher_DEFINED
struct UberStateMatcher__Class;
struct UberStateMatcher {
    struct UberStateMatcher__Class* klass;
    MonitorData* monitor;
    struct UberStateMatcher__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateMatcher_FWDDECL)
#define IL2CPP_STRUCT_UberStateMatcher_FWDDECL
#include <Modloader/app/structs/UberStateMatcher__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateMatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateMatcher_DEFINED) && !defined(IL2CPP_STRUCT_UberStateMatcher_FWDDECL)
#include <Modloader/app/structs/UberStateMatcher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateMatcher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
