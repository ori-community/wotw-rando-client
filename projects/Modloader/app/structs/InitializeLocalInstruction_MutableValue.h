#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InitializeLocalInstruction_MutableValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InitializeLocalInstruction_MutableValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitializeLocalInstruction_MutableValue_DEFINED)
#include <Modloader/app/structs/InitializeLocalInstruction_MutableValue__Fields.h>
#if defined(IL2CPP_STRUCT_InitializeLocalInstruction_MutableValue__Fields_DEFINED)
#define IL2CPP_STRUCT_InitializeLocalInstruction_MutableValue_DEFINED
struct InitializeLocalInstruction_MutableValue__Class;
struct InitializeLocalInstruction_MutableValue {
    struct InitializeLocalInstruction_MutableValue__Class* klass;
    MonitorData* monitor;
    struct InitializeLocalInstruction_MutableValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InitializeLocalInstruction_MutableValue_FWDDECL)
#define IL2CPP_STRUCT_InitializeLocalInstruction_MutableValue_FWDDECL
#include <Modloader/app/structs/InitializeLocalInstruction_MutableValue__Class.h>
#endif
#undef IL2CPP_STRUCT_InitializeLocalInstruction_MutableValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitializeLocalInstruction_MutableValue_DEFINED) && !defined(IL2CPP_STRUCT_InitializeLocalInstruction_MutableValue_FWDDECL)
#include <Modloader/app/structs/InitializeLocalInstruction_MutableValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InitializeLocalInstruction_MutableValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
