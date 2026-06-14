#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstructionList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstructionList_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionList_DEFINED)
#include <Modloader/app/structs/InstructionList__Fields.h>
#if defined(IL2CPP_STRUCT_InstructionList__Fields_DEFINED)
#define IL2CPP_STRUCT_InstructionList_DEFINED
struct InstructionList__Class;
struct InstructionList {
    struct InstructionList__Class* klass;
    MonitorData* monitor;
    struct InstructionList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstructionList_FWDDECL)
#define IL2CPP_STRUCT_InstructionList_FWDDECL
#include <Modloader/app/structs/InstructionList__Class.h>
#endif
#undef IL2CPP_STRUCT_InstructionList_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstructionList_DEFINED) && !defined(IL2CPP_STRUCT_InstructionList_FWDDECL)
#include <Modloader/app/structs/InstructionList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstructionList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
