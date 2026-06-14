#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AssignLocalBoxedInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AssignLocalBoxedInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssignLocalBoxedInstruction_DEFINED)
#include <Modloader/app/structs/AssignLocalBoxedInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_AssignLocalBoxedInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_AssignLocalBoxedInstruction_DEFINED
struct AssignLocalBoxedInstruction__Class;
struct AssignLocalBoxedInstruction {
    struct AssignLocalBoxedInstruction__Class* klass;
    MonitorData* monitor;
    struct AssignLocalBoxedInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AssignLocalBoxedInstruction_FWDDECL)
#define IL2CPP_STRUCT_AssignLocalBoxedInstruction_FWDDECL
#include <Modloader/app/structs/AssignLocalBoxedInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_AssignLocalBoxedInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_AssignLocalBoxedInstruction_DEFINED) && !defined(IL2CPP_STRUCT_AssignLocalBoxedInstruction_FWDDECL)
#include <Modloader/app/structs/AssignLocalBoxedInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AssignLocalBoxedInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
