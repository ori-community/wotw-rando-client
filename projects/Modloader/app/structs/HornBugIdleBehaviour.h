#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugIdleBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugIdleBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugIdleBehaviour_DEFINED)
#include <Modloader/app/structs/HornBugIdleBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_HornBugIdleBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HornBugIdleBehaviour_DEFINED
struct HornBugIdleBehaviour__Class;
struct HornBugIdleBehaviour {
    struct HornBugIdleBehaviour__Class* klass;
    MonitorData* monitor;
    struct HornBugIdleBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugIdleBehaviour_FWDDECL)
#define IL2CPP_STRUCT_HornBugIdleBehaviour_FWDDECL
#include <Modloader/app/structs/HornBugIdleBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_HornBugIdleBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugIdleBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_HornBugIdleBehaviour_FWDDECL)
#include <Modloader/app/structs/HornBugIdleBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugIdleBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
