#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RightShiftInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RightShiftInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RightShiftInstruction_DEFINED)
#define IL2CPP_STRUCT_RightShiftInstruction_DEFINED
struct RightShiftInstruction__Class;
struct RightShiftInstruction {
    struct RightShiftInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RightShiftInstruction_FWDDECL)
#define IL2CPP_STRUCT_RightShiftInstruction_FWDDECL
#include <Modloader/app/structs/RightShiftInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_RightShiftInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RightShiftInstruction_DEFINED) && !defined(IL2CPP_STRUCT_RightShiftInstruction_FWDDECL)
#include <Modloader/app/structs/RightShiftInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RightShiftInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
