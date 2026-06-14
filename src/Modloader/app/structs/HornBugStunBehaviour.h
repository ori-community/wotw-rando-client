#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugStunBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugStunBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugStunBehaviour_DEFINED)
#include <Modloader/app/structs/HornBugStunBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_HornBugStunBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HornBugStunBehaviour_DEFINED
struct HornBugStunBehaviour__Class;
struct HornBugStunBehaviour {
    struct HornBugStunBehaviour__Class* klass;
    MonitorData* monitor;
    struct HornBugStunBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugStunBehaviour_FWDDECL)
#define IL2CPP_STRUCT_HornBugStunBehaviour_FWDDECL
#include <Modloader/app/structs/HornBugStunBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_HornBugStunBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugStunBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_HornBugStunBehaviour_FWDDECL)
#include <Modloader/app/structs/HornBugStunBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugStunBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
