#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadLocalBoxedInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadLocalBoxedInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadLocalBoxedInstruction_DEFINED)
#include <Modloader/app/structs/LoadLocalBoxedInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_LoadLocalBoxedInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadLocalBoxedInstruction_DEFINED
struct LoadLocalBoxedInstruction__Class;
struct LoadLocalBoxedInstruction {
    struct LoadLocalBoxedInstruction__Class* klass;
    MonitorData* monitor;
    struct LoadLocalBoxedInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadLocalBoxedInstruction_FWDDECL)
#define IL2CPP_STRUCT_LoadLocalBoxedInstruction_FWDDECL
#include <Modloader/app/structs/LoadLocalBoxedInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadLocalBoxedInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadLocalBoxedInstruction_DEFINED) && !defined(IL2CPP_STRUCT_LoadLocalBoxedInstruction_FWDDECL)
#include <Modloader/app/structs/LoadLocalBoxedInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadLocalBoxedInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
