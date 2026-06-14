#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssignLocalToClosureInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssignLocalToClosureInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssignLocalToClosureInstruction_DEFINED)
#include <Modloader/app/structs/AssignLocalToClosureInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_AssignLocalToClosureInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_AssignLocalToClosureInstruction_DEFINED
struct AssignLocalToClosureInstruction__Class;
struct AssignLocalToClosureInstruction {
    struct AssignLocalToClosureInstruction__Class* klass;
    MonitorData* monitor;
    struct AssignLocalToClosureInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssignLocalToClosureInstruction_FWDDECL)
#define IL2CPP_STRUCT_AssignLocalToClosureInstruction_FWDDECL
#include <Modloader/app/structs/AssignLocalToClosureInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_AssignLocalToClosureInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssignLocalToClosureInstruction_DEFINED) && !defined(IL2CPP_STRUCT_AssignLocalToClosureInstruction_FWDDECL)
#include <Modloader/app/structs/AssignLocalToClosureInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssignLocalToClosureInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
