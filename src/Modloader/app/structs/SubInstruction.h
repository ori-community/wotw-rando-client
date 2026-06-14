#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SubInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SubInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubInstruction_DEFINED)
#define IL2CPP_STRUCT_SubInstruction_DEFINED
struct SubInstruction__Class;
struct SubInstruction {
    struct SubInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SubInstruction_FWDDECL)
#define IL2CPP_STRUCT_SubInstruction_FWDDECL
#include <Modloader/app/structs/SubInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_SubInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubInstruction_DEFINED) && !defined(IL2CPP_STRUCT_SubInstruction_FWDDECL)
#include <Modloader/app/structs/SubInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SubInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
