#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleShellStateSelector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleShellStateSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShellStateSelector_DEFINED)
#define IL2CPP_STRUCT_TurtleShellStateSelector_DEFINED
struct TurtleShellStateSelector__Class;
struct TurtleShellStateSelector {
    struct TurtleShellStateSelector__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TurtleShellStateSelector_FWDDECL)
#define IL2CPP_STRUCT_TurtleShellStateSelector_FWDDECL
#include <Modloader/app/structs/TurtleShellStateSelector__Class.h>
#endif
#undef IL2CPP_STRUCT_TurtleShellStateSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleShellStateSelector_DEFINED) && !defined(IL2CPP_STRUCT_TurtleShellStateSelector_FWDDECL)
#include <Modloader/app/structs/TurtleShellStateSelector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleShellStateSelector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
