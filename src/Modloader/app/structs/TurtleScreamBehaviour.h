#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleScreamBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleScreamBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleScreamBehaviour_DEFINED)
#include <Modloader/app/structs/TurtleScreamBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TurtleScreamBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TurtleScreamBehaviour_DEFINED
struct TurtleScreamBehaviour__Class;
struct TurtleScreamBehaviour {
    struct TurtleScreamBehaviour__Class* klass;
    MonitorData* monitor;
    struct TurtleScreamBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtleScreamBehaviour_FWDDECL)
#define IL2CPP_STRUCT_TurtleScreamBehaviour_FWDDECL
#include <Modloader/app/structs/TurtleScreamBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_TurtleScreamBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleScreamBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_TurtleScreamBehaviour_FWDDECL)
#include <Modloader/app/structs/TurtleScreamBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleScreamBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
