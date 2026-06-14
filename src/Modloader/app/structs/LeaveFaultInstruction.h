#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaveFaultInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaveFaultInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaveFaultInstruction_DEFINED)
#define IL2CPP_STRUCT_LeaveFaultInstruction_DEFINED
struct LeaveFaultInstruction__Class;
struct LeaveFaultInstruction {
    struct LeaveFaultInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LeaveFaultInstruction_FWDDECL)
#define IL2CPP_STRUCT_LeaveFaultInstruction_FWDDECL
#include <Modloader/app/structs/LeaveFaultInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaveFaultInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaveFaultInstruction_DEFINED) && !defined(IL2CPP_STRUCT_LeaveFaultInstruction_FWDDECL)
#include <Modloader/app/structs/LeaveFaultInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaveFaultInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
