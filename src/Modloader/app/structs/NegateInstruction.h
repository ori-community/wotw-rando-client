#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NegateInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NegateInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NegateInstruction_DEFINED)
#define IL2CPP_STRUCT_NegateInstruction_DEFINED
struct NegateInstruction__Class;
struct NegateInstruction {
    struct NegateInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NegateInstruction_FWDDECL)
#define IL2CPP_STRUCT_NegateInstruction_FWDDECL
#include <Modloader/app/structs/NegateInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_NegateInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NegateInstruction_DEFINED) && !defined(IL2CPP_STRUCT_NegateInstruction_FWDDECL)
#include <Modloader/app/structs/NegateInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NegateInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
