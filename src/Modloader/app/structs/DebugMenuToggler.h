#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMenuToggler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMenuToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuToggler_DEFINED)
#include <Modloader/app/structs/DebugMenuToggler__Fields.h>
#if defined(IL2CPP_STRUCT_DebugMenuToggler__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugMenuToggler_DEFINED
struct DebugMenuToggler__Class;
struct DebugMenuToggler {
    struct DebugMenuToggler__Class* klass;
    MonitorData* monitor;
    struct DebugMenuToggler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugMenuToggler_FWDDECL)
#define IL2CPP_STRUCT_DebugMenuToggler_FWDDECL
#include <Modloader/app/structs/DebugMenuToggler__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugMenuToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuToggler_DEFINED) && !defined(IL2CPP_STRUCT_DebugMenuToggler_FWDDECL)
#include <Modloader/app/structs/DebugMenuToggler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMenuToggler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
