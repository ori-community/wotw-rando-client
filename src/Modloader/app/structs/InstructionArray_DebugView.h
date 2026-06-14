#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstructionArray_DebugView_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstructionArray_DebugView_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionArray_DebugView_DEFINED)
#include <Modloader/app/structs/InstructionArray_DebugView__Fields.h>
#if defined(IL2CPP_STRUCT_InstructionArray_DebugView__Fields_DEFINED)
#define IL2CPP_STRUCT_InstructionArray_DebugView_DEFINED
struct InstructionArray_DebugView__Class;
struct InstructionArray_DebugView {
    struct InstructionArray_DebugView__Class* klass;
    MonitorData* monitor;
    struct InstructionArray_DebugView__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstructionArray_DebugView_FWDDECL)
#define IL2CPP_STRUCT_InstructionArray_DebugView_FWDDECL
#include <Modloader/app/structs/InstructionArray_DebugView__Class.h>
#endif
#undef IL2CPP_STRUCT_InstructionArray_DebugView_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionArray_DebugView_DEFINED) && !defined(IL2CPP_STRUCT_InstructionArray_DebugView_FWDDECL)
#include <Modloader/app/structs/InstructionArray_DebugView.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstructionArray_DebugView.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
