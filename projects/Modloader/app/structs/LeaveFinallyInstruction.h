#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaveFinallyInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaveFinallyInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaveFinallyInstruction_DEFINED)
#define IL2CPP_STRUCT_LeaveFinallyInstruction_DEFINED
struct LeaveFinallyInstruction__Class;
struct LeaveFinallyInstruction {
    struct LeaveFinallyInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LeaveFinallyInstruction_FWDDECL)
#define IL2CPP_STRUCT_LeaveFinallyInstruction_FWDDECL
#include <Modloader/app/structs/LeaveFinallyInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaveFinallyInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaveFinallyInstruction_DEFINED) && !defined(IL2CPP_STRUCT_LeaveFinallyInstruction_FWDDECL)
#include <Modloader/app/structs/LeaveFinallyInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaveFinallyInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
