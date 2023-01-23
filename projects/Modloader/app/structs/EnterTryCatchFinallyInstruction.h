#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnterTryCatchFinallyInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnterTryCatchFinallyInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterTryCatchFinallyInstruction_DEFINED)
#include <Modloader/app/structs/EnterTryCatchFinallyInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_EnterTryCatchFinallyInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_EnterTryCatchFinallyInstruction_DEFINED
struct EnterTryCatchFinallyInstruction__Class;
struct EnterTryCatchFinallyInstruction {
    struct EnterTryCatchFinallyInstruction__Class* klass;
    MonitorData* monitor;
    struct EnterTryCatchFinallyInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnterTryCatchFinallyInstruction_FWDDECL)
#define IL2CPP_STRUCT_EnterTryCatchFinallyInstruction_FWDDECL
#include <Modloader/app/structs/EnterTryCatchFinallyInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_EnterTryCatchFinallyInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterTryCatchFinallyInstruction_DEFINED) && !defined(IL2CPP_STRUCT_EnterTryCatchFinallyInstruction_FWDDECL)
#include <Modloader/app/structs/EnterTryCatchFinallyInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnterTryCatchFinallyInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
