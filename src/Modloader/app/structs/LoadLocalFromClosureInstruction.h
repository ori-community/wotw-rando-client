#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadLocalFromClosureInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadLocalFromClosureInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadLocalFromClosureInstruction_DEFINED)
#include <Modloader/app/structs/LoadLocalFromClosureInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_LoadLocalFromClosureInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadLocalFromClosureInstruction_DEFINED
struct LoadLocalFromClosureInstruction__Class;
struct LoadLocalFromClosureInstruction {
    struct LoadLocalFromClosureInstruction__Class* klass;
    MonitorData* monitor;
    struct LoadLocalFromClosureInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadLocalFromClosureInstruction_FWDDECL)
#define IL2CPP_STRUCT_LoadLocalFromClosureInstruction_FWDDECL
#include <Modloader/app/structs/LoadLocalFromClosureInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadLocalFromClosureInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadLocalFromClosureInstruction_DEFINED) && !defined(IL2CPP_STRUCT_LoadLocalFromClosureInstruction_FWDDECL)
#include <Modloader/app/structs/LoadLocalFromClosureInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadLocalFromClosureInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
