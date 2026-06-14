#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstructionArray__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstructionArray__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionArray__Boxed_DEFINED)
#include <Modloader/app/structs/InstructionArray.h>
#if defined(IL2CPP_STRUCT_InstructionArray_DEFINED)
#define IL2CPP_STRUCT_InstructionArray__Boxed_DEFINED
struct InstructionArray__Class;
struct InstructionArray__Boxed {
    struct InstructionArray__Class* klass;
    MonitorData* monitor;
    struct InstructionArray fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstructionArray__Boxed_FWDDECL)
#define IL2CPP_STRUCT_InstructionArray__Boxed_FWDDECL
#include <Modloader/app/structs/InstructionArray__Class.h>
#endif
#undef IL2CPP_STRUCT_InstructionArray__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionArray__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_InstructionArray__Boxed_FWDDECL)
#include <Modloader/app/structs/InstructionArray__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstructionArray__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
