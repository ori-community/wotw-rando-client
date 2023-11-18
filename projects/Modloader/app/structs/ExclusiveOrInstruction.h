#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExclusiveOrInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExclusiveOrInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExclusiveOrInstruction_DEFINED)
#define IL2CPP_STRUCT_ExclusiveOrInstruction_DEFINED
struct ExclusiveOrInstruction__Class;
struct ExclusiveOrInstruction {
    struct ExclusiveOrInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExclusiveOrInstruction_FWDDECL)
#define IL2CPP_STRUCT_ExclusiveOrInstruction_FWDDECL
#include <Modloader/app/structs/ExclusiveOrInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_ExclusiveOrInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExclusiveOrInstruction_DEFINED) && !defined(IL2CPP_STRUCT_ExclusiveOrInstruction_FWDDECL)
#include <Modloader/app/structs/ExclusiveOrInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExclusiveOrInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
