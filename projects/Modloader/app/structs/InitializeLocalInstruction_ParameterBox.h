#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InitializeLocalInstruction_ParameterBox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InitializeLocalInstruction_ParameterBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitializeLocalInstruction_ParameterBox_DEFINED)
#include <Modloader/app/structs/InitializeLocalInstruction_ParameterBox__Fields.h>
#if defined(IL2CPP_STRUCT_InitializeLocalInstruction_ParameterBox__Fields_DEFINED)
#define IL2CPP_STRUCT_InitializeLocalInstruction_ParameterBox_DEFINED
struct InitializeLocalInstruction_ParameterBox__Class;
struct InitializeLocalInstruction_ParameterBox {
    struct InitializeLocalInstruction_ParameterBox__Class* klass;
    MonitorData* monitor;
    struct InitializeLocalInstruction_ParameterBox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InitializeLocalInstruction_ParameterBox_FWDDECL)
#define IL2CPP_STRUCT_InitializeLocalInstruction_ParameterBox_FWDDECL
#include <Modloader/app/structs/InitializeLocalInstruction_ParameterBox__Class.h>
#endif
#undef IL2CPP_STRUCT_InitializeLocalInstruction_ParameterBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitializeLocalInstruction_ParameterBox_DEFINED) && !defined(IL2CPP_STRUCT_InitializeLocalInstruction_ParameterBox_FWDDECL)
#include <Modloader/app/structs/InitializeLocalInstruction_ParameterBox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InitializeLocalInstruction_ParameterBox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
