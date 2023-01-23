#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadLocalInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadLocalInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadLocalInstruction_DEFINED)
#include <Modloader/app/structs/LoadLocalInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_LoadLocalInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadLocalInstruction_DEFINED
struct LoadLocalInstruction__Class;
struct LoadLocalInstruction {
    struct LoadLocalInstruction__Class* klass;
    MonitorData* monitor;
    struct LoadLocalInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadLocalInstruction_FWDDECL)
#define IL2CPP_STRUCT_LoadLocalInstruction_FWDDECL
#include <Modloader/app/structs/LoadLocalInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadLocalInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadLocalInstruction_DEFINED) && !defined(IL2CPP_STRUCT_LoadLocalInstruction_FWDDECL)
#include <Modloader/app/structs/LoadLocalInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadLocalInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
