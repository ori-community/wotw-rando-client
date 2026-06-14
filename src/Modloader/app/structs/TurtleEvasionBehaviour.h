#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleEvasionBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleEvasionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleEvasionBehaviour_DEFINED)
#include <Modloader/app/structs/TurtleEvasionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TurtleEvasionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TurtleEvasionBehaviour_DEFINED
struct TurtleEvasionBehaviour__Class;
struct TurtleEvasionBehaviour {
    struct TurtleEvasionBehaviour__Class* klass;
    MonitorData* monitor;
    struct TurtleEvasionBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtleEvasionBehaviour_FWDDECL)
#define IL2CPP_STRUCT_TurtleEvasionBehaviour_FWDDECL
#include <Modloader/app/structs/TurtleEvasionBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_TurtleEvasionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleEvasionBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_TurtleEvasionBehaviour_FWDDECL)
#include <Modloader/app/structs/TurtleEvasionBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleEvasionBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
