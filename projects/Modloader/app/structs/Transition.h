#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Transition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Transition_INITIALIZING
#if !defined(IL2CPP_STRUCT_Transition_DEFINED)
#include <Modloader/app/structs/Transition__Fields.h>
#if defined(IL2CPP_STRUCT_Transition__Fields_DEFINED)
#define IL2CPP_STRUCT_Transition_DEFINED
struct Transition__Class;
struct Transition {
    struct Transition__Class* klass;
    MonitorData* monitor;
    struct Transition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Transition_FWDDECL)
#define IL2CPP_STRUCT_Transition_FWDDECL
#include <Modloader/app/structs/Transition__Class.h>
#endif
#undef IL2CPP_STRUCT_Transition_INITIALIZING
#if !defined(IL2CPP_STRUCT_Transition_DEFINED) && !defined(IL2CPP_STRUCT_Transition_FWDDECL)
#include <Modloader/app/structs/Transition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Transition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
