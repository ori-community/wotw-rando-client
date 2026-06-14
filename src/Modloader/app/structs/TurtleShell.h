#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleShell_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleShell_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShell_DEFINED)
#include <Modloader/app/structs/TurtleShell__Fields.h>
#if defined(IL2CPP_STRUCT_TurtleShell__Fields_DEFINED)
#define IL2CPP_STRUCT_TurtleShell_DEFINED
struct TurtleShell__Class;
struct TurtleShell {
    struct TurtleShell__Class* klass;
    MonitorData* monitor;
    struct TurtleShell__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtleShell_FWDDECL)
#define IL2CPP_STRUCT_TurtleShell_FWDDECL
#include <Modloader/app/structs/TurtleShell__Class.h>
#endif
#undef IL2CPP_STRUCT_TurtleShell_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShell_DEFINED) && !defined(IL2CPP_STRUCT_TurtleShell_FWDDECL)
#include <Modloader/app/structs/TurtleShell.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleShell.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
