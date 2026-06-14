#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleAttackSelector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleAttackSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleAttackSelector_DEFINED)
#define IL2CPP_STRUCT_TurtleAttackSelector_DEFINED
struct TurtleAttackSelector__Class;
struct TurtleAttackSelector {
    struct TurtleAttackSelector__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TurtleAttackSelector_FWDDECL)
#define IL2CPP_STRUCT_TurtleAttackSelector_FWDDECL
#include <Modloader/app/structs/TurtleAttackSelector__Class.h>
#endif
#undef IL2CPP_STRUCT_TurtleAttackSelector_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleAttackSelector_DEFINED) && !defined(IL2CPP_STRUCT_TurtleAttackSelector_FWDDECL)
#include <Modloader/app/structs/TurtleAttackSelector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleAttackSelector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
