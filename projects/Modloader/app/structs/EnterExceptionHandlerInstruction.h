#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnterExceptionHandlerInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnterExceptionHandlerInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterExceptionHandlerInstruction_DEFINED)
#include <Modloader/app/structs/EnterExceptionHandlerInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_EnterExceptionHandlerInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_EnterExceptionHandlerInstruction_DEFINED
struct EnterExceptionHandlerInstruction__Class;
struct EnterExceptionHandlerInstruction {
    struct EnterExceptionHandlerInstruction__Class* klass;
    MonitorData* monitor;
    struct EnterExceptionHandlerInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnterExceptionHandlerInstruction_FWDDECL)
#define IL2CPP_STRUCT_EnterExceptionHandlerInstruction_FWDDECL
#include <Modloader/app/structs/EnterExceptionHandlerInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_EnterExceptionHandlerInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnterExceptionHandlerInstruction_DEFINED) && !defined(IL2CPP_STRUCT_EnterExceptionHandlerInstruction_FWDDECL)
#include <Modloader/app/structs/EnterExceptionHandlerInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnterExceptionHandlerInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
