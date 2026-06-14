#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugGuardBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugGuardBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugGuardBehaviour_DEFINED)
#include <Modloader/app/structs/HornBugGuardBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_HornBugGuardBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HornBugGuardBehaviour_DEFINED
struct HornBugGuardBehaviour__Class;
struct HornBugGuardBehaviour {
    struct HornBugGuardBehaviour__Class* klass;
    MonitorData* monitor;
    struct HornBugGuardBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugGuardBehaviour_FWDDECL)
#define IL2CPP_STRUCT_HornBugGuardBehaviour_FWDDECL
#include <Modloader/app/structs/HornBugGuardBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_HornBugGuardBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugGuardBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_HornBugGuardBehaviour_FWDDECL)
#include <Modloader/app/structs/HornBugGuardBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugGuardBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
