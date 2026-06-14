#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewArrayInitInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewArrayInitInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayInitInstruction_DEFINED)
#include <Modloader/app/structs/NewArrayInitInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_NewArrayInitInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_NewArrayInitInstruction_DEFINED
struct NewArrayInitInstruction__Class;
struct NewArrayInitInstruction {
    struct NewArrayInitInstruction__Class* klass;
    MonitorData* monitor;
    struct NewArrayInitInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewArrayInitInstruction_FWDDECL)
#define IL2CPP_STRUCT_NewArrayInitInstruction_FWDDECL
#include <Modloader/app/structs/NewArrayInitInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_NewArrayInitInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewArrayInitInstruction_DEFINED) && !defined(IL2CPP_STRUCT_NewArrayInitInstruction_FWDDECL)
#include <Modloader/app/structs/NewArrayInitInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewArrayInitInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
