#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InitializeLocalInstruction_Reference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InitializeLocalInstruction_Reference_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitializeLocalInstruction_Reference_DEFINED)
#include <Modloader/app/structs/InitializeLocalInstruction_Reference__Fields.h>
#if defined(IL2CPP_STRUCT_InitializeLocalInstruction_Reference__Fields_DEFINED)
#define IL2CPP_STRUCT_InitializeLocalInstruction_Reference_DEFINED
struct InitializeLocalInstruction_Reference__Class;
struct InitializeLocalInstruction_Reference {
    struct InitializeLocalInstruction_Reference__Class* klass;
    MonitorData* monitor;
    struct InitializeLocalInstruction_Reference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InitializeLocalInstruction_Reference_FWDDECL)
#define IL2CPP_STRUCT_InitializeLocalInstruction_Reference_FWDDECL
#include <Modloader/app/structs/InitializeLocalInstruction_Reference__Class.h>
#endif
#undef IL2CPP_STRUCT_InitializeLocalInstruction_Reference_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitializeLocalInstruction_Reference_DEFINED) && !defined(IL2CPP_STRUCT_InitializeLocalInstruction_Reference_FWDDECL)
#include <Modloader/app/structs/InitializeLocalInstruction_Reference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InitializeLocalInstruction_Reference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
