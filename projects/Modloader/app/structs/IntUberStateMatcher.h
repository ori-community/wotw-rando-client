#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntUberStateMatcher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntUberStateMatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntUberStateMatcher_DEFINED)
#include <Modloader/app/structs/IntUberStateMatcher__Fields.h>
#if defined(IL2CPP_STRUCT_IntUberStateMatcher__Fields_DEFINED)
#define IL2CPP_STRUCT_IntUberStateMatcher_DEFINED
struct IntUberStateMatcher__Class;
struct IntUberStateMatcher {
    struct IntUberStateMatcher__Class* klass;
    MonitorData* monitor;
    struct IntUberStateMatcher__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntUberStateMatcher_FWDDECL)
#define IL2CPP_STRUCT_IntUberStateMatcher_FWDDECL
#include <Modloader/app/structs/IntUberStateMatcher__Class.h>
#endif
#undef IL2CPP_STRUCT_IntUberStateMatcher_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntUberStateMatcher_DEFINED) && !defined(IL2CPP_STRUCT_IntUberStateMatcher_FWDDECL)
#include <Modloader/app/structs/IntUberStateMatcher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntUberStateMatcher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
