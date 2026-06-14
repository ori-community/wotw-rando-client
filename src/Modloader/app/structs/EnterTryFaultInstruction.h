#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnterTryFaultInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnterTryFaultInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterTryFaultInstruction_DEFINED)
#include <Modloader/app/structs/EnterTryFaultInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_EnterTryFaultInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_EnterTryFaultInstruction_DEFINED
struct EnterTryFaultInstruction__Class;
struct EnterTryFaultInstruction {
    struct EnterTryFaultInstruction__Class* klass;
    MonitorData* monitor;
    struct EnterTryFaultInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnterTryFaultInstruction_FWDDECL)
#define IL2CPP_STRUCT_EnterTryFaultInstruction_FWDDECL
#include <Modloader/app/structs/EnterTryFaultInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_EnterTryFaultInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterTryFaultInstruction_DEFINED) && !defined(IL2CPP_STRUCT_EnterTryFaultInstruction_FWDDECL)
#include <Modloader/app/structs/EnterTryFaultInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnterTryFaultInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
