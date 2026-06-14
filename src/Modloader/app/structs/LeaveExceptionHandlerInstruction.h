#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaveExceptionHandlerInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaveExceptionHandlerInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaveExceptionHandlerInstruction_DEFINED)
#include <Modloader/app/structs/LeaveExceptionHandlerInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_LeaveExceptionHandlerInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaveExceptionHandlerInstruction_DEFINED
struct LeaveExceptionHandlerInstruction__Class;
struct LeaveExceptionHandlerInstruction {
    struct LeaveExceptionHandlerInstruction__Class* klass;
    MonitorData* monitor;
    struct LeaveExceptionHandlerInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaveExceptionHandlerInstruction_FWDDECL)
#define IL2CPP_STRUCT_LeaveExceptionHandlerInstruction_FWDDECL
#include <Modloader/app/structs/LeaveExceptionHandlerInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaveExceptionHandlerInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaveExceptionHandlerInstruction_DEFINED) && !defined(IL2CPP_STRUCT_LeaveExceptionHandlerInstruction_FWDDECL)
#include <Modloader/app/structs/LeaveExceptionHandlerInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaveExceptionHandlerInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
