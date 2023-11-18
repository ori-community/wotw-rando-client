#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionToggler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionToggler_DEFINED)
#include <Modloader/app/structs/InteractionToggler__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionToggler__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionToggler_DEFINED
struct InteractionToggler__Class;
struct InteractionToggler {
    struct InteractionToggler__Class* klass;
    MonitorData* monitor;
    struct InteractionToggler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionToggler_FWDDECL)
#define IL2CPP_STRUCT_InteractionToggler_FWDDECL
#include <Modloader/app/structs/InteractionToggler__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionToggler_DEFINED) && !defined(IL2CPP_STRUCT_InteractionToggler_FWDDECL)
#include <Modloader/app/structs/InteractionToggler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionToggler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
