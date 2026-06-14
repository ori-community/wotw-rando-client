#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EqualInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EqualInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EqualInstruction_DEFINED)
#define IL2CPP_STRUCT_EqualInstruction_DEFINED
struct EqualInstruction__Class;
struct EqualInstruction {
    struct EqualInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EqualInstruction_FWDDECL)
#define IL2CPP_STRUCT_EqualInstruction_FWDDECL
#include <Modloader/app/structs/EqualInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_EqualInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EqualInstruction_DEFINED) && !defined(IL2CPP_STRUCT_EqualInstruction_FWDDECL)
#include <Modloader/app/structs/EqualInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EqualInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
