#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnterFaultInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnterFaultInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterFaultInstruction_DEFINED)
#include <Modloader/app/structs/EnterFaultInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_EnterFaultInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_EnterFaultInstruction_DEFINED
struct EnterFaultInstruction__Class;
struct EnterFaultInstruction {
    struct EnterFaultInstruction__Class* klass;
    MonitorData* monitor;
    struct EnterFaultInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnterFaultInstruction_FWDDECL)
#define IL2CPP_STRUCT_EnterFaultInstruction_FWDDECL
#include <Modloader/app/structs/EnterFaultInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_EnterFaultInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterFaultInstruction_DEFINED) && !defined(IL2CPP_STRUCT_EnterFaultInstruction_FWDDECL)
#include <Modloader/app/structs/EnterFaultInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnterFaultInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
