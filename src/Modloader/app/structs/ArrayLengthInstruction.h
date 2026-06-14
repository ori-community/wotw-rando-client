#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArrayLengthInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArrayLengthInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayLengthInstruction_DEFINED)
#define IL2CPP_STRUCT_ArrayLengthInstruction_DEFINED
struct ArrayLengthInstruction__Class;
struct ArrayLengthInstruction {
    struct ArrayLengthInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ArrayLengthInstruction_FWDDECL)
#define IL2CPP_STRUCT_ArrayLengthInstruction_FWDDECL
#include <Modloader/app/structs/ArrayLengthInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_ArrayLengthInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayLengthInstruction_DEFINED) && !defined(IL2CPP_STRUCT_ArrayLengthInstruction_FWDDECL)
#include <Modloader/app/structs/ArrayLengthInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArrayLengthInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
