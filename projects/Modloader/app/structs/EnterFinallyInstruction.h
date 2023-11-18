#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnterFinallyInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnterFinallyInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterFinallyInstruction_DEFINED)
#include <Modloader/app/structs/EnterFinallyInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_EnterFinallyInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_EnterFinallyInstruction_DEFINED
struct EnterFinallyInstruction__Class;
struct EnterFinallyInstruction {
    struct EnterFinallyInstruction__Class* klass;
    MonitorData* monitor;
    struct EnterFinallyInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnterFinallyInstruction_FWDDECL)
#define IL2CPP_STRUCT_EnterFinallyInstruction_FWDDECL
#include <Modloader/app/structs/EnterFinallyInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_EnterFinallyInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterFinallyInstruction_DEFINED) && !defined(IL2CPP_STRUCT_EnterFinallyInstruction_FWDDECL)
#include <Modloader/app/structs/EnterFinallyInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnterFinallyInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
