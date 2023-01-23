#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DivInstruction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DivInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DivInstruction_DEFINED)
#define IL2CPP_STRUCT_DivInstruction_DEFINED
struct DivInstruction__Class;
struct DivInstruction {
    struct DivInstruction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DivInstruction_FWDDECL)
#define IL2CPP_STRUCT_DivInstruction_FWDDECL
#include <Modloader/app/structs/DivInstruction__Class.h>
#endif
#undef IL2CPP_STRUCT_DivInstruction_INITIALIZING
#if !defined(IL2CPP_STRUCT_DivInstruction_DEFINED) && !defined(IL2CPP_STRUCT_DivInstruction_FWDDECL)
#include <Modloader/app/structs/DivInstruction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DivInstruction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
