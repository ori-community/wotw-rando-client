#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstructionList_DebugView_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstructionList_DebugView_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionList_DebugView_DEFINED)
#include <Modloader/app/structs/InstructionList_DebugView__Fields.h>
#if defined(IL2CPP_STRUCT_InstructionList_DebugView__Fields_DEFINED)
#define IL2CPP_STRUCT_InstructionList_DebugView_DEFINED
struct InstructionList_DebugView__Class;
struct InstructionList_DebugView {
    struct InstructionList_DebugView__Class* klass;
    MonitorData* monitor;
    struct InstructionList_DebugView__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstructionList_DebugView_FWDDECL)
#define IL2CPP_STRUCT_InstructionList_DebugView_FWDDECL
#include <Modloader/app/structs/InstructionList_DebugView__Class.h>
#endif
#undef IL2CPP_STRUCT_InstructionList_DebugView_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionList_DebugView_DEFINED) && !defined(IL2CPP_STRUCT_InstructionList_DebugView_FWDDECL)
#include <Modloader/app/structs/InstructionList_DebugView.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstructionList_DebugView.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
