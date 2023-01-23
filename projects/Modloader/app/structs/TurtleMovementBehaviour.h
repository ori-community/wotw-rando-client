#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleMovementBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleMovementBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleMovementBehaviour_DEFINED)
#include <Modloader/app/structs/TurtleMovementBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TurtleMovementBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TurtleMovementBehaviour_DEFINED
struct TurtleMovementBehaviour__Class;
struct TurtleMovementBehaviour {
    struct TurtleMovementBehaviour__Class* klass;
    MonitorData* monitor;
    struct TurtleMovementBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtleMovementBehaviour_FWDDECL)
#define IL2CPP_STRUCT_TurtleMovementBehaviour_FWDDECL
#include <Modloader/app/structs/TurtleMovementBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_TurtleMovementBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleMovementBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_TurtleMovementBehaviour_FWDDECL)
#include <Modloader/app/structs/TurtleMovementBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleMovementBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
