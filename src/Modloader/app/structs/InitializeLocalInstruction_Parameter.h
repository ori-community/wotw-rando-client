#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InitializeLocalInstruction_Parameter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InitializeLocalInstruction_Parameter_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitializeLocalInstruction_Parameter_DEFINED)
#include <Modloader/app/structs/InitializeLocalInstruction_Parameter__Fields.h>
#if defined(IL2CPP_STRUCT_InitializeLocalInstruction_Parameter__Fields_DEFINED)
#define IL2CPP_STRUCT_InitializeLocalInstruction_Parameter_DEFINED
struct InitializeLocalInstruction_Parameter__Class;
struct InitializeLocalInstruction_Parameter {
    struct InitializeLocalInstruction_Parameter__Class* klass;
    MonitorData* monitor;
    struct InitializeLocalInstruction_Parameter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InitializeLocalInstruction_Parameter_FWDDECL)
#define IL2CPP_STRUCT_InitializeLocalInstruction_Parameter_FWDDECL
#include <Modloader/app/structs/InitializeLocalInstruction_Parameter__Class.h>
#endif
#undef IL2CPP_STRUCT_InitializeLocalInstruction_Parameter_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitializeLocalInstruction_Parameter_DEFINED) && !defined(IL2CPP_STRUCT_InitializeLocalInstruction_Parameter_FWDDECL)
#include <Modloader/app/structs/InitializeLocalInstruction_Parameter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InitializeLocalInstruction_Parameter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
