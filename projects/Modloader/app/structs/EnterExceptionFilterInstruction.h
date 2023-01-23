#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnterExceptionFilterInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnterExceptionFilterInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterExceptionFilterInstruction_DEFINED)
#define IL2CPP_STRUCT_EnterExceptionFilterInstruction_DEFINED
struct EnterExceptionFilterInstruction__Class;
struct EnterExceptionFilterInstruction {
    struct EnterExceptionFilterInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EnterExceptionFilterInstruction_FWDDECL)
#define IL2CPP_STRUCT_EnterExceptionFilterInstruction_FWDDECL
#include <Modloader/app/structs/EnterExceptionFilterInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_EnterExceptionFilterInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterExceptionFilterInstruction_DEFINED) && !defined(IL2CPP_STRUCT_EnterExceptionFilterInstruction_FWDDECL)
#include <Modloader/app/structs/EnterExceptionFilterInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnterExceptionFilterInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
