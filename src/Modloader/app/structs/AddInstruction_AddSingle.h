#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddInstruction_AddSingle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddInstruction_AddSingle_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddInstruction_AddSingle_DEFINED)
#define IL2CPP_STRUCT_AddInstruction_AddSingle_DEFINED
struct AddInstruction_AddSingle__Class;
struct AddInstruction_AddSingle {
    struct AddInstruction_AddSingle__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AddInstruction_AddSingle_FWDDECL)
#define IL2CPP_STRUCT_AddInstruction_AddSingle_FWDDECL
#include <Modloader/app/structs/AddInstruction_AddSingle__Class.h>
#endif
#undef IL2CPP_STRUCT_AddInstruction_AddSingle_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddInstruction_AddSingle_DEFINED) && !defined(IL2CPP_STRUCT_AddInstruction_AddSingle_FWDDECL)
#include <Modloader/app/structs/AddInstruction_AddSingle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddInstruction_AddSingle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
