#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShellSlugShell_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShellSlugShell_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShellSlugShell_DEFINED)
#include <Modloader/app/structs/ShellSlugShell__Fields.h>
#if defined(IL2CPP_STRUCT_ShellSlugShell__Fields_DEFINED)
#define IL2CPP_STRUCT_ShellSlugShell_DEFINED
struct ShellSlugShell__Class;
struct ShellSlugShell {
    struct ShellSlugShell__Class* klass;
    MonitorData* monitor;
    struct ShellSlugShell__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShellSlugShell_FWDDECL)
#define IL2CPP_STRUCT_ShellSlugShell_FWDDECL
#include <Modloader/app/structs/ShellSlugShell__Class.h>
#endif
#undef IL2CPP_STRUCT_ShellSlugShell_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShellSlugShell_DEFINED) && !defined(IL2CPP_STRUCT_ShellSlugShell_FWDDECL)
#include <Modloader/app/structs/ShellSlugShell.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShellSlugShell.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
