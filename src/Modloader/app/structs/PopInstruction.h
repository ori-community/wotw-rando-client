#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PopInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PopInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PopInstruction_DEFINED)
#define IL2CPP_STRUCT_PopInstruction_DEFINED
struct PopInstruction__Class;
struct PopInstruction {
    struct PopInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PopInstruction_FWDDECL)
#define IL2CPP_STRUCT_PopInstruction_FWDDECL
#include <Modloader/app/structs/PopInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_PopInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PopInstruction_DEFINED) && !defined(IL2CPP_STRUCT_PopInstruction_FWDDECL)
#include <Modloader/app/structs/PopInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PopInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
