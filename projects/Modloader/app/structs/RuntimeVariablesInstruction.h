#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeVariablesInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeVariablesInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeVariablesInstruction_DEFINED)
#include <Modloader/app/structs/RuntimeVariablesInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeVariablesInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeVariablesInstruction_DEFINED
struct RuntimeVariablesInstruction__Class;
struct RuntimeVariablesInstruction {
    struct RuntimeVariablesInstruction__Class* klass;
    MonitorData* monitor;
    struct RuntimeVariablesInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeVariablesInstruction_FWDDECL)
#define IL2CPP_STRUCT_RuntimeVariablesInstruction_FWDDECL
#include <Modloader/app/structs/RuntimeVariablesInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeVariablesInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeVariablesInstruction_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeVariablesInstruction_FWDDECL)
#include <Modloader/app/structs/RuntimeVariablesInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeVariablesInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
