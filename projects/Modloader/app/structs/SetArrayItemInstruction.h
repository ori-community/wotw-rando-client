#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetArrayItemInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetArrayItemInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetArrayItemInstruction_DEFINED)
#define IL2CPP_STRUCT_SetArrayItemInstruction_DEFINED
struct SetArrayItemInstruction__Class;
struct SetArrayItemInstruction {
    struct SetArrayItemInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SetArrayItemInstruction_FWDDECL)
#define IL2CPP_STRUCT_SetArrayItemInstruction_FWDDECL
#include <Modloader/app/structs/SetArrayItemInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetArrayItemInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetArrayItemInstruction_DEFINED) && !defined(IL2CPP_STRUCT_SetArrayItemInstruction_FWDDECL)
#include <Modloader/app/structs/SetArrayItemInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetArrayItemInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
