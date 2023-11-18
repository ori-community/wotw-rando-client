#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogTransition_DEFINED)
#include <Modloader/app/structs/DialogTransition__Fields.h>
#if defined(IL2CPP_STRUCT_DialogTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_DialogTransition_DEFINED
struct DialogTransition__Class;
struct DialogTransition {
    struct DialogTransition__Class* klass;
    MonitorData* monitor;
    struct DialogTransition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DialogTransition_FWDDECL)
#define IL2CPP_STRUCT_DialogTransition_FWDDECL
#include <Modloader/app/structs/DialogTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_DialogTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogTransition_DEFINED) && !defined(IL2CPP_STRUCT_DialogTransition_FWDDECL)
#include <Modloader/app/structs/DialogTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
