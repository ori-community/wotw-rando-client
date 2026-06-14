#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MulOvfInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MulOvfInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MulOvfInstruction_DEFINED)
#define IL2CPP_STRUCT_MulOvfInstruction_DEFINED
struct MulOvfInstruction__Class;
struct MulOvfInstruction {
    struct MulOvfInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MulOvfInstruction_FWDDECL)
#define IL2CPP_STRUCT_MulOvfInstruction_FWDDECL
#include <Modloader/app/structs/MulOvfInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_MulOvfInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MulOvfInstruction_DEFINED) && !defined(IL2CPP_STRUCT_MulOvfInstruction_FWDDECL)
#include <Modloader/app/structs/MulOvfInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MulOvfInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
