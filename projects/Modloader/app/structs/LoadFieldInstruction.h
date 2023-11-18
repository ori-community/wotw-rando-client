#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadFieldInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadFieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadFieldInstruction_DEFINED)
#include <Modloader/app/structs/LoadFieldInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_LoadFieldInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadFieldInstruction_DEFINED
struct LoadFieldInstruction__Class;
struct LoadFieldInstruction {
    struct LoadFieldInstruction__Class* klass;
    MonitorData* monitor;
    struct LoadFieldInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadFieldInstruction_FWDDECL)
#define IL2CPP_STRUCT_LoadFieldInstruction_FWDDECL
#include <Modloader/app/structs/LoadFieldInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadFieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadFieldInstruction_DEFINED) && !defined(IL2CPP_STRUCT_LoadFieldInstruction_FWDDECL)
#include <Modloader/app/structs/LoadFieldInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadFieldInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
