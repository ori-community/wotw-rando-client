#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransitionEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransitionEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransitionEntry_DEFINED)
#include <Modloader/app/structs/TransitionEntry__Fields.h>
#if defined(IL2CPP_STRUCT_TransitionEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_TransitionEntry_DEFINED
struct TransitionEntry__Class;
struct TransitionEntry {
    struct TransitionEntry__Class* klass;
    MonitorData* monitor;
    struct TransitionEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransitionEntry_FWDDECL)
#define IL2CPP_STRUCT_TransitionEntry_FWDDECL
#include <Modloader/app/structs/TransitionEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_TransitionEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransitionEntry_DEFINED) && !defined(IL2CPP_STRUCT_TransitionEntry_FWDDECL)
#include <Modloader/app/structs/TransitionEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransitionEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
