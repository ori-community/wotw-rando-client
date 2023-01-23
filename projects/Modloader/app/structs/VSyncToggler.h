#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VSyncToggler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VSyncToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_VSyncToggler_DEFINED)
#include <Modloader/app/structs/VSyncToggler__Fields.h>
#if defined(IL2CPP_STRUCT_VSyncToggler__Fields_DEFINED)
#define IL2CPP_STRUCT_VSyncToggler_DEFINED
struct VSyncToggler__Class;
struct VSyncToggler {
    struct VSyncToggler__Class* klass;
    MonitorData* monitor;
    struct VSyncToggler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VSyncToggler_FWDDECL)
#define IL2CPP_STRUCT_VSyncToggler_FWDDECL
#include <Modloader/app/structs/VSyncToggler__Class.h>
#endif
#undef IL2CPP_STRUCT_VSyncToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_VSyncToggler_DEFINED) && !defined(IL2CPP_STRUCT_VSyncToggler_FWDDECL)
#include <Modloader/app/structs/VSyncToggler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VSyncToggler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
