#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActiveTurtleShells_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActiveTurtleShells_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActiveTurtleShells_DEFINED)
#define IL2CPP_STRUCT_ActiveTurtleShells_DEFINED
struct ActiveTurtleShells__Class;
struct ActiveTurtleShells {
    struct ActiveTurtleShells__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ActiveTurtleShells_FWDDECL)
#define IL2CPP_STRUCT_ActiveTurtleShells_FWDDECL
#include <Modloader/app/structs/ActiveTurtleShells__Class.h>
#endif
#undef IL2CPP_STRUCT_ActiveTurtleShells_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActiveTurtleShells_DEFINED) && !defined(IL2CPP_STRUCT_ActiveTurtleShells_FWDDECL)
#include <Modloader/app/structs/ActiveTurtleShells.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActiveTurtleShells.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
