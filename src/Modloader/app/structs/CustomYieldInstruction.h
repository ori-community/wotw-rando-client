#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomYieldInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomYieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomYieldInstruction_DEFINED)
#define IL2CPP_STRUCT_CustomYieldInstruction_DEFINED
struct CustomYieldInstruction__Class;
struct CustomYieldInstruction {
    struct CustomYieldInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CustomYieldInstruction_FWDDECL)
#define IL2CPP_STRUCT_CustomYieldInstruction_FWDDECL
#include <Modloader/app/structs/CustomYieldInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomYieldInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomYieldInstruction_DEFINED) && !defined(IL2CPP_STRUCT_CustomYieldInstruction_FWDDECL)
#include <Modloader/app/structs/CustomYieldInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomYieldInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
