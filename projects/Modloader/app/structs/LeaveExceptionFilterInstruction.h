#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaveExceptionFilterInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaveExceptionFilterInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaveExceptionFilterInstruction_DEFINED)
#define IL2CPP_STRUCT_LeaveExceptionFilterInstruction_DEFINED
struct LeaveExceptionFilterInstruction__Class;
struct LeaveExceptionFilterInstruction {
    struct LeaveExceptionFilterInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LeaveExceptionFilterInstruction_FWDDECL)
#define IL2CPP_STRUCT_LeaveExceptionFilterInstruction_FWDDECL
#include <Modloader/app/structs/LeaveExceptionFilterInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaveExceptionFilterInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaveExceptionFilterInstruction_DEFINED) && !defined(IL2CPP_STRUCT_LeaveExceptionFilterInstruction_FWDDECL)
#include <Modloader/app/structs/LeaveExceptionFilterInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaveExceptionFilterInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
