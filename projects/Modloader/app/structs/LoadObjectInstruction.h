#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadObjectInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadObjectInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadObjectInstruction_DEFINED)
#include <Modloader/app/structs/LoadObjectInstruction__Fields.h>
#if defined(IL2CPP_STRUCT_LoadObjectInstruction__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadObjectInstruction_DEFINED
struct LoadObjectInstruction__Class;
struct LoadObjectInstruction {
    struct LoadObjectInstruction__Class* klass;
    MonitorData* monitor;
    struct LoadObjectInstruction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadObjectInstruction_FWDDECL)
#define IL2CPP_STRUCT_LoadObjectInstruction_FWDDECL
#include <Modloader/app/structs/LoadObjectInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadObjectInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadObjectInstruction_DEFINED) && !defined(IL2CPP_STRUCT_LoadObjectInstruction_FWDDECL)
#include <Modloader/app/structs/LoadObjectInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadObjectInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
