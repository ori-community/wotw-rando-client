#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleAggroCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleAggroCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleAggroCondition_DEFINED)
#define IL2CPP_STRUCT_TurtleAggroCondition_DEFINED
struct TurtleAggroCondition__Class;
struct TurtleAggroCondition {
    struct TurtleAggroCondition__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TurtleAggroCondition_FWDDECL)
#define IL2CPP_STRUCT_TurtleAggroCondition_FWDDECL
#include <Modloader/app/structs/TurtleAggroCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_TurtleAggroCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleAggroCondition_DEFINED) && !defined(IL2CPP_STRUCT_TurtleAggroCondition_FWDDECL)
#include <Modloader/app/structs/TurtleAggroCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleAggroCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
